#include <stdio.h>
#include <math.h>


int main()
{
    float v; // inicial velocity
    float max_h; // maximum height
    float h;
    float ang;
    float g = 9.8;
    printf("Please enter the inicial velocity(m/s) and the ceiling height (m) with a space in between: ");
    scanf("%f %f", &v, &h);

    for (ang = 1, h>= max_h, ang++)
    {
        max_h = pow(v, 2)*sin(a)/2*g;
    }
    angle_sin = sqrt(2*g*h)/v;
    angle = asin(angle_sin);
    angle = angle * ( 180.0 / 3.14 );

    printf("%f", angle);


}