// COMSC210 | lab 15 | Majd Bohsali
// IDE Used: Visual Studio Code

#include <iostream>
#include <vector> 
#include <iomanip>
#include <fstream>
#include <string>
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
    void setWriterName(string n)           { writerName = n; }

    void print() { 
        cout << "Movie: " << title << endl; 
        cout << setw(W15) << "Year Released: " << yearReleased << endl; 
        cout << setw(W15) << "Screenwriter: " << writerName << endl; 
    }
};

int main() { 
    vector<Movie> movies; 
    ifstream inputFile("input.txt"); 
    string title; // temporarly holds the title
    int year; // temporarly holds the year
    string screenWriter; // temporarly holds the screenWriter
    if(inputFile.good()) { 
        while (getline(inputFile, title)) { 
            //inputFile.ignore();
            inputFile >> year; 
            inputFile.ignore();
            getline(inputFile, screenWriter);
            Movie tempMovie; 
            tempMovie.setTitle(title);
            tempMovie.setYearReleased(year);
            tempMovie.setWriterName(screenWriter);
            movies.push_back(tempMovie);
        }
        inputFile.close();
    }
    else { 
        cout << "File not found" << endl; 
    }

    for (auto movie : movies) { 
        movie.print(); 
    }

    return 0; 
}