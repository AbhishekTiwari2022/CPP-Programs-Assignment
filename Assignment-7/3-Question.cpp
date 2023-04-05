#include<iostream>
using namespace std;
class matrix
{
    private:
        int a[3][3],i,j,k,sum[3][3];
    public:
        void setData()
        {
            int x[3][3];
            cout<<"Enter Matrix A Element : ";
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                    cin>>x[i][j];
                }
            }

            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                   a[i][j]=x[i][j];
                }
            }
        }
        void showData()
        {
            cout<<"Matrix A : "<<endl;
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                {
                   cout<<a[i][j];
                }
                cout<<endl;
            }
        }
        matrix operator+(matrix);
        matrix operator-(matrix);
         matrix operator*(matrix);
};
matrix matrix::operator+(matrix M)
{
    matrix temp;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        temp.a[i][j]=a[i][j] + M.a[i][j];
      }
    }
    return temp;
}
matrix matrix::operator-(matrix M)
{
    matrix temp;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        temp.a[i][j]=a[i][j] - M.a[i][j];
      }
    }
    return temp;
}
matrix matrix::operator*(matrix M)
{
    matrix temp;
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
          sum[i][j]=0;
          for(k=0;k<3;k++)
          {
            temp.a[i][j]+=a[i][k]*M.a[k][j];
          }

      }
    }
    return temp;
}
int main()
{
    matrix m1,m2,m3;
    m1.setData();
    //m1.showData();
    m2.setData();
    //m2.showData();
    m3=m1+m2;
    m3.showData();
    m3=m1-m2;
    m3.showData();
    m3=m1*m2;
    m3.showData();
    return 0;
}
