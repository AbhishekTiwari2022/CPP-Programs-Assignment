#include<iostream>
using namespace std;
class Complex
{
    private :
        int a,b;//Instance Member Variable;
    public :
        void setData(int,int);
        void showData();
        Complex add(Complex);
        Complex Sub(Complex);
        Complex Mul(Complex);
};
void Complex::setData(int x,int y)
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b;
}
Complex Complex::add(Complex C)
{
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
Complex Complex::Sub(Complex sub)
{
    Complex temp;
    temp.a=a-sub.a;
    temp.b=b-sub.b;
    return temp;
}
Complex Complex::Mul(Complex mul)
{
    Complex temp;
    temp.a=a*mul.a;
    temp.b=b*mul.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3,c4,c5;
    c1.setData(3,4);
    c1.showData();
    cout<<endl;
    c2.setData(5,6);
    c2.showData();
    cout<<endl;
    //Addition
    c3=c1.add(c2);
    c3.showData();

    //Subtract
    cout<<endl;
    c4=c1.Sub(c2);
    c4.showData();

    //Multipicate
    cout<<endl;
    c5=c1.Mul(c2);
    c5.showData();
    return 0;
}
