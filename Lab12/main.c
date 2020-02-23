#include <stdio.h>
#include <string.h>

#define N 10

int main() {

    char str[N];
    FILE *file;
    char file_name[] = "C:\\D\\Projects\\C++\\CLine\\Lab12\\";

    char t[10];
    scanf("%s", t);
    strcat(file_name, t);
//    char* t_str;
//    printf("Enter file name:\n");
//    scanf("%s", t_str);
//    file_name = strcat(file_name, t_str);


    file = fopen(file_name, "r");
    //fscanf(file, "%s", str);
    //printf("%s\n", str);

    int k = 1;
    while (fgets(str, N, file) != NULL) {
        if (k % 2 == 0) {
            printf("%s", str);
        }
        k++;
    }


    return 0;
}