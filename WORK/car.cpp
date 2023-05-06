#include<iostream>
using namespace std;
class Vehicle {
  public:
    string brand = "toyota supra";
    void horn() {
      cout << "rataaa..taaaa.. \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "supra";
};

int main() {
  Car myCar;
  myCar.horn();
  cout <<"toyota supra " ;
  return 0;
} 
