#include <stdio.h>
#include <stdlib.h>


struct timestamp { // create the struct of a timestamp
    int hours;
    int minutes;
    int seconds;
    int total_seconds;
};



int main() { 
    struct timestamp t1; // declare first timestamp object
    struct timestamp t2; // declare second timestamp object
    printf("Please enter the hours, minutes and seconds for timestamps 1 and 2.\n");
    printf("Timestamp 1.\n");
    printf("Hours: ");
    if (scanf("%d", &t1.hours) > 23 || scanf("%d", &t1.hours) < 0) {
        printf("Error: Invalid input, hours must be between 0 and 23.\n");
        exit(1);
    }
    printf("Minutes: ");
    if (scanf("%d", &t1.minutes) > 59 || scanf("%d", &t1.minutes) < 0) {
        printf("Error: Invalid input, minutes must be between 0 and 59.\n");
        exit(1);
    }
    printf("Seconds: ");
    if (scanf("%d", &t1.seconds) > 59 || scanf("%d", &t1.seconds) < 0) {
        printf("Error: Invalid input, seconds must be between 0 and 59.\n");
        exit(1);
    }

    printf("Now timestamp 2.");
    printf("Hours: ");
    if (scanf("%d", &t2.hours) > 23 || scanf("%d", &t2.hours) < 0) {
        printf("Error: Invalid input, hours must be between 0 and 23.\n");
        exit(1);
    }
    printf("Minutes: ");
    if (scanf("%d", &t2.minutes) > 59 || scanf("%d", &t2.minutes) < 0) {
        printf("Error: Invalid input, minutes must be between 0 and 59.\n");
        exit(1);
    }
    printf("Seconds: ");
    if (scanf("%d", &t2.seconds) > 59 || scanf("%d", &t2.seconds) < 0) {
        printf("Error: Invalid input, seconds must be between 0 and 59.\n");
        exit(1);
    }

    // Now, convert both timestamps into seconds
    t1.total_seconds = t1.hours*3600+t1.minutes*60+t1.seconds;
    t2.total_seconds = t2.hours*3600+t2.minutes*60+t2.seconds;

    // subtract time_1 from time_2
    // and we can also use the timestamp struct for the difference as well
    struct timestamp difference;
    difference.total_seconds = abs(t1.total_seconds-t2.total_seconds);

    // Finally, convert the difference back into a timestamp
    // We can do this using the code form the previous exercise

    difference.hours = difference.total_seconds/3600;
    difference.minutes = difference.total_seconds%3600/60; 
    difference.seconds = difference.total_seconds%60;
    // print out the result
    printf("The difference between the two timestamps is %d hours, %d minutes, %d seconds.", difference.hours, difference.minutes, difference.seconds);
}