#include "core/commands/Command.hpp"
#include "game/backend/Self.hpp"
#include "game/gta/data/Weapons.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class GiveAllWeapons : public Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			for (auto weapon : g_WeaponHashes)
				Self::GetPed().GiveWeapon(weapon);
		}
	};

	static GiveAllWeapons _GiveAllWeapons{"giveallweapons", TR("Give All Weapons"), "Gives you all weapons"};
}