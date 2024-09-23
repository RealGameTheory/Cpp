#include <iostream>
using namespace std;
template <typename T1,typename T2>
T2 add (T1 a, T2 b){
    return a+b;
}

int main(){
    cout<<"sum of integers = "<<add(3,2)<<endl;
    cout << "sum of sloats = " << add(3.2, 2.5) << endl;
    cout << "sum of strings = " << add('1', '2') << endl;
    cout<<"sum of string and int = "<< add('1',3)<<endl;
    
}