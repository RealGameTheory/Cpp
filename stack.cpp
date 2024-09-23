#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> mystack;

    mystack.push(10);
    mystack.push(69);
    mystack.push(420);

    if (mystack.empty())
    {
        cout<<"womp womp"<<endl;
    }
    else{
        cout<<"success"<<endl;
    }
    cout << "Elements of the stack: ";

    cout << "\n";
    cout << mystack.top() << endl;
    mystack.pop();
    while (!mystack.empty())
    {
        cout << mystack.top() << "\n";
        mystack.pop();
    }
}