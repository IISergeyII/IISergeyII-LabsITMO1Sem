// Laboratory work 10
// Var 12

#include <stdio.h>
#include <malloc.h>
#include <math.h>

struct Point
{
    float x;
    float y;
};

float**  getMatrixOfDistances(struct Point* points, int n)
{
    float** pointerToMatrix = (float**)malloc(n * sizeof(int*));
    int lineItr;
    float dist;

    for (int i = 0; i < n; ++i)
    {
        lineItr = 0;
        pointerToMatrix[i] = (float*)malloc((n-1) * sizeof(float*));
        for (int j = 0; j < n; ++j)
        {
            if (i == j) continue;
            dist = sqrt(pow((points[i].x - points[j].x), 2) + pow((points[i].y - points[j].y), 2));
            pointerToMatrix[i][lineItr] = dist;
            lineItr++;
        }
    }
    return pointerToMatrix;
}

char* divideNumber(int n)
{
    char* divisionOfNumber = (char*)malloc(n * sizeof(char));
    int itr = 0;

    while (n > 0)
    {
        divisionOfNumber[itr++]  = (n % 10);
        n /= 10;
    }

    return divisionOfNumber;
}

size_t findLengthOfNumber(int n)
{
    int len = 0;

     for (len = 0; n > 0; n /= 10, len++)
         ;

//    while(n > 0)
//    {
//        len++;
//        n /= 10;
//    }

    return len;
}

int main() {

    /*
    // Task #2
    // Get matrix of distances between n points
    int n;
    printf("Enter number of points: ");
    scanf("%d", &n);

    //struct Point points[1000];
    struct Point* points = (struct Points*)malloc(n * sizeof(struct Points*));
    for (int i = 0; i < n; ++i) {
        printf("Enter %d point coordinates:", (i + 1));
        scanf("%f %f", &points[i].x, &points[i].y);
    }

    float **matrix = getMatrixOfDistances(points, n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n - 1; ++j)
        {
            //printf("\n i = %d, j = %d\n", i, j);
            printf("%5.2f", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n \n");
    */

    // Task #3
    // Make an array elements of which are digits of number n
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    //char* arrayOfDigits = (char*)malloc(n * sizeof(char));
    char* arrayOfDigits = divideNumber(n);
    size_t len = findLengthOfNumber(n);

    for (size_t i = 0; i < len; ++i)
    {
        printf("Digit on %d place: %d\n", i,  arrayOfDigits[i]);
    }

    return 0;
}
