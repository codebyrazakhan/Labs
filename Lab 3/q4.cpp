#include <iostream>
using namespace std;
class rectangle
{
private:
    float length;
    float width;

public:
    float perimeter()
    {
        return 2 * (length + width);
    }
    float area()
    {
        return length * width;
    }
    void getdata(float p, float q)
    {
        length = p;
        width = q;
    }
    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Perimeter = " << perimeter() << endl;
        cout << "Area = " << area() << endl;
    }
};
int main()
{
    rectangle r1;
    float l, w;
    cout << "Enter length : ";
    cin >> l;
    cout << "Enter Width : ";
    cin >> w;
    r1.getdata(l, w);
    r1.perimeter();
    r1.area();
    r1.display();
    return 0;
};