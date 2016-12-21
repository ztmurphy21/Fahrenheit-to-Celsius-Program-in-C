#include <stdio.h>
#include <stdlib.h>

#define LOWER 0 /*lower limit of the table*/
#define UPPER 300 /*higher limit of the table*/
#define STEP 20 /*step size of table*/

/*print Fahrenheit-Celsius table
for f= 0, 20...., 300*/
main()
{
    int fahrTemp;
    printf("Fahrenheit to Celsius Table.");

    for(fahrTemp = LOWER; fahrTemp <= UPPER; fahrTemp = fahrTemp + STEP){
        printf("%3d %6.1f\n", fahrTemp, (5.0/9.0) * (fahrTemp-32));
    }

}
