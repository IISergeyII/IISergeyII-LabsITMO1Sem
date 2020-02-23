#include <math.h>
#include "square.h"


double square_perimeter(struct Square sq) {
    double perimeter = 2 * (fabs(sq.x2 - sq.x1) + fabs(sq.y2 - sq.y1));
    return perimeter;
}

double square_area(struct Square sq) {
    double area = fabs((sq.x2 - sq.x1) * (sq.y2 - sq.y1));
    return area;
}