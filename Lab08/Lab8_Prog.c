#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    // === 1 ===
    char str1[100];
    char str2[100];
    char res_str[200];
    scanf("%s %s", str1, str2);


    //strcat(str1, str2);
    //printf("%s\n", str1);

    /*
    // === 2 ===
    int f1 = strcmp(str1, str2);
    if (f1 == 0) {
        printf("Equal\n");
    }
    else if (f1 > 0) {
        printf("First is bigger\n");
    }
    else {
        printf("Second is bigger\n");
    }

    // === 3 ===
    strcpy(str1, str2);

    // === 4 ===
    printf("Len str1 = %d\n", strlen(str1));

    */
    // === 5 ===
    printf("Amount = %d", strcspn(str1, str2) + 1);


    return 0;
}
