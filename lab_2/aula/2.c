#include <stdio.h>
#include <math.h>


int main()
{
    float v; // inicial velocity
    float max_h; // maximum height
    float h = 0;
    float rad;
    float ang = 0;
    float g = 9.8;

    printf("Please enter the inicial velocity(m/s) and the ceiling height (m) with a space in between: ");
    scanf("%f %f", &v, &max_h);

    while (max_h>h) // while loop that runs until the height
    {
        rad = ang * ( 3.14 / 180.0 );
        h = pow(v, 2)*pow(sin(rad), 2)/2*g;
        ang++;
    }

    printf("0.000 %.3f", ang);


}