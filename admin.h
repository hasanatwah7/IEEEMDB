//
// Created by Hasan Atwah on 9/15/2025.
//

#ifndef ADMIN_H
#define ADMIN_H
#include <string>
#include <vector>
#include "movie.h"

using namespace std;

class admin {
    private:
        string name;
        int age;
        vector<movie> movies;
    public:
        admin(string n, int a) : name(n), age(a) {}
        admin() {}

        // Setters and Getters
        void setname(string u) { name = u; }
        void setage(int a) { age = a; }
        string getname() { return name; }
        int getage() { return age; }

        // Add a movie to the DB
        void addmovie(movie m) { movies.push_back(m); }
};

#endif //ADMIN_H
