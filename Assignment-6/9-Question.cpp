#include<iostream>
#include<string.h>
using namespace std;
class Room
{
    private:
        int Room_No;
        char Room_Type[20];
        char is_Ac[4];
        float price;
    public:
        Room()
        {
           Room_No=101;
           strcpy(Room_Type,"Single");
           strcpy(is_Ac,"Yes");
           price=3500;
        }
        Room(int rmno,char Rmtype[20],char Is_Ac[4],float Price)
        {
            Room_No=rmno;
            strcpy(Room_Type,Rmtype);
            strcpy(is_Ac,Is_Ac);
            price=Price;
        }
        void display();
};
void Room::display()
{
    cout<<"Room_No = "<<Room_No<<endl;
    cout<<"Room_Type = "<<Room_Type<<endl;
    cout<<"is_Ac = "<<is_Ac<<endl;
    cout<<"price = "<<price<<endl;
}
int main()
{
    Room r1,r2(102,"Double","Yes",5000);
    r1.display();
    r2.display();
}
