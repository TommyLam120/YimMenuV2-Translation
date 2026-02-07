#include "core/commands/Command.hpp"
#include "game/backend/Self.hpp"
#include <game/gta/Natives.hpp>
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Features
{
	class SkipConversation : Command
	{
		using Command::Command;

		virtual void OnCall() override
		{
			AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE();
		}
	};

	static SkipConversation _SkipConversation{"skipconversation", TR("Skip Conversation"), "Skips current conversation in the phone."};
}