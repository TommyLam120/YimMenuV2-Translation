#include "game/commands/PlayerCommand.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class Kill : public PlayerCommand
	{
		using PlayerCommand::PlayerCommand;

		virtual void OnCall(Player player) override
		{
			if (auto ped = player.GetPed())
				ped.Kill();
		}
	};

	static Kill _Kill{"kill", TR("Kill"), "Kills the player"};
}