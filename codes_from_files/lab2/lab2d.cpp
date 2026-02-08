#include <iostream>
#include <iomanip>
using namespace std;

const float PI = 3.14159; //global variable.

//function prototype (signature)
float calculateTax(float total, float taxRate);

int main(void) {
    float totalBill;
    float taxRate;
    float taxAmount;
    string Server;
    cout<< "Enter Server's name: ";
    cin>> Server;
    cout<< "Enter the Total: ";
    cin>> totalBill;
    cout<< "Enter the tax Rate(8.5,9.7,....): ";
    cin>> taxRate;
    
    taxRate = taxRate / 100;
    taxAmount = calculateTax(totalBill, taxRate);
    cout << fixed << setprecision(2);
    cout << "\nServer name:\t" << Server << endl;
    cout << "\nAstha's Momo" <<endl;
    cout << "\nTotal Bill:\t $" << totalBill << endl;
    cout << "State Tax:\t $" << taxAmount <<endl;
    cout << "Amount due:\t $" << totalBill + taxAmount <<endl;
    
    return 0;

}

//funtion implementation
float calculateTax(float total, float taxRate) {
    //tax must be decimalized
    return (total * taxRate);
}
float amountDue(float total, float taxRate){
    float ans= total + total * taxRate;
    return ans;


}
