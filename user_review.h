//
// Created by Hasan Atwah on 9/15/2025.
//

#ifndef USER_REVIEW_H
#define USER_REVIEW_H
#include "movie.h"

class user_review {
    private:
        movie mv;
        string review;
        double rating; // out of 10
    public:
        user_review(movie m, double r) : mv(m), rating(r) {}
        user_review() {}

        void setMovie(movie m) { mv = m; }
        void setRating(double r) { rating = r; }
        void setReview(string rev) { review = rev; }
        movie getMovie() { return mv; }
        double getRating() { return rating; }
        string getReview() { return review; }
};


#endif //USER_REVIEW_H
