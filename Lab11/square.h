#ifndef TEST1_SQUARE_H
#define TEST1_SQUARE_H

#include <math.h>

struct Square {
    double x1, y1;
    double x2, y2;
};

double square_perimeter(struct Square sq);
double square_area(struct Square sq);

#endif //TEST1_SQUARE_H
