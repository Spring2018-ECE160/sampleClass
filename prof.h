#include <string>

using namespace std;

class Professor {
    string name;
    bool tenure; // true or false
    int salary;
    string department;
    double rating;

public:
    void setName(string n);
    string getName();

    void setTheRest(bool t, int s, string d, double r);

    int getSalary();

};
