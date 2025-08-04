// constructor is a specail function that is automatically called when an object is created.
// why needed:
// to initialize the object with default or specific values.
// to avoid having to manually set all the memeber varaibles every time.

#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;

    // constructor
    Person(string n, int a){
        name = n;
        age = a;
    }
};

int main(){

    // without constructor
    // Person emp;
    // emp.name = "sid";
    // emp.age = 25;

    // with construcor
    Person emp("sid", 25);
    cout << emp.name << endl;
    cout << emp.age << endl;




    return 0;
}