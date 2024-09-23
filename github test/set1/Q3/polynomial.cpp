#include <iostream>
#include <cmath>
using namespace std;
class poly{
    private:
    int *coeff;
    int deg;
    public:
    poly(int __coeff[], int __deg){
        deg=__deg;
        coeff = new int[deg+1];
        for (int i = 0; i < deg+1; ++i)
        {
            coeff[i]=__coeff[i];
        }
        
    }
    poly(const poly& other)
    {
        deg = other.deg;
        coeff = new int[deg + 1];
        for (int i = 0; i < deg+1; ++i)
        {
            coeff[i] = other.coeff[i];
        }
    }
    poly operator+(const poly& other){
        int *result = new int[deg+1];
        for (int i = 0; i < deg+1; ++i)
        {
            result[i]=coeff[i]+other.coeff[i];
        }
        poly result2(result,deg);
        return result2;
    
    }
    poly operator-(const poly &other)
    {
        int *result = new int[deg + 1];
        for (int i = 0; i < deg + 1; ++i)
        {
            result[i] = coeff[i]-other.coeff[i];
        }
        poly result2(result, deg);
        return result2;
    }
    void evalute(int x){
        int result=0;
        for (int i = 0; i < deg + 1; ++i)
        {
            result+=coeff[i]*pow(x,i);
        }
        cout<<"Result is : "<<result<<endl;
    }
    void display(){
        for (int i = deg; i >= 0; --i)
        {
            if (i>=deg)
            {
                cout<<coeff[i];
            }
            else
            {
                cout << "+" << coeff[i];
            }
            
            
            if (i > 0)
            {
                cout << "x^" << i;
            }
        }
        cout<<endl;
    }
    
};
int main(){
    int coeff1[] = {5,4,3};//in the form 3x^2+4x+5
    poly p1(coeff1,2);
    int coeff2[] = {7, 9, 2}; // in the for 2x^2+9x+7
    poly p2(coeff2,2);
    cout<<"addition"<<endl;
    poly p3=p1+p2;
    p3.display();
    cout<<"subtraction"<<endl;
    poly p4=p2-p1;
    p4.display();
    cout<<"evaluation"<<endl;
    p2.evalute(2);
}