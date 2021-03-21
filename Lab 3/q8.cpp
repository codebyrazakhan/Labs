#include <iostream>
using namespace std;
class Order
{
private:
    int tableNumber;
    string serverName;
    int patrons;
    static double minimumCharge;

public:
    double static getMinimumCharge();
};
double Order::minimumCharge = 4.75;
double Order ::getMinimumCharge()
{
    return minimumCharge;
}
int main()
{
    cout << "THE MINIMUM CHARGE OF THE TABLE IS : $";
    cout << Order::getMinimumCharge();
    return 0;
}
