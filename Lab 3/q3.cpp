#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a, b, c, d, num, den;
char tempch, ch, ch1;
do
{
    cout << "Enter operator: ";
    cin >> ch;
    cout << "Enter first fraction in the form of a/b:";
    cin >> a >> tempch >> b;
    cout << "Enter second fraction in the form of c/d:";
    cin >> c >> tempch >> d;
    switch (ch)
    {
    case '+':
        num = (a * d) + (b * c);
        den = b * d;
        break;
    case '-':
        num = (a * d) - (b * c);
        den = b * d;
        break;
    case '*':
        num = (a * c);
        den = b * d;
        break;
    case '/':
        num = a * d;
        den = b * c;
        break;
    }
    cout << a << "/" << b << ch << c << "/" << d << " ="<<num<<" /"<<den<<endl;
    cout<< "Enter 1 TO CONTINUE  ||  Enter 0 TO EXIT? " << endl;
    ch1 = getchar();
    cout << endl;
} while (ch1 == '1');
return 0;
}