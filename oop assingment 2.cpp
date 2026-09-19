#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int id_num;
    string name;
    float salary;
    int exp;

    void display()
    {
        cout << "\n--- ---------EMPLOYEE DETAILS ------------\n";
        cout << "Employee ID Number: " << id_num << "\n";
        cout << "Employee Name: " << name << endl;
        cout << "Employee Salary: " << salary << endl;
        cout << "Employee Experience in years: " << exp << "\n";
    }
};

int main()
{
    Employee e1;

    e1.id_num = 786;
    e1.name = "chavanprash ";
    e1.salary = 32518.67;
    e1.exp = 5;

    e1.display();

    return 0;
}
