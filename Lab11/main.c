// Laboratory work #11
// Var 12

#include "stdio.h"
#include "square.h"

int main() {

    struct Square sq;
    scanf("%lf %lf", &sq.x1, &sq.y1);
    scanf("%lf %lf", &sq.x2, &sq.y2);
    printf("Perimeter: %.2lf \n", square_perimeter(sq));
    printf("Area: %.2lf", square_area(sq));



    return 0;
}