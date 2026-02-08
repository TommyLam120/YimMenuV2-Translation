#include "Toxic.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Submenus
{
	std::shared_ptr<Category> BuildToxicMenu()
	{
		auto menu = std::make_shared<Category>(TR("Toxic"));

		auto damage = std::make_shared<Group>(TR("Damage"), 1);
		damage->AddItem(std::make_shared<PlayerCommandItem>("kill"_J,TR("Kill")));
		damage->AddItem(std::make_shared<PlayerCommandItem>("killexploit"_J,TR("Permadeath")));
		damage->AddItem(std::make_shared<PlayerCommandItem>("explode"_J,TR("Explode")));

		auto griefing = std::make_shared<Group>(TR("Griefing"));
		griefing->AddItem(std::make_shared<PlayerCommandItem>("ceokick"_J,TR("CEO kick")));

		menu->AddItem(damage);
		menu->AddItem(griefing);

		return menu;
	}
}