 #include <stdio.h>
 
 int main() {

    int number = 15;
    int div = 2;
    int rest;
    int d;

    for(; div < number; div = div + 1)
    {
        rest = number % div;
        if (rest == 0){
            d++;
        }
    }
    if (d == 0){
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
 }
 