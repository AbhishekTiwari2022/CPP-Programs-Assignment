#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
    public:
        Circle()
        {
            radius=0;
        }
        Circle(int r)
        {
            radius=r;
        }
};
int main()
{
    Circle c1,c2(3);
    return 0;
}
