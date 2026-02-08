#include "game/commands/PlayerCommand.hpp"
#include "game/backend/Self.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class Bring : public PlayerCommand
	{
		using PlayerCommand::PlayerCommand;

		virtual void OnCall(Player player) override
		{
			player.TeleportTo(Self::GetPed().GetPosition());
		}
	};

	static Bring _Bring{"bring", TR("Bring"), "Brings the player to you"};
}