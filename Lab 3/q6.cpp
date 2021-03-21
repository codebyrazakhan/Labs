#include <iostream>
using namespace std;
class shirt
{
public:
    int collarSize;
    float sleeveLength;
    shirt()
    {
        collarSize = 0;
        sleeveLength = 0.0;
    }
};
class pants
{
public:
    float waistSize;
    float inSeam;
    pants()
    {
        waistSize = 0;
        inSeam = 0.0;
    }
};

void displayClothingFacts(shirt shirt_object)
{
    cout << "SHIRT OBJECT CALLED:" << endl;
    cout << "The collar Size is: " << shirt_object.collarSize << endl;
    cout << "The sleeve length is: " << shirt_object.sleeveLength << endl;
}
void displayClothingFacts(pants pant_object)
{
    cout << "\nPANTS OBJECT CALLED:" << endl;
    cout << "The waist size is: " << pant_object.waistSize << endl;
    cout << "The inseam is: " << pant_object.inSeam << endl;
}

int main()
{
    shirt shirt_object;
    pants pant_object;
    cout << "SHIRT OBJECT CALLED:" << endl;
    cout << "The collar Size is: " << shirt_object.collarSize << endl;
    cout << "The sleeve length is:" << shirt_object.sleeveLength << endl;
    cout << "\nPANTS OBJECT CALLED:" << endl;
    cout << "The waist size is: " << pant_object.waistSize << endl;
    cout << "The inseam is: " << pant_object.inSeam << endl;

    cout << "Enter Shirt's Collar Size and Sleeve Length:";
    cin >> shirt_object.collarSize >> shirt_object.sleeveLength;
    cout << "Enter Pant's Waist Size and InSeam:";
    cin >> pant_object.waistSize >> pant_object.inSeam;
    displayClothingFacts(shirt_object);
    displayClothingFacts(pant_object);
    return 1;
}