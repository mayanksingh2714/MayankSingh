#include <iostream>
using namespace std;

// Base Class
class Vehicle {
protected:
    string brand;
    int speed;

public:
    Vehicle(string b, int s) {
        brand = b;
        speed = s;
    }

    void showVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class Petrol : virtual public Vehicle {
public:
    Petrol(string b, int s) : Vehicle(b, s) {}

    void petrolInfo() {
        cout << "This vehicle runs on Petrol." << endl;
    }
};


class Electrical : virtual public Vehicle {
public:
    Electrical(string b, int s) : Vehicle(b, s) {}

    void electricalInfo() {
        cout << "This vehicle runs on Electricity." << endl;
    }
};


class Hybrid : public Petrol, public Electrical {
public:
    Hybrid(string b, int s)
        : Vehicle(b, s), Petrol(b, s), Electrical(b, s) {}

    void hybridInfo() {
        cout << "This is a Hybrid Vehicle." << endl;
    }
};

int main() {

    Hybrid h("Toyota", 180);

    h.showVehicle();
    h.petrolInfo();
    h.electricalInfo();
    h.hybridInfo();

    return 0;
}
