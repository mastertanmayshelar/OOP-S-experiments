#include <iostream>
using namespace std;
// single 
class person{
    public:
    int age;
    string name;
};
class student: public person{
    public:
    int rollno;
};
// multilayer
class grandparent{
   public:
   int age;
   string name;
};

class parent : public grandparent{
public :
int property;
};
class child : public parent{
    public:
    float salary;
};
int main()
{
   person p1;
   student s1;
   grandparent g1;
   parent e1;
   child c1;
   p1.age = 23;
   p1.name = "ram";
   s1.rollno = 36;
   g1.age = 45;
   g1.name = "shripati";
   e1.property = 90;
   c1.salary = 23400.67;
   cout<<"age:"<<p1.age<<endl;
   cout<<"name:"<<p1.name<<endl;
   cout<<"age of grandparent:"<<g1.age<<endl;
   cout<<"rollno:"<<s1.rollno<<endl;
   cout<<"property of parents:"<<e1.property<<endl;
   cout<<"salary of child:"<<c1.salary<<endl;
    return 0;
}

