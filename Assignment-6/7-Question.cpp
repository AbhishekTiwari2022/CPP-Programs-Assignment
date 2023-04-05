#include<iostream>
using namespace std;
class Student
{
    private:
        int roll_no;
        char stud_name[20];
        char mobile_no[12];
        char Dept[20];
    public:
        Student()
        {
            cout<<"Enter Student Roll Number : ";
            cin>>roll_no;
            cout<<"Enter Student Name : ";
            cin>>stud_name;
            cout<<"Enter Student Mobile Number : ";
            cin>>mobile_no;
            cout<<"Enter Student Department : ";
            cin>>Dept;
            cout<<endl;
        }
        void display();
};
void Student::display()
{
    cout<<"Student Roll Number : "<<roll_no<<endl;
    cout<<"Student Name : "<<stud_name<<endl;
    cout<<"Student Mobile Number : "<<mobile_no<<endl;
    cout<<"Student Department : "<<Dept;
}
int main()
{
    Student s1;
    cout<<"------- Student Details Are --------"<<endl;
    s1.display();
    return 0;
}
