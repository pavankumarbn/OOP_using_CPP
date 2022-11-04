#include <iostream>  
using namespace std;  

class Animal {  
    public: 

void eat(){    
cout<<"Eating...";    
    }      
};   

class Dog: public Animal    
{    
 public:  
 void eat()    
    {    
       cout<<"Eating bread...";  
       Animal::eat();  // Call Overridden Function From Derived Class 3rd way
    }    
};  

int main(void) 
{  
   Dog d = Dog();    
   d.eat();  

   // Call function of Base class 1st way 
   //d.Animal::eat(); // Access Overridden Function to the Base Class 2nd way

   return 0;  
}  