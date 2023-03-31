#include <iostream>
#include <string>

using namespace std;

// Address class
class Address {
private:
    string street;
    string city;
    string state;
public:
    Address(string s, string c, string st) {
        street = s;
        city = c;
        state = st;
    }
    void displayAddress() {
        cout << street << ", " << city << ", " << state << endl;
    }
};

// Person class
class Person {
private:
    string name;
    Address address;
public:
    Person(string n, string s, string c, string st) : name(n), address(s, c, st) {}
    Address getAddress() {
        return address;
    }
};

int main() {
    Person person("John Doe", "123 Main St", "Anytown", "CA");
    Address address = person.getAddress();
    address.displayAddress();
    return 0;
}
