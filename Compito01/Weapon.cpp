#include <iostream>
#include "Weapon.h"

using namespace std;

#pragma region helper

string WeaponTypeToString(WeaponType type) {
    switch (type) {
    case WeaponType::MELEE:  return "Melee";
    case WeaponType::RANGED: return "Ranged";
    default:                 return "Unknown";
    }
}

string AmmoTypeToString(AmmoType ammo) {
    switch (ammo) {
    case AmmoType::NONE:   return "None";
    case AmmoType::BULLET: return "Bullet";
    case AmmoType::ARROW:  return "Arrow";
    default:               return "Unknown";
    }
}

#pragma endregion

#pragma region Weapon

Weapon::Weapon(const string& name, WeaponType type, int damage)
	: weaponName(name), type(type), ammo(AmmoType::NONE), reloadTime(0.0f), isJammed(false), damage(damage)
{
}

void Weapon::GetInfo() const {
    cout << "Weapon: " << weaponName << "\n";
    cout << "Type: " << WeaponTypeToString(type) << "\n";
    cout << "Damage: " << damage << "\n";
}

void Weapon::ApplyDamage() {
    cout << "Applying " << damage << " damage!\n";
}

#pragma endregion