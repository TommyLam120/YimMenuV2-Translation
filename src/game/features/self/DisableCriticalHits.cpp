#include "core/commands/LoopedCommand.hpp"
#include "game/backend/Self.hpp"
#include "game/gta/Pools.hpp"
#include <game/gta/Natives.hpp>
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class DisableCriticalHits : public LoopedCommand
	{
		using LoopedCommand::LoopedCommand;
		virtual void OnTick() override
		{
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Self::GetPed().GetHandle(), FALSE);
		}

		virtual void OnDisable() override
		{
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Self::GetPed().GetHandle(), TRUE);
		}
	};

	static DisableCriticalHits _DisableCriticalHits{"disablecriticalhits", TR("Disable Critical Hits"), "Prevent you from getting Critical Hits"};

}