#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        setData(int a,int b)
        {
            (*this).a=a;
            (*this).b=b;
        }
        showData()
        {
            cout<<"A = "<<a<<endl<<"B = "<<b;
        }
};
void f1()
{
    Complex *q=new Complex;
    q->setData(1,6);
    q->showData();
    delete q;
}
int main()
{
    Complex c1;
    c1.setData(2,3);
    c1.showData();
    cout<<endl;
    f1();
    return 0;
}
