#include <iostream>
using namespace std;

class Hero {

    // properites
    private:
    int health;

    public:
    char level;

    void print(){
        cout << level;
    }

    int getHealth(){
        return health;
    }

    int getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char ch)
    {
        level = ch;
    }
};

int main(){

    // static allocation
    Hero a;

    // dynamic allocation
    Hero *b = new Hero;

    // creation of object
    // Hero ramesh;
    // cout << "Ramesh health: " << ramesh.getHealth() << endl;

    // ramesh.setHealth(70);
    // ramesh.level = 'A';

    // cout << "health is: " << ramesh.getHealth() << endl;
    // cout << "Level is: " << ramesh.level << endl;

    // cout << ramesh.health << endl;
    // cout << ramesh.level << endl;

    // cout << "size: " << sizeof(h1) << endl;


    return 0;
}