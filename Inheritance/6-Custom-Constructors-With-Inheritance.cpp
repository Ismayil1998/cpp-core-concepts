#include <iostream>
#include <string>
using namespace std;


class GameObject {
    public:
        GameObject(const string& name) : name(name) {
            
            
        }

        void displayInfo() {
            cout << "Name: " << name << "\n";
        }

    private:
        string name;
};


class Player : public GameObject {
    public:
        Player(const string& name, int health) : GameObject(name), health(health) {
            
           
        }

        void displayInfoPlayer() {
            displayInfo();
            cout << "Health: " << health << "\n";
        }

    private:
        int health;
};


class Enemy : public GameObject {
    public:
        Enemy(const std::string& name, int damage) : GameObject(name), damage(damage) {
        
        }

        void displayInfoEnemy() {
            displayInfo();
            cout << "Damage: " << damage << "\n";
        }

    private:
        int damage;
};


class Character : public GameObject {
    public:
        Character(const std::string& name, int level, int experience) : GameObject(name), level(level), experience(experience) {
           
        }

        void displayInfoCharacter() {
            displayInfo();
            cout << "Level: " << level << "\n";
            cout << "Experience: " << experience << "\n";
            cout<<endl;
        }

    private:
        int level;
        int experience;
};

class Weapon : public GameObject {
    public:
        Weapon(const string& name, int damage) : GameObject(name), damage(damage) {}

        void displayInfoWeapon() {
            GameObject::displayInfo();
            cout << "Damage: " << damage << "\n";
        }

    private:
        int damage;
};


int main() {

    system("cls");

    Player player("Hero", 100);
    Enemy enemy("Goblin", 20);
    Character character("Adventurer", 5, 10);

    player.displayInfoPlayer();
    cout << endl;

    enemy.displayInfoEnemy();
    cout << endl;

    character.displayInfoCharacter();

    Weapon we("GUN", 50);
    we.displayInfoWeapon();

    return 0;
}