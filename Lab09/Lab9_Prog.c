#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main()
{
    // === 2 ===
    
    const int max_duration = 499;
    int call_duration, fee_value, over_minutes_value;

    printf("Call duration = ");
    scanf("%d", &call_duration);
    printf("Fee value = ");
    scanf("%d", &fee_value);
    printf("Over minutes value = ");
    scanf("%d", &over_minutes_value);

    printf("\nAmount of calls = ");
    if (call_duration <= max_duration) {
        printf("%d\n", call_duration * fee_value);
    } else {
        printf("%d\n", max_duration * fee_value + (call_duration - max_duration) * over_minutes_value);
    }
    
    // === 3 ===
    int num;
    scanf("%d", &num);

    char* str[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    printf("%s", str[num]);
    
    //

    return 0;
}
