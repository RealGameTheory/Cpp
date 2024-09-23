#include<iostream>
using namespace std;
 class weatherstation{
    private:
    string weatherstationname;
    int weatherstationcode;
    int celecius;
    int fahrenheit;
    string time;
    int humidity;
    string city;
    string region;
    string state;
    string country;
    public:
    weatherstation(string __weatherstationname, int __weatherstationcode, int __celecius,string __time, int __humidity, string __city, string __region, string __state, string __country){
        weatherstationname=__weatherstationname;
        weatherstationcode=__weatherstationcode;
        celecius=__celecius;
        time=__time;
        humidity=__humidity;
        city=__city;
        region=__region;
        state=__state;
        country=__country;
    }
    float farenheitcalc(){
        fahrenheit=(celecius*9/5)+32;
        return 0; 
    }
    void Display(){
        cout<<"Weatherstaion name is: "<<weatherstationname<<endl;
        cout << "Weatherstaion code is: " << weatherstationcode << endl;
        cout << "celecius: " << celecius << endl;
        cout << "Fahrenheit: " << fahrenheit << endl;
        cout << "Time: " << time<< endl;
        cout << "Humidity: " << humidity<< endl;
        cout << "City: " << city << endl;
        cout << "Region: " << region << endl;
        cout << "State: " << state << endl;
        cout << "Country: " << country << endl;
    }
 };
 int main(){
    weatherstation Weather1("Alpha-04",04,45,"15:00",23,"coimbatore","tirpur","Tamil Nadu","India");
    Weather1.farenheitcalc();
    Weather1.Display();
    return 0;
 }