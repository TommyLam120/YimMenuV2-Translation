#include "core/commands/Command.hpp"
#include "game/gta/Natives.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class SkipCutscene : public Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		}
	};

	static SkipCutscene _SkipCutscene{"skipcutscene", TR("Skip Cutscene"), "Skips any currently playing cutscene"};
}
