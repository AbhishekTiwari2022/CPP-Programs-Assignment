#include<iostream>
#include<math.h>>
using namespace std;
class Circle
{
    private :
        int radius;
    public :
        void setRadius(int radius)
        {
                this->radius=radius;
        }
        void getRadius()
        {
            cout<<"Radius : "<<radius<<endl;
        }
        void getArea()
        {
           float a;
           a=3.14*radius*radius;
           cout<<a;
        }
};
class ThikCircle:public Circle
{
    private :
        int thickness;
    public :
        void setThickness(int thickness)
        {
            setRadius(2);
            this->thickness=thickness;
        }
        void getThickness()
        {
            getRadius();
            cout<<"Thickness :- "<<thickness<<endl;
        }
        void getArea()
        {
            thickness=2*thickness;
            cout<<thickness;
        }
};
int main()
{
    ThikCircle t1;
    t1.setThickness(2);
    t1.getThickness();
    t1.getArea();
    return 0;
}
