#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<"a="<<a<<" "<<"b="<<b<<endl;
        }
        friend Complex operator+(Complex,Complex);
        friend Complex operator-(Complex);
        friend Complex operator*(Complex,Complex);
        friend void operator==(Complex,Complex);

};
Complex operator+(Complex C1,Complex C2)
{
    Complex temp;
    temp.a=C1.a+C2.a;
    temp.b=C1.b+C2.b;
    return temp;
}
Complex operator-(Complex C)
{
    Complex temp;
    temp.a=-C.a;
    temp.b=-C.b;
    return temp;
}
Complex operator*(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a*Y.a;
    temp.b=X.b*Y.b;
    return temp;
}
void operator==(Complex X,Complex Y)
{
        if(X.a==Y.a && X.b==Y.b)
            cout<<"A And B Are Same";
        else
            cout<<"A And B Are Not Same";
}
int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(3,4);
    c1.showData();
    c2.setData(2,4);
    c2.showData();
    c3=c1+c2;//c3=operator+(c1,c2);
    c3.showData();
    c4=-c1;//c4=opertor-(c1)
    c4.showData();
    c3=c1*c2;
    c3.showData();
    operator==(c1,c2);
    return 0;
}
