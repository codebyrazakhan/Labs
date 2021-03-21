#include <iostream>
using namespace std;
void movieNameTime(char mname[], int = 90);
int main()
{
    using namespace std;
    void movieNameTime(char mname[], int = 90);
    char s[100];
    char s1[100];
    int t;
    cout << "Enter Movie Name" << endl;
    cin >> s;
    cout << "calling with string argument to movieNameTime function : ";
    movieNameTime(s);
    cout << "Enter Movie Name" << endl;
    cin >> s1;
    cout << "Enter Movie Time" << endl;
    cin >> t;
    cout << "THE MOVIE YOU ENTERED IS : " << s1 << endl;
    cout << "THE TIME IS : " << t << endl;
    movieNameTime(s1, t);
    system("pause");
    return 0;
}
void movieNameTime(char mname[], int runTime)
{
    cout << "Movie Name: " << mname << endl;
    cout << "Running time : " << runTime << endl;
}