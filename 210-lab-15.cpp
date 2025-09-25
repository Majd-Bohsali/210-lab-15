// COMSC210 | lab 15 | Majd Bohsali
// IDE Used: Visual Studio Code

#include <iostream>
#include <vector> 
#include <iomanip>
using namespace std;

const int W15 = 15; 

class Movie {
private:
    int yearReleased; 
    string title; 
    string writerName; 
public: 
    int getYearReleased()               { return yearReleased; }
    void setYearReleased(int year)      { yearReleased = year; }
    string getTitle()                   { return title; }
    void setTitle(string movieTitle)    { title = movieTitle; }
    string getWriterName()              { return writerName; }
    void setWriterName(int n)           { writerName = n; }

    void print() { 
        cout << "Movie: " << title << endl; 
        cout << setw(W15) << "Year Released: " << yearReleased << endl; 
        cout << setw(W15) << "Screenwriter: " << writerName << endl; 
    }
};

int main() { 
    return 0; 
}