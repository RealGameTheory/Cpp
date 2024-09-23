#include <iostream>
using namespace std;
class student{
private:
    string Roll_no;
    string Name;
    string DOB;
    string Gender;
    string address;
    double sgpa[8]; 
    double cgpa;
public:
    student(string __Roll_no, string __Name, string __DOB, string __Gender, string __address, double __sgpa[8], double __cgpa){
        Roll_no=__Roll_no;
        Name=__Name;
        DOB=__DOB;
        Gender=__Gender;
        address=__address;
        sgpa[8]=__sgpa[8];
        cgpa=__cgpa;
    }
    void updateName(){
        cout<<"enter your new name"<<endl;
        cin>>Name;
    }
    void updateaddress(){
        cout<<"enter New address"<<endl;
        cin>>address;
    }
};