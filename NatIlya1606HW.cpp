#include <iostream>
using namespace std;

// Класс "Вооружение".
class Weapon
{
private: 
    int damage; // Урон.
    int fireRate; // Темп стрельбы/атаки.
    int range; // Эффективная дальность.
    // Такие праметры как "Темп атаки" и "Эффективная дальность" используются с целочисленным типом данных, так как в игре предусматривается целочисленная система координат. 
public: 
    // Конструктор класса, задаётся урон оружия, скорость стрельбы/атаки, эффективная дальность.
    Weapon(int weaponDamage, int weaponFireRate, int weaponRange) : damage{ weaponDamage }, fireRate{ weaponFireRate }, range{ weaponRange } {};
    
    // Функция атаки оружия по указанному направлению.
    void attack(int direction)
    {
        //<...>
    };
};
 
// Класс "Кулаки", наследник класса "Вооружение".
class Fists : public Weapon
{
private:
    int weaponID = 0; // Идентификатор оружия.
public: 
    Fists() : Weapon(50, 2, 1) {}; // Данные о оружии: урон, скорость атаки, эффективная дальность.
    int returnWeaponID() { return weaponID; } // Вовзращение идентификатора вооружения.
};

// Класс "Пистолет Макарова".
class MakarovPistol: public Weapon
{
private: 
    int weaponID = 1; // Идентификатор оружия.
public: 
    MakarovPistol() : Weapon(28, 1, 50){};
    int returnWeaponID() { return weaponID; } // Вовзращение идентификатора вооружения.
};

// Класс "Персонаж".
class Character 
{
private: 
    int direction; // Направление персонажа.
    int health; // Здоровье пресонажа.
    int weaponID; // Имеющееся вооружение.
    int classOfArmor; // Класс защиты(брони).
public:
    Character(int settingHealth, int settingWeaponID, int settingClassOfArmor, int settingDirection) : health{ settingHealth }, weaponID{ settingWeaponID }, classOfArmor{ settingClassOfArmor }, direction{ settingDirection }{};
    // Функция изменения вооружения, если найден другой(при запросе).
    void setWeapon(int settingWeaponID) 
    {
        weaponID = settingWeaponID;
    };
    // Функция атаки.
    virtual void attack() {};

};

class MainHero : public Character
{
public: 
    void attack() override
    {
        // По идее, способы атак у неигрового персонажа и игрока отличаются. 
    };
};

