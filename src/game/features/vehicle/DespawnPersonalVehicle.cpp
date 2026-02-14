#include "core/commands/Command.hpp"
#include "game/backend/PersonalVehicles.hpp"
#include "game/pointers/Pointers.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu
{
	class DespawnPersonalVehicle : public Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			if (!*Pointers.IsSessionStarted)
				return;

			PersonalVehicles::GetCurrent()->Despawn();
		}
	};

	static DespawnPersonalVehicle _DespawnPersonalVehicle{"despawnpv", TR("Despawn Personal Vehicle"), "Returns your current Personal Vehicle to storage."};
}