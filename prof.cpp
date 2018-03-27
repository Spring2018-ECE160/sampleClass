#include <prof.h>
#include <iostream>

using namespace std;

void Professor::setName(string n)
{
    name = n;
}

string Professor::getName()
{
    return name;
}

void Professor::setTheRest(bool t, int s, string d, double r)
{
    tenure = t;
    salary = s;
    department = d;
    rating = r;
}

int Professor::getSalary () const
{
//    salary = 1000000; // illegal b/c it's const now!
    return salary;
}

void administration()
{
    Professor p;
    p.salary = 777777;
    cout << p.salary << endl;
}

Professor::Professor()
{
    name = "Smyth";
    tenure = true;
    salary = 100000;
    department = "Math";
    rating = 11; // out of 10
}

Professor::~Professor()
{
    cout << name << " has retired." << endl;
}

void Professor::setSalary(const int sal)
{
    // sal = 1000000; // illegal b/c input is const
    salary = sal;
}

void Professor::setSalaryAndTenure(bool ten, int sal)
{
    salary = sal;
    tenure = ten;
}
