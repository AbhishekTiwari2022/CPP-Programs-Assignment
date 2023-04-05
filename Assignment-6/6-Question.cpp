#include<iostream>
using namespace std;
class Numbers
{
    private:
        int Size;
        int *arr;
    Numbers(int Size)
    {
        this->Size=Size;
        arr=new int[Size];
    }
    Numbers(Numbers &n)
    {
        Size=n.Size;
        arr=new int[Size];
        for(int i=0;i<Size;i++)
            arr[i]=n.arr[i];
    }
    ~Numbers()
    {
        delete []arr;
    }
};
