
#include <iostream>
using namespace std;
class ComplexRational{
    private:
    int numeratorReal;
    int denominatorReal;
    int numeratorImaginary;
    int denominatorImaginary;
    public:
    ComplexRational()//default constructor
    {
        numeratorReal = 0;
        denominatorReal = 0;
        numeratorImaginary = 0;
        denominatorImaginary = 0;
    }
    ComplexRational(int nr, int dr,int ni, int di){// parameterized constructor
    numeratorReal=nr;
    denominatorReal=dr;
    numeratorImaginary=ni;
    denominatorImaginary=di;
    }

    ComplexRational operator+(const ComplexRational& other)//for addition
    {
        int realNumerator = (numeratorReal * other.denominatorReal) + (other.numeratorReal * denominatorReal); // calculating real numerator
        int realDenominator = denominatorReal * other.denominatorReal;                                         // calculating real denominator

        int imaginaryNumerator = (numeratorImaginary * other.denominatorImaginary) + (other.numeratorImaginary * denominatorImaginary); // calculating imaginary numerator
        int imaginaryDenominator = denominatorImaginary * other.denominatorImaginary;                                                   // calculating imaginary denominator

        return ComplexRational(realNumerator, realDenominator, imaginaryNumerator, imaginaryDenominator);
    }

    ComplexRational operator-(const ComplexRational& other)// for subtraction
    {
        int realNumerator = (numeratorReal * other.denominatorReal) - (other.numeratorReal * denominatorReal); // calculating real numerator
        int realDenominator = denominatorReal * other.denominatorReal;                                         // calculating real denominator

        int imaginaryNumerator = (numeratorImaginary * other.denominatorImaginary) - (other.numeratorImaginary * denominatorImaginary); // calculating imaginary numerator
        int imaginaryDenominator = denominatorImaginary * other.denominatorImaginary;                                                   // calculating imaginary denominator

        return ComplexRational(realNumerator, realDenominator, imaginaryNumerator, imaginaryDenominator);
    }

    ComplexRational operator*(const ComplexRational& other)//for multiplication
    {
        int realNumerator = (numeratorReal * other.numeratorReal);       // calculating real numerator
        int realDenominator = (denominatorReal * other.denominatorReal); // calculating real denominator

        int imaginaryNumerator = (numeratorImaginary * other.numeratorImaginary);     // calculating imaginary numerator
        int imaginaryDenominator = denominatorImaginary * other.denominatorImaginary; // calculating imaginary denominator

        return ComplexRational(realNumerator, realDenominator, imaginaryNumerator, imaginaryDenominator);
    }
    void display(){// To diaply the outputs
        cout<< "numeratorReal : ("<<numeratorReal<<"/"<<denominatorReal<<") + ("<<numeratorImaginary<<"/"<<denominatorImaginary<<")i"<<endl;
    }
};
int main(){
    string choice2="Y";//For menu recusrrsion
    while (choice2=="Y"||choice2=="y"){
    choice2="n";
    int choice,nr1,ni1,dr1,di1,nr2,ni2,dr2,di2;
    cout<<"enter complex rational 1 "<<endl;
    cin>>nr1>>ni1>>dr1>>di1;
    ComplexRational r1(nr1,ni1,dr1,di1);//creating complex rational 1
    cout<<"enter complex rational 2 "<<endl;
    cin>>nr2>>ni2>>dr2>>di2;
    ComplexRational r2(nr2, ni2, dr2, di2); // creating complex rational 2
    if (dr1==0||dr2==0){// for checking if the denominators are not 0
        cout<<"error"<<endl;
    }else{
    cout<<"Choose 1.)add 2.)sub 3.)mult "<<endl;//menu
    cin>>choice;
    if (choice==1){//add
        ComplexRational add=r1+r2;
        add.display();
    }
    else  if (choice==2){//subtract
        ComplexRational sub=r1-r2;
        sub.display();
    }
    else  if (choice==3){//multiplication
        ComplexRational mult=r1*r2;
        mult.display();
    }
    else{//default if wrong input is given 
        cout<<"error"<<endl;
    }
    cout << "Do you want calculate again?(Y/N)" << endl;//for recusrsion
    cin >> choice2;
    }

    }
    return 0;
}