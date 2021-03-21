#include <iostream>
using namespace std;
bool checkPrimeNumber(int);
int main()
{
    int n;
    int c = 0;
    char ch;
    string s = " ";
    int l, r;

    cout << "Enter L and R" << endl;
    cin >> l;
    cin >> r;
    for (n = l; n <= r; n++)
    {
        if (n == 1)
        {
            continue;
        }
        if (checkPrimeNumber(n))
        {
            string str = to_string(n);
            s = s.append(str);
            s = s + ",";
        }
    }
    for (int d = '0'; d <= '9'; d++)
    {
        int c1 = 0;
        for (int q = 0; q < s.length(); q++)
        {
            if (s[q] == d)
                c1++;
        }
        if (c1 >= c)
        {
        }
    }
    cout<<ch<< endl;
    cout<<"Prime number between 1 and 20 are" << s << endl;
    cout<<ch<<" occur maximum i.e " << c << " times among 0 to 9." << endl;
    return 0;
}

bool checkPrimeNumber(int n)
{
    bool isPrime = true;

    //0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
            }
            isPrime = false;
            break;
        }
    }
    return isPrime;
}