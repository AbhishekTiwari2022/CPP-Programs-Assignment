#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
        char name[20];
        int age;
    public:
        Person(char name[20],int age)
        {
            strcpy(this->name,name);
            this->age=age;
        }
        void showData()
        {
            cout<<"Name="<<name<<endl<<"Age="<<age;
        }

} ;
int main()
{
    Person p("Abhishek",21);
    p.showData();
    return 0;
}
