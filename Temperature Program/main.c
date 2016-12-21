#include <stdio.h>
#include <stdlib.h>

/*print Fahrenheit-Celsius table
for f= 0, 20...., 300*/
main()
{
    int fahrTemp, celTemp;

    /* lower limit of table*/
    int lower = 0;

    /*upper limit of table*/
    int upper = 300;

    /* step size for table*/
    int step = 20;

    fahrTemp = lower;
    printf("Fahrenheit-Celsius Table\n");

    while (fahrTemp <= upper){
            celTemp = 5 * (fahrTemp-32) / 9;
    printf("%3d %6d\n", fahrTemp, celTemp);
    fahrTemp = fahrTemp + step;

    }

}
