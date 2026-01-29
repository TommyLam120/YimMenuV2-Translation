// Fonts.cpp
#include "Fonts.hpp"
#include "imgui.h"
#include <filesystem>
#include <windows.h>

namespace YimMenu::Fonts
{
	const uint8_t MainFont[78948] = { /* ... */ };
	const uint8_t IconFont[1049188] = { /* ... */ };
	
	bool HasSystemChineseFont()
	{
		const char* testPaths[] = {
			"C:\\Windows\\Fonts\\msyh.ttc",
			"C:\\Windows\\Fonts\\msyh.ttf",
			"C:\\Windows\\Fonts\\simhei.ttf",
			"C:\\Windows\\Fonts\\simsun.ttc",
		};
		
		for (const char* path : testPaths)
		{
			if (std::filesystem::exists(path))
				return true;
		}
		
		return false;
	}
	
	bool InitializeWithChineseSupport(const FontSettings& settings)
	{
		ImGuiIO& io = ImGui::GetIO();
		io.Fonts->Clear();
		
		// 先加載默認英文字體
		ImFont* mainFont = io.Fonts->AddFontFromMemoryTTF(
			(void*)MainFont, sizeof(MainFont),
			settings.Size
		);
		
		// 嘗試加載中文字體
		bool chineseLoaded = false;
		
		if (settings.UseSystemChineseFont && HasSystemChineseFont())
		{
			// 嘗試系統字體路徑
			const char* fontPaths[] = {
				"C:\\Windows\\Fonts\\msyh.ttc",
				"C:\\Windows\\Fonts\\msyh.ttf",
				"C:\\Windows\\Fonts\\simhei.ttf",
			};
			
			for (const char* path : fontPaths)
			{
				if (std::filesystem::exists(path))
				{
					ImFontConfig config;
					if (settings.MergeWithDefault)
					{
						config.MergeMode = true;
						config.GlyphMinAdvanceX = settings.Size;
					}
					
					ImFont* chineseFont = io.Fonts->AddFontFromFileTTF(
						path,
						settings.Size,
						settings.MergeWithDefault ? &config : nullptr,
						io.Fonts->GetGlyphRangesChineseFull()
					);
					
					if (chineseFont)
					{
						chineseLoaded = true;
						if (!settings.MergeWithDefault)
							io.FontDefault = chineseFont;
						break;
					}
				}
			}
		}
		
		// 如果系統字體失敗，嘗試自定義路徑
		if (!chineseLoaded && settings.CustomChineseFontPath)
		{
			if (std::filesystem::exists(settings.CustomChineseFontPath))
			{
				ImFontConfig config;
				if (settings.MergeWithDefault)
				{
					config.MergeMode = true;
					config.GlyphMinAdvanceX = settings.Size;
				}
				
				ImFont* chineseFont = io.Fonts->AddFontFromFileTTF(
					settings.CustomChineseFontPath,
					settings.Size,
					settings.MergeWithDefault ? &config : nullptr,
					io.Fonts->GetGlyphRangesChineseFull()
				);
				
				if (chineseFont)
				{
					chineseLoaded = true;
					if (!settings.MergeWithDefault)
						io.FontDefault = chineseFont;
				}
			}
		}
		
		// 設置默認字體
		if (settings.MergeWithDefault || !chineseLoaded)
			io.FontDefault = mainFont;
		
		io.Fonts->Build();
		return chineseLoaded;
	}
}