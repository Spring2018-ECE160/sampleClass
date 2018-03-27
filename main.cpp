#include <iostream>
#include <prof.h>

using namespace std;

int main()
{
    cout << "HELLO " << endl;

    /*
    Professor profWolf;
    profWolf.setName("Alan Wolf");
    cout << profWolf.getName() << endl;

    profWolf.setTheRest(1, 219832, "Physics", 10.0);
    cout << profWolf.getSalary() << endl;

    administration();
    */

    /*
    Professor constructorProf;
    cout << constructorProf.getName() << endl;
    cout << constructorProf.getSalary() << endl;
    */

    
    string s = "Estuardo";
    Professor constructorProf(s);
    constructorProf.setSalaryAndTenure(true);
    constructorProf.setSalary();
    cout << constructorProf.getName() << endl;
    cout << constructorProf.getSalary() << endl;

    /*
    Professor adjunctProf(4500);
    cout << adjunctProf.getName() << endl;
    cout << adjunctProf.getSalary() << endl;
    */

    return 0;
}
