# include <iostream>
using namespace std ;

class Employee 
{
    int salary ;

    protected :

    int empid ;

    public :

    string name ;

    void set_employee_detail (int salary , int empid , string name)
    {
        this->salary = salary ;
        this->empid = empid ;
        this->name = name ;
    }

    void display_employee ()
    {
        cout << "Name = " << name << endl ;
        cout << "Employee ID = " << empid << endl ;
        cout << "Salary = "  << salary << endl ;
    }
};

class Manager : public Employee 
{
    public :

    string department ;

    void display_manager ()
    {
        cout << "Department Name = " << department << endl ;
    }
};

int main ()
{
    int salary ,empid ;
    string name ;

    Manager m;

    cin >> m.department >> name >> empid >> salary ;

    m.set_employee_detail(salary,empid,name);

    m.display_manager ();
    m.display_employee ();

    return 0;
}