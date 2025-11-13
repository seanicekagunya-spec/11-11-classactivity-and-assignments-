#include<iostream>
using namespace std;

int main()
{
    double buyingPrice, sellingPrice, profit;

    //Input from user
    cout << " Enter the buying price of the motor vehicle: ";
    cin >> buyingPrice;

    cout << " Enter the selling price of the motor vehicle: ";
    cin >> sellingPrice;

    //Compute the Profit
    profit = sellingPrice - buyingPrice;

    // Display result
    cout << "\n===============================" << endl;
    cout << "  MOTOR VEHICLE PROFIT REPORT  " << endl;
    cout << " ==============================" <<endl;

    if (profit > 0) {
        cout << " Profit made: Ksh " <<profit << endl;
    } else if ( profit < 0) {
        cout << " Loss incurred: Ksh " << -profit << endl;
    } else {
        cout << " No profit or loss was made. " << endl;
    }

    cout << "================================" << endl;

    return 0;
    
}

