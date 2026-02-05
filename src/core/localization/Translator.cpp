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
		m_Translations["Network"] = reinterpret_cast<const char*>(u8"網絡工具");
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
		m_Translations["Toxic"] = reinterpret_cast<const char*>(u8"惡搞行為");
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
		m_Translations["Components"] = reinterpret_cast<const char*>(u8"組件");
		m_Translations["Top"] = reinterpret_cast<const char*>(u8"上衣");
		m_Translations["Undershirt"] = reinterpret_cast<const char*>(u8"內衣");
		m_Translations["Legs"] = reinterpret_cast<const char*>(u8"褲子");
		m_Translations["Feet"] = reinterpret_cast<const char*>(u8"鞋子");
		m_Translations["Accessories"] = reinterpret_cast<const char*>(u8"配件");
		m_Translations["Bags"] = reinterpret_cast<const char*>(u8"包包");
		m_Translations["Mask"] = reinterpret_cast<const char*>(u8"面具");
		m_Translations["Gloves"] = reinterpret_cast<const char*>(u8"手套");
		m_Translations["Armor"] = reinterpret_cast<const char*>(u8"護甲");
		m_Translations["Decals"] = reinterpret_cast<const char*>(u8"貼紙");
		m_Translations["Hats"] = reinterpret_cast<const char*>(u8"帽子");
		m_Translations["Glasses"] = reinterpret_cast<const char*>(u8"眼鏡");
		m_Translations["Ears"] = reinterpret_cast<const char*>(u8"耳飾");
		m_Translations["Watches"] = reinterpret_cast<const char*>(u8"手錶");
		m_Translations["Bracelets"] = reinterpret_cast<const char*>(u8"手鐲");
		m_Translations["Drawable"] = reinterpret_cast<const char*>(u8"外觀");
		m_Translations["Texture"] = reinterpret_cast<const char*>(u8"材質");
		m_Translations["Randomize Outfit"] = reinterpret_cast<const char*>(u8"隨機服裝");
		m_Translations["Props"] = reinterpret_cast<const char*>(u8"配飾");
		m_Translations["Natives not cached yet"] = reinterpret_cast<const char*>(u8"本地函數尚未緩存");
		m_Translations["Player ped not found"] = reinterpret_cast<const char*>(u8"未找到玩家角色");
		m_Translations["Horn Boost"] = reinterpret_cast<const char*>(u8"喇叭加速");
		m_Translations["Modify Boost Behavior"] = reinterpret_cast<const char*>(u8"修改加速行為");
		m_Translations["Enter Last Vehicle"] = reinterpret_cast<const char*>(u8"進入上次載具");
		m_Translations["Repair Vehicle"] = reinterpret_cast<const char*>(u8"修理載具");
		m_Translations["Fix All Vehicles"] = reinterpret_cast<const char*>(u8"修理所有載具");
		m_Translations["Call Mechanic"] = reinterpret_cast<const char*>(u8"呼叫修理工");
		m_Translations["Request Personal Vehicle"] = reinterpret_cast<const char*>(u8"請求個人載具");
		m_Translations["Despawn Personal Vehicle"] = reinterpret_cast<const char*>(u8"張個人載具送回車庫");
		m_Translations["Save Personal Vehicle"] = reinterpret_cast<const char*>(u8"保存個人載具");
		m_Translations["Speedometer"] = reinterpret_cast<const char*>(u8"速度表");
		m_Translations["Seatbelt"] = reinterpret_cast<const char*>(u8"安全帶");
		m_Translations["Allow Hats in Vehicles"] = reinterpret_cast<const char*>(u8"允許在載具中佩戴帽子");
		m_Translations["Remove LSC Restrictions"] = reinterpret_cast<const char*>(u8"移除洛聖都改車廠限制");
		m_Translations["Enable Allow DLC Vehicles"] = reinterpret_cast<const char*>(u8"啟用允許DLC載具");
		m_Translations["Boost Behavior"] = reinterpret_cast<const char*>(u8"加速行為");
		m_Translations["Spawn"] = reinterpret_cast<const char*>(u8"生成");
		m_Translations["Settings"] = reinterpret_cast<const char*>(u8"設置");
		m_Translations["Search"] = reinterpret_cast<const char*>(u8"搜尋");
		m_Translations["Name"] = reinterpret_cast<const char*>(u8"名稱");
		m_Translations["New Vehicle"] = reinterpret_cast<const char*>(u8"新載具");
		m_Translations["Personal Vehicle"] = reinterpret_cast<const char*>(u8"個人載具");
		m_Translations["Join GTA Online."] = reinterpret_cast<const char*>(u8"加入GTA線上模式。");
		m_Translations["All"] = reinterpret_cast<const char*>(u8"全部");
		m_Translations["Garage"] = reinterpret_cast<const char*>(u8"車庫");
		m_Translations["Class"] = reinterpret_cast<const char*>(u8"類別");
		m_Translations["spawninsideveh"] = reinterpret_cast<const char*>(u8"生成時進入載具");
		m_Translations["spawnvehmaxed"] = reinterpret_cast<const char*>(u8"生成載具時滿配");
		m_Translations["Stats not loaded yet."] = reinterpret_cast<const char*>(u8"統計數據尚未加載。");
		m_Translations["Natives not cached yet."] = reinterpret_cast<const char*>(u8"本地函數尚未緩存");
		m_Translations["spawnclonepv"] = reinterpret_cast<const char*>(u8"生成個人載具的克隆");
		m_Translations["spawninsidepv"] = reinterpret_cast<const char*>(u8"生成個人載具時進入載具");
		m_Translations["Refresh Current Vehicle"] = reinterpret_cast<const char*>(u8"刷新當前載具");
		m_Translations["Change Plate"] = reinterpret_cast<const char*>(u8"更改車牌");
		m_Translations["Max Vehicle"] = reinterpret_cast<const char*>(u8"載具滿配");
		m_Translations["Mod Options"] = reinterpret_cast<const char*>(u8"改裝選項");
		m_Translations["Burstible tires"] = reinterpret_cast<const char*>(u8"可爆輪胎");
		m_Translations["Low Grip Tires"] = reinterpret_cast<const char*>(u8"低抓地力輪胎");
		m_Translations["Turbo"] = reinterpret_cast<const char*>(u8"渦輪增壓");
		m_Translations["Tire Smoke"] = reinterpret_cast<const char*>(u8"輪胎煙霧");
		m_Translations["Mod Slots"] = reinterpret_cast<const char*>(u8"改裝槽");
		m_Translations["Slot"] = reinterpret_cast<const char*>(u8"槽位");
		m_Translations["Mod"] = reinterpret_cast<const char*>(u8"改裝");
		m_Translations["Extras"] = reinterpret_cast<const char*>(u8"額外配件");
		m_Translations["Neon Light Options"] = reinterpret_cast<const char*>(u8"霓虹燈選項");
		m_Translations["Headlight"] = reinterpret_cast<const char*>(u8"車頭燈");
		m_Translations["Left"] = reinterpret_cast<const char*>(u8"左側");
		m_Translations["Right"] = reinterpret_cast<const char*>(u8"右側");
		m_Translations["Front"] = reinterpret_cast<const char*>(u8"前方");
		m_Translations["Back"] = reinterpret_cast<const char*>(u8"後方");
		m_Translations["Color Options"] = reinterpret_cast<const char*>(u8"顏色選項");
		m_Translations["Primary"] = reinterpret_cast<const char*>(u8"主色");
		m_Translations["Secondary"] = reinterpret_cast<const char*>(u8"次色");
		m_Translations["Pearlescent"] = reinterpret_cast<const char*>(u8"珠光色");
		m_Translations["Wheel Color"] = reinterpret_cast<const char*>(u8"輪子顏色");
		m_Translations["Interior"] = reinterpret_cast<const char*>(u8"內飾");
		m_Translations["Dashboard"] = reinterpret_cast<const char*>(u8"儀表板");
		m_Translations["Tire Smoke"] = reinterpret_cast<const char*>(u8"輪胎煙霧");
		m_Translations["Headlight"] = reinterpret_cast<const char*>(u8"車頭燈");
		m_Translations["Neon"] = reinterpret_cast<const char*>(u8"霓虹");
		m_Translations["Custom"] = reinterpret_cast<const char*>(u8"自定義");
		m_Translations["Remove Custom"] = reinterpret_cast<const char*>(u8"移除自定義");
		m_Translations["Chrome"] = reinterpret_cast<const char*>(u8"鉻合金");
		m_Translations["Classic"] = reinterpret_cast<const char*>(u8"經典");
		m_Translations["Matte"] = reinterpret_cast<const char*>(u8"啞光");
		m_Translations["Metal"] = reinterpret_cast<const char*>(u8"金屬");
		m_Translations["Metallic"] = reinterpret_cast<const char*>(u8"金屬漆");
		m_Translations["Util"] = reinterpret_cast<const char*>(u8"實用");
		m_Translations["Worn"] = reinterpret_cast<const char*>(u8"磨損");
		m_Translations["Chameleon"] = reinterpret_cast<const char*>(u8"變色龍");
		m_Translations["Custom Vehicle Color"] = reinterpret_cast<const char*>(u8"自定義載具顏色");
		m_Translations["Metals"] = reinterpret_cast<const char*>(u8"金屬色");
		m_Translations["spawninsidesavedveh"] = reinterpret_cast<const char*>(u8"生成時進入已保存載具");
		m_Translations["Spawn Inside"] = reinterpret_cast<const char*>(u8"生成時進入");
		m_Translations["Spawn inside the vehicle."] = reinterpret_cast<const char*>(u8"生成時進入載具。");
		m_Translations["Save"] = reinterpret_cast<const char*>(u8"保存");
		m_Translations["Populate Name"] = reinterpret_cast<const char*>(u8"填充名稱");
		m_Translations["Refresh List"] = reinterpret_cast<const char*>(u8"刷新列表");
		m_Translations["Folder"] = reinterpret_cast<const char*>(u8"文件夾");
		m_Translations["Root"] = reinterpret_cast<const char*>(u8"根目錄");
		m_Translations["File Name"] = reinterpret_cast<const char*>(u8"文件名");
		m_Translations["Folder Name"] = reinterpret_cast<const char*>(u8"文件夾名稱");
		m_Translations["Saved"] = reinterpret_cast<const char*>(u8"已保存");
		m_Translations["autotptowaypoint"] = reinterpret_cast<const char*>(u8"自動傳送到路標");
		m_Translations["tptowaypoint"] = reinterpret_cast<const char*>(u8"傳送到路標");
		m_Translations["tptoobjective"] = reinterpret_cast<const char*>(u8"傳送到目標點");
		m_Translations["Save current location"] = reinterpret_cast<const char*>(u8"保存當前位置");
		m_Translations["Location name"] = reinterpret_cast<const char*>(u8"位置名稱");
		m_Translations["Category"] = reinterpret_cast<const char*>(u8"類別");
		m_Translations["New location"] = reinterpret_cast<const char*>(u8"新位置");
		m_Translations["Double click to teleport\nShift click to delete"] = reinterpret_cast<const char*>(u8"雙擊以傳送\nShift點擊以刪除");
		m_Translations["Locations"] = reinterpret_cast<const char*>(u8"位置");
		m_Translations["Categories"] = reinterpret_cast<const char*>(u8"類別");
		m_Translations["Are you sure you want to delete %s?"] = reinterpret_cast<const char*>(u8"您確定要刪除嗎？");
		m_Translations["Yes"] = reinterpret_cast<const char*>(u8"是");
		m_Translations["No"] = reinterpret_cast<const char*>(u8"否");
		m_Translations["Delete"] = reinterpret_cast<const char*>(u8"刪除");
		m_Translations["Troll"] = reinterpret_cast<const char*>(u8"惡搞");
		m_Translations["Enhancements"] = reinterpret_cast<const char*>(u8"增強功能");
		m_Translations["Session Type"] = reinterpret_cast<const char*>(u8"戰局類型");
		m_Translations["Username"] = reinterpret_cast<const char*>(u8"玩家名稱");
		m_Translations["Join##session"] = reinterpret_cast<const char*>(u8"加入戰局");
		m_Translations["Join##username"] = reinterpret_cast<const char*>(u8"按名稱加入");
		m_Translations["Join##rid"] = reinterpret_cast<const char*>(u8"按RID加入");
		m_Translations["Amount"] = reinterpret_cast<const char*>(u8"數量");
		m_Translations["Anonymous"] = reinterpret_cast<const char*>(u8"匿名");
		m_Translations["Set Bounties"] = reinterpret_cast<const char*>(u8"設置懸賞");
		m_Translations["Teleport Everyone"] = reinterpret_cast<const char*>(u8"傳送所有人");
		m_Translations["Send All to Property"] = reinterpret_cast<const char*>(u8"傳送所有人到房產");
		m_Translations["Send All to Interior"] = reinterpret_cast<const char*>(u8"傳送所有人到室內");
		m_Translations["Bring All"] = reinterpret_cast<const char*>(u8"召喚所有人");
		m_Translations["Delete Player Vehicles"] = reinterpret_cast<const char*>(u8"刪除玩家載具");
		m_Translations["Kill All"] = reinterpret_cast<const char*>(u8"擊殺所有人");
		m_Translations["Permadeath All"] = reinterpret_cast<const char*>(u8"永久死亡所有人");
		m_Translations["Explode All"] = reinterpret_cast<const char*>(u8"爆炸所有人");
		m_Translations["CEO Kick All"] = reinterpret_cast<const char*>(u8"CEO踢出所有人");
		m_Translations["hostkick for all player"] = reinterpret_cast<const char*>(u8"主持人踢出所有玩家");
		m_Translations["Force Thunder"] = reinterpret_cast<const char*>(u8"強制雷暴");
		m_Translations["Notify On Player Join"] = reinterpret_cast<const char*>(u8"玩家加入通知");
		m_Translations["Fast Join"] = reinterpret_cast<const char*>(u8"快速加入");
		m_Translations["Disable Death Barriers"] = reinterpret_cast<const char*>(u8"禁用死亡屏障");
		m_Translations["despawnbypass"] = reinterpret_cast<const char*>(u8"生成繞過");
		m_Translations["bypasscasinogeoblock"] = reinterpret_cast<const char*>(u8"繞過賭場地理封鎖");
		m_Translations["forcescripthost"] = reinterpret_cast<const char*>(u8"強制腳本主持人");
		m_Translations["pausegame"] = reinterpret_cast<const char*>(u8"暫停遊戲");
		m_Translations["nocalls"] = reinterpret_cast<const char*>(u8"禁用呼叫");
		m_Translations["spamkillfeed"] = reinterpret_cast<const char*>(u8"垃圾擊殺信息");
		m_Translations["harassplayers"] = reinterpret_cast<const char*>(u8"騷擾玩家");
		m_Translations["Send Sexts"] = reinterpret_cast<const char*>(u8"傳色情簡訊");
		m_Translations["Spoofing"] = reinterpret_cast<const char*>(u8"欺騙");
		m_Translations["Matchmaking (Client)"] = reinterpret_cast<const char*>(u8"匹配 (客戶端)");
		m_Translations["Matchmaking (Server)"] = reinterpret_cast<const char*>(u8"匹配 (服務器)");
		m_Translations["spoofdatahash"] = reinterpret_cast<const char*>(u8"欺騙數據哈希");
		m_Translations["Spoof Region"] = reinterpret_cast<const char*>(u8"欺騙地區");
		m_Translations["Join YimMenu-only Sessions"] = reinterpret_cast<const char*>(u8"加入僅限YimMenu的戰局");
		m_Translations["Spoof Region Type"] = reinterpret_cast<const char*>(u8"欺騙地區類型");
		m_Translations["Spoof Language"] = reinterpret_cast<const char*>(u8"欺騙語言");
		m_Translations["Spoof Player Count"] = reinterpret_cast<const char*>(u8"欺騙玩家數量");
		m_Translations["Multiplex Session"] = reinterpret_cast<const char*>(u8"多路復用戰局");
		m_Translations["Unknown!"] = reinterpret_cast<const char*>(u8"未知！");
		m_Translations["Notify When Joinable"] = reinterpret_cast<const char*>(u8"可加入通知");
		m_Translations["Notify When Unjoinable"] = reinterpret_cast<const char*>(u8"不可加入通知");
		m_Translations["Notify When Online"] = reinterpret_cast<const char*>(u8"在線通知");
		m_Translations["Notify When Offine"] = reinterpret_cast<const char*>(u8"離線通知");
		m_Translations["Notify On Session Type Change"] = reinterpret_cast<const char*>(u8"戰局類型變更通知");
		m_Translations["Notify On Mission Change"] = reinterpret_cast<const char*>(u8"任務變更通知");
		m_Translations["Notify On Job Lobby Change"] = reinterpret_cast<const char*>(u8"工作大廳變更通知");
		m_Translations["Tracking Notifications"] = reinterpret_cast<const char*>(u8"跟踪通知");
		m_Translations["No saved players"] = reinterpret_cast<const char*>(u8"沒有已保存的玩家");
		m_Translations["Select Event"] = reinterpret_cast<const char*>(u8"選擇事件");
		m_Translations["Select Location"] = reinterpret_cast<const char*>(u8"選擇位置");
		m_Translations["Random Events are not initialized."] = reinterpret_cast<const char*>(u8"隨機事件未初始化。");
		m_Translations["Freemode global block is not loaded."] = reinterpret_cast<const char*>(u8"自由模式全局阻止未加載。");
		m_Translations["Freemode stack is not valid."] = reinterpret_cast<const char*>(u8"自由模式堆棧無效。");
		m_Translations["Freemode is not running."] = reinterpret_cast<const char*>(u8"自由模式未運行。");
		m_Translations["Active Events: %d/%d"] = reinterpret_cast<const char*>(u8"活動事件: %d/%d");
		m_Translations["Launch Event"] = reinterpret_cast<const char*>(u8"啟動事件");
		m_Translations["Failed to launch event. Are you freemode host?"] = reinterpret_cast<const char*>(u8"無法啟動事件。您是自由模式主持人嗎？");
		m_Translations["Event is already active."] = reinterpret_cast<const char*>(u8"事件已經是活動狀態。");
		m_Translations["Random Events"] = reinterpret_cast<const char*>(u8"隨機事件");
		m_Translations["Kill Event"] = reinterpret_cast<const char*>(u8"終止事件");
		m_Translations["Teleport to Event"] = reinterpret_cast<const char*>(u8"傳送到事件");
		m_Translations["Event is not active."] = reinterpret_cast<const char*>(u8"事件未激活。");
		m_Translations["Failed to teleport to event. Coordinates are not valid."] = reinterpret_cast<const char*>(u8"無法傳送到事件。您是自由模式主持人嗎？");
		m_Translations["State: %s"] = reinterpret_cast<const char*>(u8"狀態: %s");
		m_Translations["Location: N/A"] = reinterpret_cast<const char*>(u8"位置: 無法使用");
		m_Translations["Trigger Range: N/A"] = reinterpret_cast<const char*>(u8"觸發範圍: 無法使用");
		m_Translations["Location: %d"] = reinterpret_cast<const char*>(u8"位置: %d");
		m_Translations["Trigger Range: %.2f"] = reinterpret_cast<const char*>(u8"觸發範圍: %.2f");
		m_Translations["Cooldown & Availability"] = reinterpret_cast<const char*>(u8"冷卻與可用性");
		m_Translations["Set Cooldown"] = reinterpret_cast<const char*>(u8"設置冷卻時間");
		m_Translations["Set Availability"] = reinterpret_cast<const char*>(u8"設置可用性");
		m_Translations["Apply in Minutes"] = reinterpret_cast<const char*>(u8"以分鐘為單位應用");
		m_Translations["Inactive - launching in "] = reinterpret_cast<const char*>(u8"非活動 - 將在 ");
		m_Translations["Available - deactivating in "] = reinterpret_cast<const char*>(u8"可用 - 將在 ");
		m_Translations["Active"] = reinterpret_cast<const char*>(u8"活動");
		m_Translations["Cleanup"] = reinterpret_cast<const char*>(u8"清理");
		m_Translations["Spectate"] = reinterpret_cast<const char*>(u8"觀戰");
		m_Translations["Rank: %d (%d RP)"] = reinterpret_cast<const char*>(u8"等級: %d (%d RP)");
		m_Translations["Money: %d"] = reinterpret_cast<const char*>(u8"金錢: $%d");
		m_Translations["HP: {}/{} ({:.2f}%)"] = reinterpret_cast<const char*>(u8"生命值: {}/{} ({:.2f}%)");
		m_Translations["Coords: %.2f, %.2f, %.2f"] = reinterpret_cast<const char*>(u8"座標: %.2f, %.2f, %.2f");
		m_Translations["Distance: %.2f"] = reinterpret_cast<const char*>(u8"距離: %.2f");
		m_Translations["Ped missing or deleted"] = reinterpret_cast<const char*>(u8"NPC缺失或已刪除");
		m_Translations["IP Address:"] = reinterpret_cast<const char*>(u8"IP地址:");
		m_Translations["Add to Saved"] = reinterpret_cast<const char*>(u8"添加到已保存");
		m_Translations["View SC Profile"] = reinterpret_cast<const char*>(u8"查看SC檔案");
		m_Translations["Add Friend"] = reinterpret_cast<const char*>(u8"添加好友");
		m_Translations["More Info"] = reinterpret_cast<const char*>(u8"更多信息");
		m_Translations["Average Latency: %.2f"] = reinterpret_cast<const char*>(u8"平均延遲: %.2f");
		m_Translations["Packet Loss: %.2f"] = reinterpret_cast<const char*>(u8"封包丟失: %.2f");
		m_Translations["Close"] = reinterpret_cast<const char*>(u8"關閉");
		m_Translations["No players yet!"] = reinterpret_cast<const char*>(u8"尚無玩家！");
		m_Translations["Send to Property"] = reinterpret_cast<const char*>(u8"傳送到房產");
		m_Translations["Send to Interior"] = reinterpret_cast<const char*>(u8"傳送到室內");
		m_Translations["Teleport To"] = reinterpret_cast<const char*>(u8"傳送到");
		m_Translations["Bring"] = reinterpret_cast<const char*>(u8"召喚");
		m_Translations["Send Phantom Car"] = reinterpret_cast<const char*>(u8"傳送幻影車"); 
		m_Translations["Send Gooch"] = reinterpret_cast<const char*>(u8"傳送Gooch"); 
		m_Translations["Give Player All Weapon"] = reinterpret_cast<const char*>(u8"給予玩家所有武器");
		m_Translations["Delete Vehicle"] = reinterpret_cast<const char*>(u8"刪除載具");
		m_Translations["Anonymous"] = reinterpret_cast<const char*>(u8"匿名");
		m_Translations["Set Bounty"] = reinterpret_cast<const char*>(u8"設置懸賞");
		m_Translations["Send Sext"] = reinterpret_cast<const char*>(u8"傳色情簡訊");


		             
	


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
		m_Translations["Outfit Editor"] = reinterpret_cast<const char*>(u8"服裝編輯器");
		m_Translations["Saved Players"] = reinterpret_cast<const char*>(u8"已保存玩家");
		m_Translations["Players"] = reinterpret_cast<const char*>(u8"玩家");
		m_Translations["New"] = reinterpret_cast<const char*>(u8"新建");
		m_Translations["Tracking"] = reinterpret_cast<const char*>(u8"追蹤");
		m_Translations["Notifications"] = reinterpret_cast<const char*>(u8"通知");
		m_Translations["Random Events"] = reinterpret_cast<const char*>(u8"隨機事件");
 
		

		// ===== 通用 UI =====
		m_Translations["Godmode"] = reinterpret_cast<const char*>(u8"無敵模式");
		m_Translations["Keep Fixed"] = reinterpret_cast<const char*>(u8"保持維修狀態");
		m_Translations["Lower Stance"] = reinterpret_cast<const char*>(u8"降低姿態");
		m_Translations["Level"] = reinterpret_cast<const char*>(u8"等級");
		m_Translations["Current"] = reinterpret_cast<const char*>(u8"當前");
		m_Translations["Saved..."] = reinterpret_cast<const char*>(u8"已保存...");
		m_Translations["##saved"] = reinterpret_cast<const char*>(u8"已保存...");
		m_Translations["Auto Update"] = reinterpret_cast<const char*>(u8"自動更新");
		m_Translations["Update Now"] = reinterpret_cast<const char*>(u8"立即更新");
		m_Translations["Add"] = reinterpret_cast<const char*>(u8"添加");
		m_Translations["Info"] = reinterpret_cast<const char*>(u8"信息");
		m_Translations["Teleport"] = reinterpret_cast<const char*>(u8"傳送");
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