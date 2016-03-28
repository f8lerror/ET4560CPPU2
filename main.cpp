#include <iostream>
#include <iomanip>

using namespace std;
// Programming challenge 2
/*
int main ()
{
    const int CLASS_A = 15;
    const int CLASS_B = 12;
    const int CLASS_C = 9;

    int aclass;
    int bclass;
    int cclass;

    double a_class;
    double b_class;
    double c_class;

    cout << "How many Class A seats were sold: " << endl;
    cin >> aclass;

    cout << "How many Class B seats were sold: " << endl;
    cin >> bclass;

    cout << "How many Class C seats were sold: " << endl;
    cin >> cclass;

    a_class = aclass * CLASS_A;
    b_class = bclass * CLASS_B;
    c_class = cclass * CLASS_C;

    cout << "Class A Seats: $" << fixed << setprecision(2) << a_class << endl;
    cout << "Class B Seats: $" << fixed << setprecision(2) << b_class << endl;
    cout << "Class C Seats: $" << fixed << setprecision(2) << c_class << endl;

    cin.get();
    return 0;
}*/

// Programming challenge 6
/*
int main()
{
    const int numToEnter = 5;
    int sum = 0;
    int average = 0;
    int input;

    for (int i = 0; i != numToEnter; ++i)
    {
        cout << "Enter a number: ";
        cin >> input;

        sum += input;
    }
    average = sum / numToEnter;
    cout << "The average is: " << average << endl;

    return 0;
}*/

int main ()
{
    /*
     * Amount joe paid for stock $32.87 each @ 100 shares
     * amount of commission joe paid his broker when he bought the stock 2% of amount paid
     * amount joe sold stock for $33.92 @ 100 shares
     * amount of commission joe paid his broker when he sold the stock 2% of amount received
     * amount of profit or loss joe had after selling his stock and paying both commissions to the broker
     */

    const int SHARES = 100;
    const double PURCHASE = 32.87;
    const double SOLD = 33.92;

    double total_purchase;
    double total_sold;
    double commission_purchase;
    double commission_sold;
    double profit_loss;
    double comm_diff;
    double total_profit;

    total_purchase = PURCHASE * SHARES;
    total_sold = SOLD * SHARES;

    commission_purchase = total_purchase * 0.2;
    commission_sold = total_sold * 0.2;
    comm_diff = commission_sold - commission_purchase;

    profit_loss = total_sold - total_purchase;
    total_profit = profit_loss - comm_diff;

    cout << "Joe paid: $" << total_purchase << " for 100 shares." << endl;
    cout << "Commission paid to broker during purchase of shares: $" << commission_purchase << endl;
    cout << "Joe Sold 100 shares of stock for: $" << total_sold << endl;
    cout << "Commission paid to broker when shares were sold: $" << commission_sold << endl;
    cout << "Joe made: $" << profit_loss << " by selling his stocks" << endl;
    cout << "Joe paid a commission difference of: $" << comm_diff << endl;
    cout << "Joe made a total profit of: $" << total_profit << endl;


    return 0;
}