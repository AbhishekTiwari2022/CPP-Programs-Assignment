#include<iostream>
using namespace std;
class Cuboid
{
    int length,breadth,height;
    public:
        Cuboid()
        {
           length=0;
           breadth=0;
           height=0;
        }
        Cuboid(int l,int b,int h)
        {
           length=l;
           breadth=b;
           height=h;
        }
        void showData()
        {
            cout<<"Length = "<<length<<" Breadth = "<<breadth<<" Height = "<<height;;
        }
};
int main()
{
    Cuboid c1,c2(2,3,4);
    cout<<"----- Parameterized Constructor Values -----\n";
    c2.showData();
    cout<<"\n----- Default Constructor Values -----\n";
    c1.showData();
    return 0;
}
