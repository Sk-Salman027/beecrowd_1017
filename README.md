## Fuel Spent
### Problem statement
<p>Little John wants to calculate and show the amount of spent fuel liters on a trip, using a car that does 12 Km/L. For this, he would like you to help him through a simple program. To perform the calculation, you have to read spent time (in hours) and the same average speed (km/h). In this way, you can get distance and then, calculate how many liters would be needed. Show the value with three decimal places after the point.</p>

### Input
```c
int totalHours, perHourDistance;
double litters;
// take input
scanf("%d %d", &totalHours, &perHourDistance);
```
### Calculate total fuel in litters
```c
    litters = (totalHours * perHourDistance) / 12.0;
```
### Output
```c
printf("%.3lf\n", litters);
```