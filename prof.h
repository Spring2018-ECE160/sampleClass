#include <string>

using namespace std;

void administration();

class Professor {
    string name;
    bool tenure; // true or false
    int salary;
    string department;
    double rating;

public:
    Professor(); // constructor

    // overloaded constructor; also inline
    Professor(string name) {this->name = name;};

    // another overloaded constructor; also inline
    Professor(int salary) {this->salary = salary;};

    ~Professor(); // destructor
    void setName(string n);
    string getName();
    void setTheRest(bool t, int s, string d, double r);

    // const function that doesn't allow changing member variables
    int getSalary() const;

    // friend class can modify private members
    friend void administration();

    // default argument
    void setSalary(const int sal = 50000);

    // another default argument; must be at end
    void setSalaryAndTenure(bool ten,int sal = 50000);

    // more default arguments
    void threeArguments(bool ten, int sal=100000, string dept="EE");

};
