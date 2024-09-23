#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> myvector;
    myvector.push_back(30);
    myvector.push_back(20);
    myvector.push_back(10);

    for (auto it = myvector.begin(); it < myvector.end(); it++)
    {
        cout<<*it<<endl;
        cout << &(*it) << endl;
    }
    
    cout<<&(*myvector.end())<<endl;
    
}