# Translation Files / 翻譯檔案 

## Overview / 概述

This directory contains translation files for the YimMenu UI.

此目錄包含 YimMenu 介面的翻譯檔。

## Status / 狀態

⚠️ **Note / 注意 :** These translation files are provided as **templates/examples** only. The menu does not currently have a translation system implemented.

這些翻譯檔案僅作為 模板/範例 提供。本選單目前尚未實作翻譯系統。

## Files / 檔案 

- `en_US.json` - 英文 (預設)
- `zh_TW.json` - 中文 (繁體) (Traditional Chinese)

## Implementation Required / 需要實作的功能

To use these translations, you would need to:

要使用這些翻譯，你需要：

1. Create a translation loader class / 建立一個翻譯載入器類別
2. Integrate it into the menu system / 將其整合至選單系統中  
3. Replace hardcoded strings throughout the codebase / 在整個程式碼庫中替換硬編碼的字串
4. Add language selector in Settings / 在設定中新增語言選擇器

See `TRANSLATION_NOTES.md` in the root directory for more details.
更多詳細資訊請參閱根目錄中的`TRANSLATION_NOTES.md`。
