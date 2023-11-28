#include <iostream>

using namespace std;

class Vehicle {
protected:
  string name;
  int speed;

public:
  Vehicle(string name, int speed) {
    this->name = name;
    this->speed = speed;
  }

  void printDetails() {
    cout << "Name: " << name << endl;
    cout << "Speed: " << speed << endl;
  }
};

class Car : public Vehicle {
public:
  int numberOfDoors;

  Car(string name, int speed, int numberOfDoors) : Vehicle(name, speed) {
    this->numberOfDoors = numberOfDoors;
  }

  void printDetails() {
    Vehicle::printDetails();
    cout << "Number of doors: " << numberOfDoors << endl;
  }
};

class Airplane : public Vehicle {
public:
  int altitude;

  Airplane(string name, int speed, int altitude) : Vehicle(name, speed) {
    this->altitude = altitude;
  }

  void printDetails() {
    Vehicle::printDetails();
    cout << "Altitude: " << altitude << endl;
  }
};

class AmphibiousPlane : public Car, public Airplane {
public:
  AmphibiousPlane(string name, int speed, int numberOfDoors, int altitude)
      : Car(name, speed, numberOfDoors), Airplane(name, speed, altitude) {}

  void printDetails() {
    Car::printDetails();
    Airplane::printDetails();
  }
};

int main() {
  AmphibiousPlane amphibiousPlane("Seaplane", 200, 4, 10000);
  amphibiousPlane.printDetails();

  return 0;
}

