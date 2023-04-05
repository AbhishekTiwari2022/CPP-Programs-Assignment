#include<iostream>
#include<string.h>
using namespace std;

class Customer
{
    private:
        int cust_id;
        char name[20];
        char email[30];
        char mobile[10];
    public:
        Customer()
        {
            cust_id=1;
            strcpy(name,"Abhi");
            strcpy(email,"Abhi00555@gmail.com");
            strcpy(mobile,"6353468971");
        }
        Customer(int c_id,char c_name[20],char mail[30],char c_mobile[10])
        {
            cust_id=c_id;
            strcpy(name,c_name);
            strcpy(email,mail);
            strcpy(mobile,c_mobile);
        }
        void showCustomer();
};
void Customer::showCustomer()
{
    cout<<"Customer Id = "<<cust_id<<endl;
    cout<<"Customer Name = "<<name<<endl;
    cout<<"Customer Email = "<<email<<endl;
    cout<<"Customer Mobile = "<<mobile;
}
int main()
{
    Customer c1,c2(2,"Bhavi","Bhavichy@gmail.com","6345678755");
    cout<<"------Customer One Record------\n";
    c1.showCustomer();
    cout<<"\n------Customer Second Record------\n";
    c2.showCustomer();
}
