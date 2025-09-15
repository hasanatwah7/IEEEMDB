//
// Created by Hasan Atwah on 9/15/2025.
//

#ifndef ENDUSER_H
#define ENDUSER_H
#include <string>
#include <vector>
#include "movie.h"
#include "user_review.h"
#include "watch_session.h"

using namespace std;

class enduser {
    private:
        string name;
        int age;
        vector<user_review> user_reviews;
        vector<watch_session> watch_sessions;
        vector<vector<movie>> playlists;
    public:
        enduser(string n, int a) : name(n), age(a) {}
        enduser() { }

        // Setters and Getters
        void setName(string n) { name = n; }
        void setAge(int a) { age = a; }
        string getName() { return name; }
        int getAge() { return age; }

        // Add a user review
        void addUserReview(user_review ur) { user_reviews.push_back(ur); }
        // Start a watch session
        void startWatchSession(watch_session s) { watch_sessions.push_back(s); }
        // Create a playlist
        void createPlaylist(vector<movie> p) { playlists.push_back(p); }
};

#endif //ENDUSER_H
