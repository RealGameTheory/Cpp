#include <iostream>
using namespace std;
class animal
{
private:
string name;
public:
void makesound(){
    cout<<"proceeds to make sound"<<endl;
}
};
class dog:public animal{

};
class dog2:public animal{//for over riding
    public:
        void makesound(){
        cout<< "oonga boonga" << endl;
        }
};
class cat:public animal{
    public:
    void makesound(){
        cout<<"meow meow nigga"<<endl;
    }
};
int main(){
    animal a;
    a.makesound();
    dog d;
    d.makesound();
    dog2 h;
    h.makesound();
    cat c;
    c.makesound();

}