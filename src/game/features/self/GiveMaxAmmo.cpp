#include "core/commands/Command.hpp"
#include "game/backend/Self.hpp"
#include "game/gta/data/Weapons.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class GiveMaxAmmo : public Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			for (auto weapon : g_WeaponHashes)
			{
				Self::GetPed().SetMaxAmmoForWeapon(weapon);
			}
		}
	};

	static GiveMaxAmmo _GiveMaxAmmo{"givemaxammo", TR("Give Max Ammo"), "Refills your ammo to max."};
}