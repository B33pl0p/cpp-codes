#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(void)
{
    float F, C;
    cout << "Fahrenheit to Celsius Converter\n" <<endl;
    
    cout << "Enter a temperature in Fahrenheit: ";
    cin>> F;
    
    C = (F-32) * 5 / 9 ;
    
    cout << fixed << setprecision(1);
    cout << "\nAnswer in Celsius: " << C <<endl;



    return 0;
    
}