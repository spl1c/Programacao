 #include <stdio.h>
 
 int main() {

    long int number = 676767898790767;
    int div = 2;
    int rest;
    int d = 0;

    for(; div < number; div = div + 1)
    {
        rest = number % div;
        if (rest == 0){
            d++;
        }
    }
    if (d == 0){
        printf("%ld is a prime number.\n", number);
    } else {
        printf("%ld is not a prime number.\n", number);
    }
 }
 