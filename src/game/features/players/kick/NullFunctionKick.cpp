#include "game/commands/PlayerCommand.hpp"
#include "types/script/ScriptEvent.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class NullFunctionKick : public PlayerCommand
	{
		using PlayerCommand::PlayerCommand;

		virtual void OnCall(Player player) override
		{
			OnCall(std::vector{player});
		}

		virtual void OnCall(const std::vector<Player>& players) override
		{
			SCRIPT_EVENT_SEND_TO_INTERIOR message;
			message.Interior = 1337;
			for (auto& player : players)
				message.SetPlayer(player.GetId());
			message.Send();
		}
	};

	static NullFunctionKick _NullFunctionKick{"nfkick", TR("Null Function Kick"), "Kicks the player by forcing them to call a null script function"};
}