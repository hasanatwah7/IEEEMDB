## IEEEMDB
Online Movies platform called IEEEMDB.

A smart system that helps people discover movies, track what they've watched, and share their thoughts with friends🌹.

## Installation

To build this project, you need a C++ compiler (like [MinGW-w64](https://www.mingw-w64.org/) for Windows), `CMake` and `Git`.

1. First of all Clone the  files:
```bash

git clone "git-hub url"
```


2. Open the `main.cpp` with any IDE (e.g. CLion) with a C++ Compiler Installed.


3. Build The files.


4. Hit the run button.


5. Enjoyyy!


## Usage

```c++
// Create the admin
    admin admin1("Admin One", 35);
// Create a movies
    set<string> casting_fight_club = {"Brad Pitt", "Edward Norton", "Helena Bonham Carter"};
    movie fight_club("Fight Club", "Drama", casting_fight_club, 1999, 139);
    
// Add it to the database
    admin1.addmovie(fight_club);

// Create an end user
    enduser user1("User One", 28);
    
// User1 watches Fight Club
    watch_session session1(fight_club, 139);
    user1.startWatchSession(session1);
    
// User1 reviews Fight Club
    user_review review1(fight_club, 9.5);
    review1.setReview("An amazing movie with a mind-bending plot!");
    user1.addUserReview(review1);
    
// Display movie details
    fight_club.displayInfo();    
    
// Search for movies by title prefix or casting member
    movie found_movie2 = prefsrch("Brad Pitt", fight_club); // returns fight_club
    movie found_movie1 = prefsrch("Fight", fight_club); // returns fight_club
    
```


## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
Do what the fuck you want public license.


.