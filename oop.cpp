#include <iostream>
using namespace std;

// kaito 11/17/2021
// (OOP) C++

// class 
class Teteclass{
    // declare public variable in class
    public:
      int number;
      string name;
};

int main() {
 // create object
    Teteclass ughbebe;

    // set values
    ughbebe.number = 344;

    cout << "what is your name:";
    cin >> ughbebe.name;
    cout << "My name is " << ughbebe.name;
    return 0;
}
