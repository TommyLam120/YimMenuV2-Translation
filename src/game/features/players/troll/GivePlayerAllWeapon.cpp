#include "game/commands/PlayerCommand.hpp"
#include "core/commands/Command.hpp"
#include "game/backend/Self.hpp"
#include "game/gta/data/Weapons.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class GivePlayerAllWeapon : public PlayerCommand
	{
		using PlayerCommand::PlayerCommand;

		virtual void OnCall(Player player) override
		{
			for (auto weapon : g_WeaponHashes)
				player.GetPed().GiveWeapon(weapon);
		}
	};

	static GivePlayerAllWeapon _GivePlayerAllWeapon{"giveplayerallweapon", TR("GivePlayerAllWeapon"), "Give All Weapon the player"};
}