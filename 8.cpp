#include<iostream>
using namespace std;

class Person{
public:
string name;
int age;
void getPerson(){
cout<<"Enter name:";
cin>>name;
cout<<"Enter age:";
cin>>age;
}
void displayPerson(){
cout<<"Name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
}
};

class Student:public Person{
public:
int rollNo;
void getStudent(){
getPerson();
cout<<"Enter RollNo:";
cin>>rollNo;
}
void displayStudent(){
displayPerson();
cout<<"RollNo:"<<rollNo<<endl;
}
};

class GraduateStudent:public Student{
public:
string researchTopic;
void getGraduate(){
getStudent();
cout<<"Enter ResearchTopic:";
cin>>researchTopic;
}
void displayGraduate(){
displayStudent();
cout<<"ResearchTopic:"<<researchTopic<<endl;
}
};

class Employee:public Person{
public:
float salary;
void getEmployee(){
getPerson();
cout<<"Enter Salary:";
cin>>salary;
}
void displayEmployee(){
displayPerson();
cout<<"Salary:"<<salary<<endl;
}
};

class TeachingAssistant:public GraduateStudent,public Employee{
public:
void displayTA(){
GraduateStudent::displayGraduate();
Employee::displayEmployee();
}
};

int main(){
TeachingAssistant t;
cout<<"Enter Graduate Student Details"<<endl;
t.getGraduate();
cout<<"Enter Employee Details"<<endl;
t.getEmployee();
cout<<"Teaching Assistant Details"<<endl;
t.displayTA();
return 0;
}