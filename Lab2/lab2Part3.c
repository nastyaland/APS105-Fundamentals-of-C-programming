/* LAB 2  PART 3
   Trip Time, calculates the arrival time when given the current time and trip length
   By: Anastasia Dimov */

#include <stdio.h>
#include <math.h>



int main(void) {

    const int HOURSINDAY = 24;
    const int MINUTEINHOUR = 60;

    int hour, minute, tripHour, arrivalHour;
    double tripTime, tripMinute, arrivalMinute;
    

    hour = 0;
    minute = 0;
    tripTime = 0;
    // initializing the variables and setting them to zero

    printf("Enter current time: ");
    scanf("%d%d", &hour, &minute); 

    printf("Enter trip time: \n");
    scanf("%lf", &tripTime); 

    tripHour = (int)tripTime; 
    tripMinute = tripTime - tripHour; 
    //breaking down the trip into the whole numbers (total trip hours) and decimals (total trip minutes)


    if ((hour + tripHour) >= HOURSINDAY) {
        arrivalHour = (hour + tripHour) - HOURSINDAY; 
    }
    else {
        arrivalHour = hour + tripHour;
    }
    //makes sure the hour reading is reset after 23hr, so 24 = 0

    if ((minute + tripMinute * MINUTEINHOUR) >= MINUTEINHOUR) {
        arrivalMinute = (minute + tripMinute * MINUTEINHOUR) - MINUTEINHOUR;
        arrivalHour ++;
    }
    else {
        arrivalMinute = minute + tripMinute * MINUTEINHOUR;
    }
    // makes sure the minute reading is reset after 59, so 60 = 0 -> adds 1hr to hour reading

    printf("Current time is %02d:%02d\n", hour, minute);
    
    if ((hour + tripHour) >= HOURSINDAY) {
        printf("Arrival Time is next day %02d:%02d\n", arrivalHour, (int)arrivalMinute);

    }
    else {
        printf("Arrival Time is same day %02d:%02d", arrivalHour, (int)arrivalMinute);
    }
    //prints different messages when the trip ends on the next day





    return 0;
}

