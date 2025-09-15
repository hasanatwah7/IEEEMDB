//
// Created by Hasan Atwah on 9/15/2025.
//

#ifndef WATCH_SESSION_H
#define WATCH_SESSION_H
#include "movie.h"

class watch_session {
    private:
        movie mv;
        double watchDuration; // in minutes
    public:
        watch_session(movie m, double wD) : mv(m), watchDuration(wD) {}
        watch_session() {}

        void setMovie(movie m) { mv = m; }
        void setWatchDuration(double wD) { watchDuration = wD; }
        movie getMovie() { return mv; }
        double getWatchDuration() { return watchDuration; }
};

#endif //WATCH_SESSION_H
