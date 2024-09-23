#include <iostream>
using namespace std;
class vector2d
{
private:
    int x;
    int y;
public:
    vector2d(){
        x=0;
        y=0;
    };
    vector2d(int __x, int __y)
    {
        x = __x;
        y = __y;
    };
    ~vector2d(){
        cout<<"vector destroyed"<<endl; 
    };
    void setvalue(int a, int b){
        x=a;
        y=b;
    }
    vector2d operator+(const vector2d& other){
        return vector2d(x+other.x,y+other.y);
    }
    vector2d operator-(const vector2d& other)
    {
        return vector2d(x - other.x, y - other.y);
    }
    int operator*(const vector2d& other){
        return x*other.x+y*other.y;
    }
    void display(){;
    cout<<x<<y<<endl;
    }
};

int main(){
    int x1,y1;
    cin>>x1>>y1;
    vector2d v0,v1,v2;
    v1.setvalue(x1,y1);
    int x2, y2;
    cin >> x2 >> y2;
    v2.setvalue(x2, y2);
    vector2d add=v1+v2;
    add.display();
    vector2d sub=v1-v2;
    sub.display();
    int dot;
    dot=v1*v2;
    cout<<dot<<endl; 
}

