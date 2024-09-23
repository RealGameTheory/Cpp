#include <iostream>
#include <cmath>
using namespace std;

class Vector
{
private:
    double x;
    double y;

public:
    Vector(double x = 0, double y = 0) : x(x), y(y) {}

    // Overload dotProduct for two vectors
    double dotProduct(const Vector &other) const
    {
        return (x * other.x + y * other.y);
    }

    // Overload crossProduct for two vectors
    double crossProduct(const Vector &other) const
    {
        return (x*other.x - y*other.y);
    }

    // Overload magnitude to calculate the magnitude of the vector
    double magnitude() const
    {
       return(sqrt(x*x+y*y)); 
    }

    void print() const
    {
        std::cout << "(" << x << ", " << y << ")" << std::endl;
    }
};

int main()
{
    Vector v1(3.0, 4.0);
    Vector v2(1.0, 2.0);

    double dot = v1.dotProduct(v2);
    std::cout << "Dot product of v1 and v2: " << dot << std::endl;

    double cross = v1.crossProduct(v2);
    std::cout << "Cross product of v1 and v2: " << cross << std::endl;

    double mag = v1.magnitude();
    std::cout << "Magnitude of v1: " << mag << std::endl;

    return 0;
}