#include <iostream>
using namespace std;

class book
{
private:
    string authorname;
    string bookname;
    string edition;
    string yop;
    long long ISBNno;
    string Price;
    int validity(long long isb)
    {
        long long n = ISBNno;
        int temp = 0;
        int m = 0;
        for (int i = 1; i <= 10; i++)
        {
            temp = n % 10;
            m += temp * i;
            n = n / 10;
        }
        m = m % 11;
        if (m == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
    }

public:
    book(string __authorname, string __bookname, string __edition, string __yop, long long __ISBNno, string __Price)
    {
        authorname = __authorname;
        bookname = __bookname;
        edition = __edition;
        yop = __yop;
        ISBNno = __ISBNno;
        Price = __Price;
    }
    void displayDetails()
    {
        int a2;
        a2 = validity(ISBNno);
        if (a2 == 1)
        {
            cout << "Author: " << authorname << endl;
            cout << "Book Name: " << bookname << endl;
            cout << "Edition: " << edition << endl;
            cout << "Year of Publication: " << yop << endl;
            cout << "ISBN: " << ISBNno << endl;
            cout << "Price: " << Price << endl;
        }
        else
        {
            cout << "invalid" << endl;
        }
    }
};

int main()
{
    book book1("gege", "jjk", "2", "2024", 7123456802, "$20");
    book1.displayDetails();
}