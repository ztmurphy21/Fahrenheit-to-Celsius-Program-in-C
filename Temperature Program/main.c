#include <stdio.h>
#include <stdlib.h>

/*print Fahrenheit-Celsius table
for f= 0, 20...., 300*/
main()
{
    int fahrTemp;

    for(fahrTemp = 0; fahrTemp <= 300; fahrTemp = fahr + 20)
        printf("%3d %6.1f\n", fahrTemp, (5.0/9.0) * (fahrTemp-32));

}
