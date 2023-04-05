#include<iostream>
#include<string.h>
using namespace std;

class Person
{
    private:
        char name[20];
        int age;
    protected:
        void setter(char name[],int age)
        {
            strcpy(this->name,name);
            this->age=age;
        }
        void getter()
        {
            cout<<"Name : "<<name<<endl<<"Age : "<<age;
        }
};
class Employee:public Person
{
    private:
        float salary;
    public:
        setEmployee(float salary)
        {
            setter("Abhishek",21);
            this->salary=salary;
        }
        showEmployee()
        {
            getter();
            cout<<endl;
            cout<<"Salary : "<<salary;
        }
};
int main()
{
    Employee e1;
    e1.setEmployee(12000);
    e1.showEmployee();
    return 0;
}
