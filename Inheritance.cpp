#include <iostream>
#include <string>

using namespace std;

// Vehicle class (base class)
class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}
    void start() {
        cout << "The " << make << " " << model << " is starting." << endl;
    }
    void stop() {
        cout << "The " << make << " " << model << " is stopping." << endl;
    }
};

// Car class (derived class)
class Car : public Vehicle {
private:
    int numDoors;
public:
    Car(string mk, string mdl, int yr, int nd) : Vehicle(mk, mdl, yr), numDoors(nd) {}
    void display() {
        cout << year << " " << make << " " << model << " with " << numDoors << " doors." << endl;
    }
};

int main() {
    Car car("Toyota", "Corolla", 2021, 4);
    car.start();
    car.display();
    car.stop();
    return 0;
}
