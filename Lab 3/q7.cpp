#include <iostream>
using namespace std;
class Movie
{
private:
    string movieTitle;
    int movieYear;
    string directorName;

public:
    void setTitle(string title);
    void setYear(int year);
    void setDirector(string director);
    void displayInfo();
};

void Movie::setTitle(string title)
{
    movieTitle = title;
}
void Movie::setYear(int year)
{
    movieYear = year;
}
void Movie::setDirector(string director)
{
    directorName = director;
}
void Movie::displayInfo()
{
    cout << "Movie Title :" << movieTitle << endl;
    cout << "Year : " << movieYear << endl;
    cout << "Director :" << directorName << endl;
}
int main()
{
    int year;
    Movie myFavoriteMovie;
    string temp;

    cout << "Enter movie title" << endl;
    cin >> temp;
    myFavoriteMovie.setTitle(temp);
    cout << "Enter movie Year" << endl;
    cin >> year;
    myFavoriteMovie.setYear(year);
    cout << "Enter director's name" << endl;
    cin >> temp;
    myFavoriteMovie.setDirector(temp);
    myFavoriteMovie.displayInfo();
    return 0;
}