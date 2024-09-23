#include <iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(int __day, int __month, int __year){
        day=__day;
        month=__month;
        year=__year;
    }
    void display(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    } 
};
int main(){
    Date date1(13,5,2024);
    date1.display();
    return 0;
}
