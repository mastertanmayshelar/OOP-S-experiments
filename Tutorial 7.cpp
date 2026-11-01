
#include <iostream>
using namespace std;

// Base class 1
class BasicInfo {
    protected:
        int id;
        string name;
        int age;

    public:
        void getBasicInfo() {
            cout << "Enter Employee ID: ";
            cin >> id;

            cout << "Enter Employee Name: ";
            cin >> name;

            cout << "Enter Employee Age: ";
            cin >> age;
        }
};

// Base class 2
class DepartmentInfo {
    protected:
        string department;
        float salary;

    public:
        void getDepartmentInfo() {
            cout << "Enter Department: ";
            cin >> department;

            cout << "Enter Salary: ";
            cin >> salary;
        }
};

// Derived class
class Employee : public BasicInfo, public DepartmentInfo {
    public:
        void getData() {
            getBasicInfo();
            getDepartmentInfo();
        }

        void display() {
            cout << "\n--- Employee Information ---" << endl;
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Age: " << age << endl;
            cout << "Department: " << department << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    Employee e;

    e.getData();
    e.display();

    return 0;
}
