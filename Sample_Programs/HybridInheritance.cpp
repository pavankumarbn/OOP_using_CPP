#include <iostream>
using namespace std;
class Animal {
  public:
    Animal() {
      cout << "This is an Animal ";
    }
};

//single inheritance
class cat: public Animal {
  public: 
   cat() {
    cout << "that is cat ";
  }
};

class pet {
  public:
    pet() {
      cout << "and pet";
    }
};

//Multiple Inheritance
class kitty: public cat, public pet {
  public: 
    kitty() {
      cout << "\nName of the cat is kitty! \n";
  }
};

int main() {
  kitty mycat;
  return 0;
}
