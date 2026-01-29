#include "Translator.hpp"
#ifdef WIN32
#include <windows.h>
#endif

namespace YimMenu

	{
		std::string Translator::EnsureUTF8(const char* str)
		{
			return std::string(str);
		}


	void Translator::InitializeChineseTranslations()
	{
		// ===== 主菜單分類 =====
		m_Translations["Self"] = reinterpret_cast<const char*>(u8"自我");
		m_Translations["Vehicle"] = reinterpret_cast<const char*>(u8"載具");
		m_Translations["Teleport"] = reinterpret_cast<const char*>(u8"傳送");
		m_Translations["Network"] = reinterpret_cast<const char*>(u8"網絡");
		m_Translations["Players"] = reinterpret_cast<const char*>(u8"玩家列表");
		m_Translations["World"] = reinterpret_cast<const char*>(u8"世界");
		m_Translations["Recovery"] = reinterpret_cast<const char*>(u8"資源與恢復");
		m_Translations["Settings"] = reinterpret_cast<const char*>(u8"設置");
		m_Translations["Debug"] = reinterpret_cast<const char*>(u8"調試");

		// ===== 通用分類 =====
		m_Translations["Main"] = reinterpret_cast<const char*>(u8"主要");
		m_Translations["Globals"] = reinterpret_cast<const char*>(u8"全局");
		m_Translations["Movement"] = reinterpret_cast<const char*>(u8"移動");
		m_Translations["Tools"] = reinterpret_cast<const char*>(u8"工具");
		m_Translations["Special Ability"] = reinterpret_cast<const char*>(u8"特殊能力");
		m_Translations["Wanted"] = reinterpret_cast<const char*>(u8"通緝等級");
		m_Translations["Misc"] = reinterpret_cast<const char*>(u8"雜項");
		m_Translations["Weapons"] = reinterpret_cast<const char*>(u8"武器");
		m_Translations["Outfit Editor"] = reinterpret_cast<const char*>(u8"服裝編輯器");
		m_Translations["Session"] = reinterpret_cast<const char*>(u8"戰局");
		m_Translations["Hotkeys"] = reinterpret_cast<const char*>(u8"熱鍵");
		m_Translations["GUI"] = reinterpret_cast<const char*>(u8"用戶界面");
		m_Translations["Businesses"] = reinterpret_cast<const char*>(u8"商業資產");
		m_Translations["Casino"] = reinterpret_cast<const char*>(u8"賭場");
		m_Translations["General"] = reinterpret_cast<const char*>(u8"通用");
		m_Translations["IPLs"] = reinterpret_cast<const char*>(u8"地圖建築 (IPL)");
		m_Translations["Join"] = reinterpret_cast<const char*>(u8"加入");
		m_Translations["Bounty"] = reinterpret_cast<const char*>(u8"懸賞");
		m_Translations["Toxic"] = reinterpret_cast<const char*>(u8"惡搞");

		// ===== 載具子菜單 =====
		m_Translations["Spawn Vehicle"] = reinterpret_cast<const char*>(u8"生成載具");
		m_Translations["Vehicle Editor"] = reinterpret_cast<const char*>(u8"載具編輯器");
		m_Translations["Saved Vehicles"] = reinterpret_cast<const char*>(u8"已保存載具");

		// ===== 傳送子菜單 =====
		m_Translations["Custom Locations"] = reinterpret_cast<const char*>(u8"自定義位置");

		// ===== 設置子菜單 =====
		m_Translations["GUI Settings"] = reinterpret_cast<const char*>(u8"界面設置");
		m_Translations["Customize"] = reinterpret_cast<const char*>(u8"自定義");

		// ===== 通用 UI =====
		m_Translations["Godmode"] = reinterpret_cast<const char*>(u8"無敵模式");
		m_Translations["Keep Fixed"] = reinterpret_cast<const char*>(u8"保持維修狀態");
		m_Translations["Lower Stance"] = reinterpret_cast<const char*>(u8"降低姿態");
		m_Translations["Level"] = reinterpret_cast<const char*>(u8"等級");
	}

	void Translator::Initialize()
	{
		if (m_Initialized)
			return;

		#ifdef _WIN32
		// 设置控制台为 UTF-8 模式
		SetConsoleOutputCP(65001);
		SetConsoleCP(65001);
#endif

		InitializeChineseTranslations();
		m_Initialized = true;
	}

	std::string Translator::Get(const std::string& key)
	{
		if (!m_Initialized)
			Initialize();

		auto it = m_Translations.find(key);
		if (it != m_Translations.end())
			return it->second;

		return key;
	}
}