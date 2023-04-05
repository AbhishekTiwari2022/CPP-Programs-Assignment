#include<iostream>
using namespace std;
class Circle
{
    private:
        double r;
    public:
        void setRadius(double radius)
        {
            r=radius;
        }
        void getRadius()
        {
           cout<<"r="<<r;
        }
        double set_area()
        {
            return 3.14*r*r;
        }
        double set_circumference()
        {
            return 2*3.14*r;
        }

};
int main()
{
    Circle c1;
    c1.setRadius(2);
    c1.getRadius();
    cout<<endl;
    cout<<"Area = "<<c1.set_area()<<endl;
    cout<<"circumference "<<c1.set_circumference();
    return 0;
}
