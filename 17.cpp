#include<iostream>
using namespace std;

class Employee{
public:
    int id;
    string name;
    float salary;

    Employee(int ID, string n, float s){
        id = ID;
        name = n;
        salary = s;
    }

    void show(){
        cout << "ID : " << id << endl;
        cout << "NAME : " << name << endl;
        cout << "SALARY : " << salary << endl;
    }
};

class Doctor : public Employee{
public:
    string profession;

    Doctor(int ID, string n, float s, string p)
        : Employee(ID, n, s)
    {
        profession = p;
    }

    void display(){
        show();
        cout << "Profession : " << profession << endl;
    }
};

class Nurse : public Employee{
public:
    string profession;

    Nurse(int ID, string n, float s, string p)
        : Employee(ID, n, s)
    {
        profession = p;
    }

    void display(){
        show();
        cout << "Profession : " << profession << endl;
    }
};

int main(){

    Doctor d(20, "Raman", 1000, "Doctor");

    Nurse *n = new Nurse(30, "Radhika", 100, "Nurse");

    d.display();
    cout << endl;

    n->display();

    delete n;

    return 0;
}