#pragma once

#include <string>
using namespace std;

// Helper functions
#pragma region helper

/// <summary>
/// The type of the weapon
/// </summary>
enum WeaponType {
    MELEE,
    RANGED
};

/// <summary>
/// The type of ammo
/// </summary>
enum AmmoType {
    NONE,
    BULLET,
    ARROW
};

/// <summary>
/// Converts the weapon type to a string
/// </summary>
/// <param name="type">The type of the weapon</param>
/// <returns>The string representation of the weapon type</returns>
string WeaponTypeToString(WeaponType type);

/// <summary>
/// Converts the ammo type to a string
/// </summary>
/// <param name="ammo"></param>
/// <returns></returns>
string AmmoTypeToString(AmmoType ammo);

#pragma endregion

class Weapon {
private:
    string weaponName;
    WeaponType type;
    AmmoType ammo;
    float reloadTime;
    bool isJammed;
    int damage;

public:
    /// <summary>
    /// Constructor for the Weapon class
    /// </summary>
    /// <param name="name">The name of the weapon</param>
    /// <param name="type">The type of the weapon</param>
    /// <param name="damage">The damage of the weapon</param>
    Weapon(const string& name, WeaponType type, int damage);

    /// <summary>
    /// Constructor for the Weapon class
    /// </summary>
    /// <param name="weaponName">The name of the weapon</param>
    /// <param name="type">The type of the weapon</param>
    /// <param name="ammo">The type of ammo</param>
    /// <param name="reloadTime">The reload time</param>
    /// <param name="isJammed">If the weapon is jammed</param>
    /// <param name="damage">The damage of the weapon</param>
    Weapon(const string& weaponName, WeaponType type, AmmoType ammo, float reloadTime, bool isJammed, int damage)
        : weaponName(weaponName), type(type), ammo(ammo), reloadTime(reloadTime), isJammed(isJammed), damage(damage)
    {
    }

    /// <summary>
    /// Get information about the weapon
    /// </summary>
    void GetInfo() const;

	/// <summary>
	/// Print the damage value of the weapon
	/// </summary>
    void ApplyDamage();
};
