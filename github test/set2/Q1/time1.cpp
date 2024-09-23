#include <iostream>
using namespace std;
class time{
    private:
    int hours;
    int min;
    public:
    time(int __hours=0, int __min=0){
        hours=__hours;
        min=__min;
    }
    int operator==(const time& other)const{
        return (hours==other.hours)&&(min==other.min);
    }
    void display(){
        cout<<"hours: " << hours<< endl;
        cout<<"minutes: "<<min<<endl;
    }
};
int main(){
    time time1(9,45);
    time time2(10,45);
    if (time1 == time2)
    {
        cout<<"Time is equal"<<endl;
    }
    else
    {
        cout << "Time is not equal" << endl;
    }
    
    
}