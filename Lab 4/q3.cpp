#include <iostream>
using namespace std;
class DB;
class DM
{
public:
    float meter;
    float cm;
    void getData()
    {
        cout << "Enter distance in meters: " << endl;
        cin >> meter;
    }
    friend void add(DM, DB);
};
class DB
{
public:
    float feet, inch;
    void getData()
    {
        cout << "Enter distance in feet: " << endl;
        cin >> feet;
    }
    friend void add(DM, DB);
};
void add(DM ob1, DB ob2)
{
    float temp1;
    float temp2;
    ob1.cm = ob2.feet * 30.48;
    temp1 = ob1.cm;
    cout << "Total Distance of feet into centimeters is:" << temp1 << endl;
    ob2.inch = ob1.meter * 39.37;
    temp2 = ob2.inch;
    cout << "Total Distance of meters into inches is:" << temp2 << endl;
}
int main()
{
    DM o1;
    DB o2;
    o1.getData();
    o2.getData();
    add(o1, o2);
}