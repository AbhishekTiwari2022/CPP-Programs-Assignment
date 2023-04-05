#include<iostream>
#include<string.h>
using namespace std;
class Book
{
    private:
        int booked;
        char title[20];
        float price;
    public:
        Book()
        {
            booked=1;
            strcpy(title,"DSA");
            price=233.50;
        }
        Book(int book_id,char b_title[20],float b_price)
        {
            booked=book_id;
            strcpy(title,b_title);
            price=b_price;
        }
        void show_Book_Detail();
};
void Book::show_Book_Detail()
{
    cout<<"booked = "<<booked<<" Title = "<<title<<" Price = "<<price;
}
int main()
{
    Book b1,b2(2,"JAVA",230.44);

    b1.show_Book_Detail();
    cout<<endl;
    b2.show_Book_Detail();
}
