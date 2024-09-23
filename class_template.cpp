#include <iostream>
using namespace std;
template <typename T1, typename T2>
class Pair
{
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s)
    {
        first = f;
        second = s;
    }
    void dispaly()
    {
        cout << "first: " << first << ", second: " << second << endl;
    }
};
int main()
{
    Pair<int, double> r1(10, 3.14);
    r1.dispaly();
    Pair<string, int> r2("Age",3);
    r2.dispaly();
    return 0;
}
