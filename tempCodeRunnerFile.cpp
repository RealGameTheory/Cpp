#include <iostream>

class Vector2D
{
private:
    int x, y;

public:
    // Default constructor
    Vector2D() : x(0), y(0) {}

    // Parameterized constructor
    Vector2D(int xVal, int yVal) : x(xVal), y(yVal) {}

    // Function to set values of x and y
    void setValue(int xVal, int yVal)
    {
        x = xVal;
        y = yVal;
    }

    // Overloaded + operator to add two vectors
    Vector2D operator+(const Vector2D &v) const
    {
        return Vector2D(x + v.x, y + v.y);
    }

    // Overloaded - operator to subtract two vectors
    Vector2D operator-(const Vector2D &v) const
    {
        return Vector2D(x - v.x, y - v.y);
    }

    // Overloaded * operator to perform the dot product of two vectors
    int operator*(const Vector2D &v) const
    {
        return x * v.x + y * v.y;
    }

    // Function to display the vector
    void display() const
    {
        std::cout << "(" << x << ", " << y << ")";
    }
};

int main()
{
    // Create the first vector using the default constructor
    Vector2D v1;
    int x1, y1;
    std::cout << "Enter values for vector v1 (x y): ";
    std::cin >> x1 >> y1;
    v1.setValue(x1, y1);

    // Create the second vector using the parameterized constructor
    int x2, y2;
    std::cout << "Enter values for vector v2 (x y): ";
    std::cin >> x2 >> y2;
    Vector2D v2(x2, y2);

    // Perform addition
    Vector2D vAdd = v1 + v2;
    std::cout << "v1 + v2 = ";
    vAdd.display();
    std::cout << std::endl;

    // Perform subtraction
    Vector2D vSub = v1 - v2;
    std::cout << "v1 - v2 = ";
    vSub.display();
    std::cout << std::endl;

    // Perform dot product
    int dotProduct = v1 * v2;
    std::cout << "v1 * v2 (Dot Product) = " << dotProduct << std::endl;

    return 0;
}
