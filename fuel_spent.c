#include <stdio.h>

int main()
{
    // variable declaration
    int totalHours, perHourDistance;
    double litters;
    // take input
    scanf("%d %d", &totalHours, &perHourDistance);
    // calculate Total fue
    litters = (totalHours * perHourDistance) / 12.0;
    // print the result
    printf("%.3lf\n", litters);

    return 0;
}