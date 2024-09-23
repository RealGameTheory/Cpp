#include <iostream>
using namespace std;

class Vector2D
{
private:
    int x, y;

public:
    // Default constructor
    Vector2D(){
        x=0;
        y=0;
    }

    Vector2D(int __x, int __y){
        x=__x;
        y=__y;
    }

    ~Vector2D(){}

    void setValue(int __x, int __y)
    {
        x = __x;
        y = __y;
    }

    // Overloaded + operator to add two vectors
    Vector2D operator+(const Vector2D &other) const
    {
        return Vector2D(x + other.x, y + other.y);
    }

    // Overloaded - operator to subtract two vectors
    Vector2D operator-(const Vector2D &other) const
    {
        return Vector2D(x - other.x, y - other.y);
    }

    // Overloaded * operator to perform the dot product of two vectors
    int operator*(const Vector2D &other) const
    {
        return x * other.x + y * other.y;
    }

    void display() const
    {
        cout << "(" << x << ", " << y << ")";
    }
};

int main()
{
    // Create vectors
    Vector2D v1, v2;
    int x1, y1;
    cout << "Enter values for vector v1 (x y): ";
    cin >> x1 >> y1;
    v1.setValue(x1, y1);

    int x2, y2;
    cout << "Enter values for vector v2 (x y): ";
    cin >> x2 >> y2;
    v2.setValue(x2, y2);

    // addition
    Vector2D Add = v1 + v2;
    cout << "addition"<<endl;
    Add.display();
    cout<<endl;

    // subtraction
    Vector2D Sub = v1 - v2;
    cout << "subtraction"<<endl;
    Sub.display();
    cout << endl;

    // dot product
    int dotProduct = v1 * v2;
    cout << "Dot Product " << dotProduct << endl;

    return 0;
}
