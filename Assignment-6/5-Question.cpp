#include<iostream>
using namespace std;
class Complex
{
    private:
        float real,img;
    public:
        Complex(float r,float i)
        {
            real=r;
            img=i;
        }
        void showData();
};
void Complex::showData()
{
        cout<<"Real = "<<real<<" Imaginary = "<<img;
}
int main()
{
    Complex obj[5]={Complex(1,2),Complex(3,4),Complex(5,6),Complex(7,8),Complex(9,10)};
    int i;

    for(i=0;i<5;i++)
    {
        obj[i].showData();
        cout<<endl;
    }

    return 0;
}
