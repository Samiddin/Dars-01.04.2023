#include <iostream>
#include <string>

using namespace std;

// Engine class
class Engine {
private:
    int horsepower;
public:
    Engine(int hp) : horsepower(hp) {}
    void start() {
        cout << "The engine with " << horsepower << " horsepower is starting." << endl;
    }
    void stop() {
        cout << "The engine with " << horsepower << " horsepower is stopping." << endl;
    }
};

// Transmission class
class Transmission {
private:
    string type;
public:
    Transmission(string t) : type(t) {}
    void shiftUp() {
        cout << "Shifting up to the next gear in the " << type << " transmission." << endl;
    }
    void shiftDown() {
        cout << "Shifting down to the next gear in the " << type << " transmission." << endl;
    }
};

// Car class
class Car {
private:
    Engine engine;
    Transmission transmission;
public:
    Car(Engine eng, Transmission trans) : engine(eng), transmission(trans) {}
    void start() {
        engine.start();
    }
    void stop() {
        engine.stop();
    }
    void shiftUp() {
        transmission.shiftUp();
    }
    void shiftDown() {
        transmission.shiftDown();
    }
};

int main() {
    Engine engine(200);
    Transmission transmission("automatic");
    Car car(engine, transmission);
    car.start();
    car.shiftUp();
    car.shiftUp();
    car.shiftDown();
    car.stop();
    return 0;
}
