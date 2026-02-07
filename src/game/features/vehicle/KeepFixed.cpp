#include "core/commands/LoopedCommand.hpp"
#include "game/backend/Self.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class KeepFixed : public LoopedCommand
	{
		using LoopedCommand::LoopedCommand;

		virtual void OnTick() override
		{
			auto veh = Self::GetVehicle();
			if (veh)
				veh.Fix();
		}
	};

	static KeepFixed _KeepFixed{"keepfixed", TR("Keep Vehicle Fixed"), "Keeps your vehicle clean and fixed"};
}