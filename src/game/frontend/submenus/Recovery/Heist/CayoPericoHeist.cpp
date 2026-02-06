#include "CayoPericoHeist.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Submenus
{
	std::shared_ptr<TabItem> RenderCayoPericoHeistMenu()
	{
		auto tab = std::make_shared<TabItem>(TR("Cayo Perico Heist"));

		auto cuts = std::make_shared<Group>(TR("Heist Cuts"), 2);
		auto setups = std::make_shared<Group>(TR("Heist Setups"));
		auto loots = std::make_shared<Group>(TR("Loots"), 2);
		auto misc = std::make_shared<Group>(TR("Misc"), 1);

		cuts->AddItem(std::make_shared<IntCommandItem>("cayopericoheistcut1"_J,TR("Player 1")));
		cuts->AddItem(std::make_shared<IntCommandItem>("cayopericoheistcut3"_J,TR("Player 3")));
		cuts->AddItem(std::make_shared<IntCommandItem>("cayopericoheistcut2"_J, TR(" Player 2")));
		cuts->AddItem(std::make_shared<IntCommandItem>("cayopericoheistcut4"_J,TR("Player 4")));
		cuts->AddItem(std::make_shared<CommandItem>("cayopericoheistforceready"_J,TR("Force Ready")));
		cuts->AddItem(std::make_shared<CommandItem>("cayopericoheistsetcuts"_J,TR("Set Cuts")));

		setups->AddItem(std::make_shared<ListCommandItem>("cayopericoheistdifficulty"_J,TR("Difflicully")));
		setups->AddItem(std::make_shared<ListCommandItem>("cayopericoheistprimarytarget"_J,TR("Primary Target")));
		setups->AddItem(std::make_shared<ListCommandItem>("cayopericoheistweapon"_J,TR("Weapon")));
		setups->AddItem(std::make_shared<CommandItem>("cayopericoheistsetup"_J,TR("Setup")));

		loots->AddItem(std::make_shared<IntCommandItem>("cayopericoheistprimarytargetvalue"_J,TR("Primary Target Value")));
		loots->AddItem(std::make_shared<IntCommandItem>("cayopericoheistsecondarytakevalue"_J,TR("Secondary Take Value")));
		loots->AddItem(std::make_shared<CommandItem>("cayopericoheistsetprimarytargetvalue"_J,(std::string(TR("Set")) + "##primarytargetvalue").c_str()));
		loots->AddItem(std::make_shared<CommandItem>("cayopericoheistsetsecondarytakevalue"_J,(std::string(TR("Set")) + "Set##secondarytakevalue").c_str()));

		misc->AddItem(std::make_shared<CommandItem>("cayopericoheistskiphacking"_J,TR("Skip Hacking")));
		misc->AddItem(std::make_shared<CommandItem>("cayopericoheistcutsewer"_J,TR("Cut Sewer")));
		misc->AddItem(std::make_shared<CommandItem>("cayopericoheistcutglass"_J,TR("Cut Glass")));
		misc->AddItem(std::make_shared<CommandItem>("cayopericoheisttakeprimarytarget"_J, TR("Take Primary Target")));
		misc->AddItem(std::make_shared<CommandItem>("cayopericoheistinstantfinish"_J,TR("Instant Finish")));

		tab->AddItem(cuts);
		tab->AddItem(setups);
		tab->AddItem(loots);
		tab->AddItem(misc);

		return tab;
	}
}