#include <iostream>
using namespace std;

class book
{
private: //These are the variables
    int bookID;
    string author;
    string title;
    string edition;
    string yop;
    long long ISBNno;
    float Price;
    float discount;
    int validity(long long isb)//This is to vaildate the isbn number of a book
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
    book() {                  //default book
        bookID = 0;
        author = "";
        title = "";
        edition = "";
        yop="";
        ISBNno=0;
        Price=0;

    }
    book(int __bookID,string __author, string __title, string __edition, string __yop, long long __ISBNno, float __Price) //book with parameters
    {
        bookID = __bookID;
        author = __author;
        title = __title;
        edition = __edition;
        yop = __yop;
        ISBNno = __ISBNno;
        Price = __Price;
    }

    void displayDetails()//to display book deatils and not show the book details if the isbn no. is wrong
    {
        int a2;
        a2 = validity(ISBNno);
        if (a2 == 1)
        {
            cout<<"bookID: "<< bookID<<endl;
            cout << "Author: " << author << endl;
            cout << "title: " << title << endl;
            cout << "Edition: " << edition << endl;
            cout << "Year of Publication: " << yop << endl;
            cout << "ISBN: " << ISBNno << endl;
            cout << "Price : " << Price << endl;
        }
        else
        {
            cout << "invalid" << endl;
        }
    }
    ~book()//To show if the book  has been destroyed
    {
        cout << "book destroyed" << endl;
    }

    int calculatePrice(){ //In case if discount value is not passed
        return Price;
    }

    float calculatePrice(float discount)
    {                // In case if discount value is passed
        float temp;  // To store the value to be subtracted
        float temp2; // To store the discounted value
        temp2 = Price;
        temp = temp2 * (discount / 100);
        temp2 = temp2 - temp;
        return temp2;
    }
    void updatedetails() // In case if bookID is not passed
    {
        cout << "Author: " << endl;
        cin >> author;
        cout << "title: " << endl;
        cin >> title;
        cout << "edition: " << endl;
        cin >> edition;
        cout << "Year of Publication: " << endl;
        cin >> yop;
        cout << "ISBNno: " << endl;
        cin >> ISBNno;
        cout << "price: " << endl;
        cin >> Price;
        cout << "discount: " << endl;
        cin >> discount;
        cout << "new discount price " << calculatePrice(discount) << endl;
    }
    void updatedetails(int bookID) // In case if BookId is passed
    {
        cout << "bookID: " << bookID << endl;
        cout << "Author: " << author << endl;
        cout << "title: " << title << endl;
        cout << "Edition: " << edition << endl;
        cout << "Year of Publication: " << yop << endl;
        cout << "ISBN: " << ISBNno << endl;
        cout << "Price : " << Price << endl;
        cout<<"new discount price "<<calculatePrice(discount)<<endl;
    }
};

int main()
{
    string temp3; //To store the choice for updating details
    int bookID2;
    //intializing books
    book book0;
    book book1(1,"gege", "jjk", "2", "2024", 2123456802, 500);

    book0.displayDetails();// Diplaying default book
    book1.displayDetails();// Displaying book with parameters
    cout << "before discount " << book1.calculatePrice() << endl;
    cout << "Discounted price is " << book1.calculatePrice(20) << endl;
    cout<<"Want to Upadte ?"<<endl;
    cin>>temp3;
    if (temp3 == "Y" || temp3 == "y")//To execute the choice
    {
        book1.updatedetails();
        book1.displayDetails();
    }
    else if (temp3 == "N"|| temp3 == "n")
    {
        cout<<"thank you"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }
    cout<<"enter new book ID"<<bookID2<<endl;//To enter new book detail
    cin>>bookID2;
    book1.updatedetails(bookID2);//BookID being passed
    return 0;
}   
