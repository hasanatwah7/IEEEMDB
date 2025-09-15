#include <bits/stdc++.h>
#include "movie.h"
#include "user_review.h"
#include "admin.h"
#include "enduser.h"
#include "watch_session.h"


#define ll long long

using namespace std;

// Function to search for a movie by title prefix or a casting member
movie prefsrch(string s, movie mv) {
    size_t pos = mv.getTitle().find(s);
    if (pos == 0) {
        return mv;
    }
    else if (mv.getCasting().find(s) != mv.getCasting().end()) {
        return mv;
    }
}

int main() {

    // Create the admin
    admin admin1("Admin One", 35);

    // Create some movies
    set<string> casting_fight_club = {"Brad Pitt", "Edward Norton", "Helena Bonham Carter"};
    movie fight_club("Fight Club", "Drama", casting_fight_club, 1999, 139);
    set<string> casting_inception = {"Leonardo DiCaprio", "Joseph Gordon-Levitt", "Ellen Page"};
    movie inception("Inception", "Sci-Fi", casting_inception, 2010, 148);

    // Add movies to the database
    admin1.addmovie(fight_club);
    admin1.addmovie(inception);


    // Display movie details
    fight_club.displayInfo();

    // Create some end users
    enduser user1("User One", 28);
    enduser user2("User Two", 16);

    // User1 watches Fight Club
    watch_session session1(fight_club, 139);
    user1.startWatchSession(session1);

    // User1 reviews Fight Club
    user_review review1(fight_club, 9.5);
    review1.setReview("An amazing movie with a mind-bending plot!");
    user1.addUserReview(review1);

    // User2 watches Inception
    watch_session session2(inception, 74); // Watched half
    user_review review2(inception, 5.5);
    review2.setReview("Didn't like it much, found it confusing. I did't even finish it.");
    user2.addUserReview(review2);

    // Search for movies by title prefix or casting member
    string search_str = "Leonardo DiCaprio";
    string search_str2 = "Fight";
    movie found_movie1 = prefsrch(search_str, inception);   // returns inception
    movie found_movie2 = prefsrch(search_str2, fight_club); // returns fight_club



    return 0;
}