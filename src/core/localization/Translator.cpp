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
		m_Translations["Format Money"] = reinterpret_cast<const char*>(u8"貨幣格式化");
		m_Translations["Unlimite Doxygen"] = reinterpret_cast<const char*>(u8"無限氧氣");
		m_Translations["NoIdleKick"] = reinterpret_cast<const char*>(u8"防止閒置踢出");
		m_Translations["Noragdoll"] = reinterpret_cast<const char*>(u8"禁用布娃娃效果");
		m_Translations["Otr"] = reinterpret_cast<const char*>(u8"雷達隱藏");
		m_Translations["Skip Cut Scene"] = reinterpret_cast<const char*>(u8"跳過過場動畫");
		m_Translations["Skip Conversation"] = reinterpret_cast<const char*>(u8"跳過對話");
		m_Translations["Suicide"] = reinterpret_cast<const char*>(u8"自殺");
		m_Translations["Heal"] = reinterpret_cast<const char*>(u8"治療");
		m_Translations["Clear Damage"] = reinterpret_cast<const char*>(u8"清除傷害");
		m_Translations["Stand on Vehicles"] = reinterpret_cast<const char*>(u8"載具站立");
		m_Translations["Disable Action Mode"] = reinterpret_cast<const char*>(u8"禁用動作模式");
		m_Translations["Super Run"] = reinterpret_cast<const char*>(u8"超級奔跑");
		m_Translations["Fill Inventory"] = reinterpret_cast<const char*>(u8"填滿物品欄");
		m_Translations["Open Wardrobe"] = reinterpret_cast<const char*>(u8"遠程衣櫃");
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
		m_Translations["freecamspeed"] = reinterpret_cast<const char*>(u8"自由鏡頭速度滑塊");
		m_Translations["noclipspeed"] = reinterpret_cast<const char*>(u8"穿牆速度滑塊");
		m_Translations["selspecialability"] = reinterpret_cast<const char*>(u8"特殊能力選擇器");
		m_Translations["localvis"] = reinterpret_cast<const char*>(u8"本地可見性切換");
		m_Translations["Give Weapon"] = reinterpret_cast<const char*>(u8"給予武器");
		m_Translations["Remove Weapon"] = reinterpret_cast<const char*>(u8"移除武器");
		m_Translations["Select"] = reinterpret_cast<const char*>(u8"選擇");
		m_Translations["Kills With: %d"] = reinterpret_cast<const char*>(u8"擊殺數: %d");
		m_Translations["Deaths By: %d"] = reinterpret_cast<const char*>(u8"死亡數: %d");
		m_Translations["K/D Ratio: %.2f"] = reinterpret_cast<const char*>(u8"K/D 比率: %.2f");
		m_Translations["Headshots: %d"] = reinterpret_cast<const char*>(u8"爆頭數: %d");
		m_Translations["Accuracy: %d%%"] = reinterpret_cast<const char*>(u8"命中率: %d%%");
		m_Translations["Ammu-Nation"] = reinterpret_cast<const char*>(u8"軍火商");
		m_Translations["Custom Weapons"] = reinterpret_cast<const char*>(u8"自定義武器");
		m_Translations["Custom Weapon Type"] = reinterpret_cast<const char*>(u8"自定義武器類型");
		m_Translations["Gravity Gun"] = reinterpret_cast<const char*>(u8"重力槍");
		m_Translations["Vehicle Gun"] = reinterpret_cast<const char*>(u8"載具槍");
		m_Translations["Infinite Ammo"] = reinterpret_cast<const char*>(u8"無限彈藥");
		m_Translations["Infinite Clip"] = reinterpret_cast<const char*>(u8"無限彈夾");
		m_Translations["Rapid Fire"] = reinterpret_cast<const char*>(u8"快速射擊");
		m_Translations["Infinite Parachutes"] = reinterpret_cast<const char*>(u8"無限降落傘");
		m_Translations["Explosive Ammo"] = reinterpret_cast<const char*>(u8"爆炸彈藥");
		m_Translations["Weapon Damage"] = reinterpret_cast<const char*>(u8"武器傷害");
		m_Translations["Melee Damage"] = reinterpret_cast<const char*>(u8"爆炸近戰");
		m_Translations["Explosion Radius"] = reinterpret_cast<const char*>(u8"爆炸半徑");
		m_Translations["Give All Weapons"] = reinterpret_cast<const char*>(u8"給予所有武器");
		m_Translations["Give Max Ammo"] = reinterpret_cast<const char*>(u8"給予最大彈藥");
		m_Translations["Open Gun Locker"] = reinterpret_cast<const char*>(u8"打開槍械儲藏櫃");
		m_Translations["Aimbot"] = reinterpret_cast<const char*>(u8"自動瞄準");
		m_Translations["Enable Aimbot"] = reinterpret_cast<const char*>(u8"啟用自動瞄準");
		m_Translations["Custom Weapon Enabled Onweaponout"] = reinterpret_cast<const char*>(u8"自定義武器在拔出武器時啟用");
		m_Translations["Paint Gun Rainbow Color Enabled"] = reinterpret_cast<const char*>(u8"彩虹顏色啟用");
		m_Translations["aimbotaimforhead"] = reinterpret_cast<const char*>(u8"自動瞄準頭部");
		m_Translations["aimbottargetdrivers"] = reinterpret_cast<const char*>(u8"自動瞄準載具駕駛員");
		m_Translations["aimbotreleasedeadped"] = reinterpret_cast<const char*>(u8"自動瞄準已死亡NPC");
		m_Translations["Search:"] = reinterpret_cast<const char*>(u8"搜尋:");
		m_Translations["selectedexplosion"] = reinterpret_cast<const char*>(u8"選擇爆炸類型");
		m_Translations["explosiondamage"] = reinterpret_cast<const char*>(u8"爆炸傷害");
		m_Translations["explosioncamerashake"] = reinterpret_cast<const char*>(u8"爆炸鏡頭震動");
		m_Translations["weapondamagescale"] = reinterpret_cast<const char*>(u8"武器傷害倍率");
		m_Translations["meleedamagescale"] = reinterpret_cast<const char*>(u8"近戰傷害倍率");
		m_Translations["explosionradiusscale"] = reinterpret_cast<const char*>(u8"爆炸半徑倍率");
		m_Translations["Select"] = reinterpret_cast<const char*>(u8"選擇");


		// ===== 載具子菜單 =====
		m_Translations["Spawn Vehicle"] = reinterpret_cast<const char*>(u8"生成載具");
		m_Translations["Vehicle Editor"] = reinterpret_cast<const char*>(u8"載具編輯器");
		m_Translations["Saved Vehicles"] = reinterpret_cast<const char*>(u8"已保存載具");

		// ===== 傳送子菜單 =====
		m_Translations["Custom Locations"] = reinterpret_cast<const char*>(u8"自定義位置");

		// ===== 設置子菜單 =====
		m_Translations["GUI Settings"] = reinterpret_cast<const char*>(u8"界面設置");
		m_Translations["Hotkey Settings"] = reinterpret_cast<const char*>(u8"熱鍵設置");
		m_Translations["Language"] = reinterpret_cast<const char*>(u8"語言");
		m_Translations["Reset to Default"] = reinterpret_cast<const char*>(u8"重置為默認");
		m_Translations["Save Settings"] = reinterpret_cast<const char*>(u8"保存設置");
		m_Translations["Load Settings"] = reinterpret_cast<const char*>(u8"加載設置");
		m_Translations["Theme"] = reinterpret_cast<const char*>(u8"主題");
		m_Translations["Font Scale"] = reinterpret_cast<const char*>(u8"字體縮放");
		m_Translations["Menu Scale"] = reinterpret_cast<const char*>(u8"菜單縮放");
		m_Translations["Background Opacity"] = reinterpret_cast<const char*>(u8"背景不透明度");
		m_Translations["Highlight Opacity"] = reinterpret_cast<const char*>(u8"高亮不透明度");
		m_Translations["Keybinds"] = reinterpret_cast<const char*>(u8"按鍵綁定");
		m_Translations["Open/Close Menu"] = reinterpret_cast<const char*>(u8"打開/關閉 菜單");
		m_Translations["Navigate Up"] = reinterpret_cast<const char*>(u8"向上導航");
		m_Translations["Navigate Down"] = reinterpret_cast<const char*>(u8"向下導航");
		m_Translations["Navigate Left"] = reinterpret_cast<const char*>(u8"向左導航");
		m_Translations["Navigate Right"] = reinterpret_cast<const char*>(u8"向右導航");
		m_Translations["Select/Enter"] = reinterpret_cast<const char*>(u8"選擇/進入");
		m_Translations["Back/Exit"] = reinterpret_cast<const char*>(u8"返回 / 退出");
		m_Translations["Change Value"] = reinterpret_cast<const char*>(u8"更改數值");
		m_Translations["Reset Value"] = reinterpret_cast<const char*>(u8"重置數值");
		m_Translations["Take Screenshot"] = reinterpret_cast<const char*>(u8"截圖");
		m_Translations["Enable/Disable Hotkeys"] = reinterpret_cast<const char*>(u8"啟用/禁用 熱鍵");
		m_Translations["Default"] = reinterpret_cast<const char*>(u8"默認");
		m_Translations["Dark"] = reinterpret_cast<const char*>(u8"深色");
		m_Translations["Light"] = reinterpret_cast<const char*>(u8"淺色");
		m_Translations["Classic"] = reinterpret_cast<const char*>(u8"經典");
		m_Translations["Save"] = reinterpret_cast<const char*>(u8"保存");
		m_Translations["Load"] = reinterpret_cast<const char*>(u8"加載");
		m_Translations["Reset"] = reinterpret_cast<const char*>(u8"重置");
		m_Translations["Apply"] = reinterpret_cast<const char*>(u8"應用");
		m_Translations["Cancel"] = reinterpret_cast<const char*>(u8"取消");
		m_Translations["Select Language"] = reinterpret_cast<const char*>(u8"選擇語言");
		m_Translations["English"] = reinterpret_cast<const char*>(u8"英語");
		m_Translations["Chinese"] = reinterpret_cast<const char*>(u8"中文");
		m_Translations["Spanish"] = reinterpret_cast<const char*>(u8"西班牙語");
		m_Translations["French"] = reinterpret_cast<const char*>(u8"法語");
		m_Translations["German"] = reinterpret_cast<const char*>(u8"德語");
		m_Translations["Italian"] = reinterpret_cast<const char*>(u8"意大利語");
		m_Translations["Customize"] = reinterpret_cast<const char*>(u8"自定義");
		m_Translations["Menu Theme"] = reinterpret_cast<const char*>(u8"菜單主題");
		m_Translations["Font Size"] = reinterpret_cast<const char*>(u8"字體大小");
		m_Translations["Menu Size"] = reinterpret_cast<const char*>(u8"菜單大小");
		m_Translations["BG Opacity"] = reinterpret_cast<const char*>(u8"背景不透明度");
		m_Translations["Highlight Opacity"] = reinterpret_cast<const char*>(u8"高亮不透明度");
		m_Translations["Keybindings"] = reinterpret_cast<const char*>(u8"按鍵綁定");
		m_Translations["Bind"] = reinterpret_cast<const char*>(u8"綁定");
		m_Translations["Press a key to bind..."] = reinterpret_cast<const char*>(u8"按下按鍵以綁定...");
		m_Translations["Unbind"] = reinterpret_cast<const char*>(u8"解除綁定");
		m_Translations["Reset to Default"] = reinterpret_cast<const char*>(u8"重置為默認");
		m_Translations["Save Settings"] = reinterpret_cast<const char*>(u8"保存設置");
		m_Translations["Load Settings"] = reinterpret_cast<const char*>(u8"加載設置");
		m_Translations["Settings saved successfully."] = reinterpret_cast<const char*>(u8"設置保存成功。");
		m_Translations["Settings loaded successfully."] = reinterpret_cast<const char*>(u8"設置加載成功。");
		m_Translations["Settings reset to default."] = reinterpret_cast<const char*>(u8"設置已重置為默認。");
		m_Translations["Error saving settings."] = reinterpret_cast<const char*>(u8"保存設置時出錯。");
		m_Translations["Error loading settings."] = reinterpret_cast<const char*>(u8"加載設置時出錯。");
		m_Translations["Error resetting settings."] = reinterpret_cast<const char*>(u8"重置設置時出錯。");
		m_Translations["Hotkeys enabled."] = reinterpret_cast<const char*>(u8"熱鍵已啟用。");
		m_Translations["Hotkeys disabled."] = reinterpret_cast<const char*>(u8"熱鍵已禁用。");
		m_Translations["Error toggling hotkeys."] = reinterpret_cast<const char*>(u8"切換熱鍵時出錯。");
		m_Translations["Taking screenshot..."] = reinterpret_cast<const char*>(u8"正在截圖...");
		m_Translations["Screenshot saved successfully."] = reinterpret_cast<const char*>(u8"截圖保存成功。");
		m_Translations["Error taking screenshot."] = reinterpret_cast<const char*>(u8"截圖時出錯。");
		m_Translations["Language changed to English."] = reinterpret_cast<const char*>(u8"語言已更改為英語。");

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