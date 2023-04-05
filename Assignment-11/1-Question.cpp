#include<iostream>
#include<fstream>

using namespace std;

void copyfile(char *f1,char *f2)
{
    ifstream fin;
    ofstream fout;
    char ch;

    fin.open(f1);
    fout.open(f2);

    ch=fin.get();
    while(!fin.eof())
    {
        fout<<ch;
        ch=fin.get();
    }
    fin.close();
    fout.close();
}
int main()
{
    copyfile("abc.txt","abccopy.txt");
    cout<<"File Copied Successfully.....";
    return 0;
}
