#include <iostream>
#include "Weapon.h"
#include "Colours.h"

using namespace std;
using namespace Colour;

int main()
{
	// --- Inizialization ---
	Weapon meleeWeapon("Sword", WeaponType::MELEE, 25);
	Weapon rangedWeapon("Bow", WeaponType::RANGED, 15);
	Weapon pistol("Pistol", WeaponType::RANGED, 30);

	// --- Print info ---
	cout << "=== " << Green << "Single Weapons" << Reset << " === \n";
	meleeWeapon.GetInfo();
	rangedWeapon.GetInfo();
	pistol.GetInfo();

	cout << "\n";
	system("pause");
	system("cls");

	// --- Array of Weapons ---
	Weapon arsenal[3] = { meleeWeapon, rangedWeapon, pistol };

	cout << "=== " << Green << "Arsenal Array" << Reset << " ===\n";

	int idx = 1;
	for (const auto& w : arsenal) {
		cout << "Weapon #" << idx++ << "\n";
		w.GetInfo();
		cout << "\n";
	}
	system("pause");
	system("cls");

	// --- Print info simulation ---
	string playerName = "Arthas";
	cout << "Player Name: " << playerName << "\n";
	cout << "Equipped weapon: " << "Sword\n";

	// --- Damage simulation ---
	cout << endl << "=== " << Green << "Damage Simulation" << Reset << " ===\n";
	for (auto& w : arsenal) w.ApplyDamage();

	cout << endl << "=== " << Green << "End of Simulation" << Reset << " ===\n";

	return 0;
}
