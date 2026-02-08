..l#include <iostream>
#include <iomanip>
using namespace std;

float calculateCommission(float sales, float commissionRate);
float calculatePay(float basePay, float commission);

int main(void) {
    float basePay, sales, commissionRate, commission, totalPay;
    string employeeName;

    cout << "\n\tCommission Pay Calculator" << endl;
    cout << "\nEnter Employee's first name: ";
    cin >> employeeName;
    cout << "Enter Base Pay: $";
    cin >> basePay;
    cout << "Enter Total Sales: $";
    cin >> sales;
    cout << "Enter Commission Rate (5, 7.5, 10...): ";
    cin >> commissionRate;

    commissionRate = commissionRate / 100;

    commission = calculateCommission(sales, commissionRate);
    totalPay = calculatePay(basePay, commission);

    cout << fixed << setprecision(2);
    cout << "\nEmployee name: " << employeeName << endl;
    cout << "\nBase Pay: $" << basePay << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Total Pay: $" << totalPay << endl;
    cout << "\n\tTHANK YOU VERY MUCH!!! CONTACT 000-000-0000 IF YOU THINK YOU DESERVE A RAISE" << endl;
    
    
    
    
    cout << "\n\n\n\n\tJust KIDDIN :) " << endl;
    return 0;
}

float calculateCommission(float sales, float commissionRate) {
    return sales * commissionRate;
}

float calculatePay(float basePay, float commission) {
    return basePay + commission;
}