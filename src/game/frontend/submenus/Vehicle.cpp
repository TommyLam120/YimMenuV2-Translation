#include "Vehicle.hpp"
#include "game/frontend/items/Items.hpp"
#include "game/frontend/submenus/Vehicle/SpawnVehicle.hpp"
#include "Vehicle/VehicleEditor.hpp"
#include "Vehicle/SavedVehicles.hpp"
#include "core/localization/Translator.hpp"

namespace YimMenu::Submenus
{
	Vehicle::Vehicle() :
		#define ICON_FA_CAR "\xef\x86\xb9"
	    Submenu::Submenu(TR("Vehicle"), ICON_FA_CAR)
	{
		auto main = std::make_shared<Category>(TR("Main"));

		auto globals = std::make_shared<Group>(TR("Globals"));
		auto tools = std::make_shared<Group>(TR("Tools"), 2);
		auto misc = std::make_shared<Group>(TR("Misc"));

		globals->AddItem(std::make_shared<BoolCommandItem>("vehiclegodmode"_J, TR("Godmode")));
		globals->AddItem(std::make_shared<BoolCommandItem>("keepfixed"_J, TR("Keep Fixed")));
		globals->AddItem(std::make_shared<BoolCommandItem>("hornboost"_J, TR("Horn Boost")));
		globals->AddItem(std::make_shared<BoolCommandItem>("modifyboostbehavior"_J, TR("Modify Boost Behavior")));
		globals->AddItem(std::make_shared<ConditionalItem>("modifyboostbehavior"_J, std::make_shared<ListCommandItem>("boostbehavior"_J,TR("Boost Behavior"))));

		tools->AddItem(std::make_shared<CommandItem>("enterlastvehicle"_J, TR("Enter Last Vehicle")));
		tools->AddItem(std::make_shared<CommandItem>("repairvehicle"_J, TR("Repair Vehicle")));
		tools->AddItem(std::make_shared<CommandItem>("fixallvehicles"_J, TR("Fix All Vehicles")));
		tools->AddItem(std::make_shared<CommandItem>("callmechanic"_J, TR("Call Mechanic")));
		tools->AddItem(std::make_shared<CommandItem>("requestpv"_J, TR("Request Personal Vehicle")));
		tools->AddItem(std::make_shared<CommandItem>("despawnpv"_J, TR("Despawn Personal Vehicle")));
		tools->AddItem(std::make_shared<CommandItem>("savepersonalvehicle"_J, TR("Save Personal Vehicle")));

		misc->AddItem(std::make_shared<BoolCommandItem>("speedometer"_J, TR("Speedometer")));
		misc->AddItem(std::make_shared<BoolCommandItem>("seatbelt"_J, TR("Seatbelt")));
		misc->AddItem(std::make_shared<BoolCommandItem>("lowervehiclestance"_J, TR("Lower Stance")));
		misc->AddItem(std::make_shared<BoolCommandItem>("allowhatsinvehicles"_J, TR("Allow Hats in Vehicles")));
		misc->AddItem(std::make_shared<BoolCommandItem>("lsccustomsbypass"_J, TR("Remove LSC Restrictions")));
		misc->AddItem(std::make_shared<BoolCommandItem>("dlcvehicles"_J, TR("Enable Allow DLC Vehicles")));

		main->AddItem(globals);
		main->AddItem(tools);
		main->AddItem(misc);

		AddCategory(std::move(main));
		AddCategory(BuildSpawnVehicleMenu());
		AddCategory(BuildVehicleEditorMenu());
		AddCategory(BuildSavedVehiclesMenu());
	}
}