#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() { // starting angle, inicial velocity, ceiling height
    // defining the variables we need
    double a = 20;
    double v = 90.0824;
    double h = 2.5;
    double d; // distance
    double g = 9.8; // gravity acceleration
    double max_h;

    // convert angle from degree to radiant
    a = a * ( 3.14 / 180.0 );

    // calculate distance
    d = pow(v, 2)*sin(2*a)/g;
    // calculate max height
    max_h = pow(v, 2)*sin(a)/2*g;

    // output the results
    printf("The basket must be at %f meters from the hand.\n", d);
    if (h < max_h) {
        printf("The projectile will hit the ceiling.\n");
    }
    else {
        printf("The projectile will not hit the ceiling.");
    }
}