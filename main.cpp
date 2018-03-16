#include <iostream>
#include <prof.h>

using namespace std;

int main()
{
    cout << "HELLO " << endl;

    Professor profWolf;
    profWolf.setName("Alan Wolf");
    cout << profWolf.getName() << endl;

    profWolf.setTheRest(1, 219832, "Physics", 112.0);
    cout << profWolf.getSalary() << endl;

    return 0;
}
