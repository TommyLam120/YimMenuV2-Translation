#include "Recovery.hpp"
#include "Recovery/HeistModifier.hpp"
#include "Recovery/StatEditor.hpp"
#include "Recovery/Transactions.hpp"
#include "Recovery/DailyActivities.hpp"
#include "game/frontend/items/Items.hpp"
#include "core/localization/Translator.hpp"
#define TR(key) YimMenu::Translator::Get(key).c_str()

namespace YimMenu::Submenus
{
	Recovery::Recovery() :
		#define ICON_FA_SACK_DOLLAR "\xef\x93\x80"
	    Submenu::Submenu(TR("Recovery"), ICON_FA_SACK_DOLLAR)
	{
		auto main = std::make_shared<Category>(TR("Main"));
		auto businesses = std::make_shared<Category>(TR("Businesses"));
		auto casino = std::make_shared<Category>(TR("Casino"));

		auto generalGroup = std::make_shared<Group>(TR("General"));
		auto businessGroup = std::make_shared<Group>(TR("General"));
		auto casinoSlots = std::make_shared<Group>(TR("Slot Machines"));
		//auto casinoWheel = std::make_shared<Group>("Lucky Wheel");
		//auto casinoBlackJack = std::make_shared<Group>("Blackjack");
		//auto casinoRoulette = std::make_shared<Group>("Roulette");

		generalGroup->AddItem(std::make_shared<BoolCommandItem>("playallmissionssolo"_J,TR("Play All Missions Solo")));
		generalGroup->AddItem(std::make_shared<BoolCommandItem>("unlockgtaplus"_J,TR("Unlock GTA+")));
		generalGroup->AddItem(std::make_shared<BoolCommandItem>("overriderpmultiplier"_J,TR("Override RP Multiplier")));
		generalGroup->AddItem(std::make_shared<ConditionalItem>("overriderpmultiplier"_J, std::make_shared<FloatCommandItem>("rpmultiplierinput"_J,TR("RP Multiplier Input"))));
		generalGroup->AddItem(std::make_shared<BoolCommandItem>("freechangeappearance"_J,TR("Change Appearance For Free")));
		generalGroup->AddItem(std::make_shared<BoolCommandItem>("nochangeappearancecooldown"_J,TR("No Change Appearance Cooldown")));
		generalGroup->AddItem(std::make_shared<BoolCommandItem>("allowgenderchange"_J,TR("Allow Gender Change")));

		businessGroup->AddItem(std::make_shared<ListCommandItem>("businesssafe"_J,TR("Business")));
		businessGroup->AddItem(std::make_shared<CommandItem>("claimsafeearnings"_J,TR("Claim Safe Earnings")));

		casinoSlots->AddItem(std::make_shared<BoolCommandItem>("casinomanipulaterigslotmachines"_J,TR("Manipulate Rig Slot Machines")));
		

		main->AddItem(generalGroup);
		businesses->AddItem(businessGroup);
		casino->AddItem(casinoSlots);

		AddCategory(std::move(main));
		AddCategory(std::move(businesses));
		AddCategory(std::move(casino));
		AddCategory(BuildStatEditorMenu());
		AddCategory(BuildTransactionsMenu());
		AddCategory(BuildHeistModifierMenu());
		AddCategory(BuildDailyActivitiesMenu());
	}
}