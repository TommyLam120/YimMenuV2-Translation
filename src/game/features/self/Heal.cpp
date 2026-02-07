#include "core/commands/Command.hpp"
#include "game/backend/Self.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class Heal : Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			int maxHealth = Self::GetPed().GetMaxHealth();
			int maxArmour = Self::GetPlayer().GetMaxArmour();
			Self::GetPed().SetHealth(maxHealth);
			Self::GetPed().SetArmour(maxArmour);
		}
	};

	static Heal _Heal{"heal", TR("Heal"), "Restores your health and armour."};
}