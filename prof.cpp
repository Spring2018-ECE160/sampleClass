#include <prof.h>

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

int Professor::getSalary () 
{
    return salary;
}
