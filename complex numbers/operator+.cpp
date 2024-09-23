#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int img;

public:
    complex(int _real, int _img)
    {
        real = _real;
        img = _img;
    }
    complex operator+(complex const &other)
    {
        return complex(real + other.real, img + other.img);
    }
    void display()
    {
        cout << real << "+i" << img << endl;
    }
};
int main()
{
    complex c1(7, 8);
    complex c2(2, 3);
    c1.display();
    c2.display();
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}