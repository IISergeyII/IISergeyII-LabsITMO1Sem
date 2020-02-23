#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Var 12

enum mounth {
    JANUARY,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER,
};

struct point {
    int x;
    int y;
};

struct line {
    struct point p1;
    struct point p2;
};

double measure(struct line l) {
    int x1, y1, x2, y2;
    x1 = l.p1.x;
    y1 = l.p1.y;
    x2 = l.p2.x;
    y2 = l.p2.y;

    double dist = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
    return dist;
}

struct ADSL {
    unsigned DSL: 1;
    unsigned PPP: 1;
    unsigned Link: 1;
};

union checker {
    unsigned number;
    struct ADSL Status;
};

int main()
{
    enum mounth m1;

    // === 1 ===
    m1 = JUNE;
    printf("June = %d\n", m1);

    // === 2 ===
    struct line l1;
    l1.p1.x = 1;
    l1.p1.y = 1;
    l1.p2.x = 3;
    l1.p2.y = 5;

    double len_l1 = measure(l1);
    printf("Lenght = %.2f\n", len_l1);

    // === 3 ===
    union checker chStatus;
    scanf("%x", &chStatus.number);
    printf("DSL = %d\n", chStatus.Status.DSL);
    printf("PPP = %d\n", chStatus.Status.PPP);
    printf("Link = %d\n", chStatus.Status.Link);


    return 0;
}
