#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int p, q;
    cout << "Enter the two numbers" << endl;
    cin >> p >> q;

    cout<<"\n Before swapping"<<"\n P = "<<p<<"\n Q ="<<q<<endl;
    swap(p,q);
    cout<< "\n After swapping"<< "\n P = " << p << "\n Q = " << q << endl;
    return 0;
}
