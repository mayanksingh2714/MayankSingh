#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    Car(string make, string model, int year) {
        this->make = make;
        this->model = model;
        this->year = year;
    }

    int getCarAge(int currentYear) {
        if (year > currentYear) {
            cout << "Invalid year" << endl;
            return -1;
        }
        return currentYear - year;
    }
};

int main() {
    string make, model;
    int year, currentYear;

    cin >> make;
    cin >> model;
    cin >> year;
    cin >> currentYear;

    Car car(make, model, year);
    int age = car.getCarAge(currentYear);

    if (age >= 0) {
        cout << age << endl;
    }

    return 0;
}