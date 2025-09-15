//
// Created by Hasan Atwah on 9/15/2025.
//

#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

class movie {
    private:
        string title;
        string genre;
        set<string> casting;
        int releaseYear;
        double duaration; // in minutes
    public:
        // Constructors
        movie(string t, string g, set<string> c, int rY, double d)
            : title(t), genre(g), casting(c), releaseYear(rY), duaration(d) {}

        movie() { }

        // Setters and Getters
        void setTitle(string t) { title = t; }
        void setGenre(string g) { genre = g; }
        void setCasting(set<string> c) { casting = c; }
        void setReleaseYear(int rY) { releaseYear = rY; }
        void setDuation(double d) { duaration = d; }
        string getTitle() { return title; }
        string getGenre() { return genre; }
        set<string> getCasting() { return casting; }
        int getReleaseYear() { return releaseYear; }
        double getDuation() { return duaration; }

        //display movie info
        void displayInfo() {
            cout << "Title: " << title << endl;
            cout << "Genre: " << genre << endl;
            cout << "Casting: ";
            for (const auto& actor : casting) {
                cout << actor << ", ";
            }
            cout << endl;
            cout << "Release Year: " << releaseYear << endl;
            cout << "Duration: " << duaration << " minutes" << endl;
        }
};

#endif //MOVIE_H
