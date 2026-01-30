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
		m_Translations["Mobile Radio"] = reinterpret_cast<const char*>(u8"移動電台");
		m_Translations["Keep Player Clean"] = reinterpret_cast<const char*>(u8"保持角色清潔");
		m_Translations["invisible"] = reinterpret_cast<const char*>(u8"完全隐身");
		m_Translations["Disable Critical Hits"] = reinterpret_cast<const char*>(u8"禁用致命一擊");
		m_Translations["Format Money"] = reinterpret_cast<const char*>(u8"金錢格式化");
		m_Translations["Unlimite Doxygen"] = reinterpret_cast<const char*>(u8"無限氧氣");
		m_Translations["NoIdleKick"] = reinterpret_cast<const char*>(u8"防止閒置踢出");
		m_Translations["Noragdoll"] = reinterpret_cast<const char*>(u8"禁用布娃娃效果");
		m_Translations["Otr"] = reinterpret_cast<const char*>(u8"雷達隱藏");
		m_Translations["Skip Cut Scene"] = reinterpret_cast<const char*>(u8"跳過過場動畫");
		m_Translations["Skip Conversation"] = reinterpret_cast<const char*>(u8"跳過對話");
		m_Translations["Suicide"] = reinterpret_cast<const char*>(u8"自殺");
		m_Translations["Heal"] = reinterpret_cast<const char*>(u8"治療");
		m_Translations["Clear Damage"] = reinterpret_cast<const char*>(u8"清除傷害");
		m_Translations["Stand on Vehicles"] = reinterpret_cast<const char*>(u8"站在載具上");
		m_Translations["Disable Action Mode"] = reinterpret_cast<const char*>(u8"禁用動作模式");
		m_Translations["Super Run"] = reinterpret_cast<const char*>(u8"超級奔跑");
		m_Translations["Fill Inventory"] = reinterpret_cast<const char*>(u8"填滿物品欄");
		m_Translations["Open Wardrobe"] = reinterpret_cast<const char*>(u8"開放式衣櫃");
		m_Translations["Super Jump"] = reinterpret_cast<const char*>(u8"超級跳躍");
		m_Translations["Noclip"] = reinterpret_cast<const char*>(u8"穿牆模式");
		m_Translations["Noclip Speed"] = reinterpret_cast<const char*>(u8"穿牆速度");
		m_Translations["Freecam"] = reinterpret_cast<const char*>(u8"自由鏡頭");
		m_Translations["Move Rate Override"] = reinterpret_cast<const char*>(u8"移動速率覆蓋");
		m_Translations["Run Sprint Swim Multiplier"] = reinterpret_cast<const char*>(u8"奔跑衝刺游泳乘數");
		m_Translations["Never Wanted"] = reinterpret_cast<const char*>(u8"永不通緝");
		m_Translations["Freeze Wanted"] = reinterpret_cast<const char*>(u8"凍結通緝等級");
		m_Translations["Level"] = reinterpret_cast<const char*>(u8"等級");
		m_Translations["Clear Wanted"] = reinterpret_cast<const char*>(u8"清除通緝等級");
		m_Translations["Set Wanted"] = reinterpret_cast<const char*>(u8"設置通緝等級");
		m_Translations["Local Visibility"] = reinterpret_cast<const char*>(u8"本地可見性");
		m_Translations["Godmode"] = reinterpret_cast<const char*>(u8"無敵模式");
		m_Translations["Weapons"] = reinterpret_cast<const char*>(u8"武器");
		m_Translations["Session"] = reinterpret_cast<const char*>(u8"戰局");
		m_Translations["Hotkeys"] = reinterpret_cast<const char*>(u8"熱鍵");
		m_Translations["GUI"] = reinterpret_cast<const char*>(u8"用戶界面");
		m_Translations["Businesses"] = reinterpret_cast<const char*>(u8"商業資產");
		m_Translations["Casino"] = reinterpret_cast<const char*>(u8"賭場");
		m_Translations["Disable Critical Hits"] = reinterpret_cast<const char*>(u8"禁用致命一擊");
		m_Translations["Inf Special Ability"] = reinterpret_cast<const char*>(u8"無限特殊能力");
		m_Translations["mpspecialability"] = reinterpret_cast<const char*>(u8"啟用MP");
		m_Translations["Custom Locations"] = reinterpret_cast<const char*>(u8"自定義位置");
		m_Translations["Standon Vehicles"] = reinterpret_cast<const char*>(u8"站在車上面移動時*不會滑倒*");
		m_Translations["wantedslider"] = reinterpret_cast<const char*>(u8"通緝等級滑塊");
		m_Translations["moverateoverride"] = reinterpret_cast<const char*>(u8"移動速率覆蓋滑塊");
		m_Translations["runsprintswimmultiplier"] = reinterpret_cast<const char*>(u8"奔跑/衝刺/游泳 乘數滑塊");
		m_Translations["setwanted"] = reinterpret_cast<const char*>(u8"設置通緝等級按鈕");
		m_Translations["clearwanted"] = reinterpret_cast<const char*>(u8"清除通緝等級按鈕");

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