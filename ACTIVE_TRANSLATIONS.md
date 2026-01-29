# Traditional Chinese Translations - Active Implementation

## 狀態  / Status

✅ **翻譯系統已實作並啟用** / Translation system implemented and active

## 啟用中的翻譯 / Active Translations

### 主選單 (9 個類別) / Main Menu (9 categorías)

| 英文  / English | 中文 (繁體) / Traditional Chinese |
|------------------|-------------------|
| Self | 自我 |
| Vehicle | 載具 |
| Teleport | 傳送 |
| Network | 網路 |
| Players | 玩家 |
| World | 世界 |
| Recovery | 恢復 |
| Settings | 設定 |
| Debug | 除錯 |

### 常用類別  / Common Categories (~25 items)

| 英文 / English | 中文 (繁體) / Traditional Chinese |
|------------------|-------------------|
| Main | 主要 |
| Globals | 全域 |
| Movement | 移動 |
| Tools | 工具 |
| Special Ability | 特殊能力 |
| Wanted | 通緝等級 |
| Misc | 其他 |
| Weapons | 武器 |
| Session | 戰局 |
| Hotkeys | 快捷鍵 |
| GUI | 圖形介面 |
| Businesses | 商業 |
| Casino | 賭場 |
| General | 一般 |
| Join | 加入 |
| Bounty | 懸賞 |
| Toxic | 惡意 |

### 載具子選單 / Vehicle Submenus

| 英文 / English | 中文 (繁體) / Traditional Chinese |
|------------------|-------------------|
| Spawn Vehicle | 生成載具 |
| Vehicle Editor | 載具編輯器 |
| Saved Vehicles | 	已儲存載具 |

### 設定子選單 / Settings Submenus

| 英文 / English | 中文 (繁體) / Traditional Chinese |
|------------------|-------------------|
| GUI Settings | 圖形介面設定 |
| Customize | 自訂 |

### 常用 UI 元素 / Common UI Elements

| 英文  / English | 中文 (繁體) / Traditional Chinese |
|------------------|-------------------|
| Godmode | 無敵模式 |
| Keep Fixed | 保持修復 |
| Lower Stance | 降低姿態 |
| Level | 等級 |
| Custom Locations | 自訂位置 |
| Outfit Editor | 服裝編輯器 |

## 已修改檔案  / Modified Files

- `src/core/localization/Translator.hpp` - 翻譯系統 / Translation system
- `src/core/localization/Translator.cpp` - 中文 (繁體)翻譯  / Chinese translations
- `src/game/frontend/Menu.cpp` - 初始化 / Initialization
- `src/game/frontend/submenus/*.cpp` - 9 個子選單檔案已更新 / 9 submenu files updated

## Cómo Funciona / How It Works

El sistema usa la macro `TR("text")` para traducir cualquier texto:

```cpp
// 之前 / Before:
Submenu::Submenu("Vehicle", ICON_FA_CAR)

// 現在  / Now:
Submenu::Submenu(TR("Vehicle"), ICON_FA_CAR)
// 顯示  / Shows: "Vehículo"
```

如果翻譯不存在，系統會自動回傳原始的英文文字。

## 建議的後續步驟 / Suggested Next Steps

擴充翻譯 / To expand translations:

1. **新增更多類別 - 編輯 ** - Edit `Translator.cpp`, 新增項目到  `m_Translations`
2. **翻譯指令描述** - 更新指令初始化檔案
3. **翻譯訊息和通知 ** - 更新通知系統
4. **翻譯對話框** - 更新整個程式碼庫中的對話文字

## 新增翻譯的範例 / Example: How to Add Translations

編輯 `src/core/localization/Translator.cpp`:

```cpp
void Translator::InitializeChineseTranslations()
{
    // ... 現有翻譯 ...
    
    // 新增翻譯：
    m_Translations["Your English Text"] = "Tu Texto en Español";
}
```

然後在程式碼中使用  / Then use in code:
```cpp
auto myCategory = std::make_shared<Category>(TR("Your English Text"));
```

---

**啟用中的翻譯總數： 選單介面中約有 50 個已翻譯且正常運作的文字字串。.

**Total active translations:** ~50 translated strings working in the menu interface.
