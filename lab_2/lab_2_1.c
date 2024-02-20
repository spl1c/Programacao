#include <stdio.h>

int main() {
    int input_sec;
    // ask user to input a total number of seconds
    printf("Please enter a number of seconds: ");
    scanf("%d", &input_sec);

    // calculation of hours, minutes and seconds the seconds are equivalent to
    int hours = input_sec/3600; // the / division operator always rounds towards 0  
    int minutes =input_sec%3600/60; 
    int seconds = input_sec%60;
    // print out the result
    printf("\n%d seconds is equivalent to %d hours, %d minutes and %d seconds.\n", input_sec, hours, minutes, seconds);
}

