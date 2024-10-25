
#include <stdio.h>
#define HST 0.13


int main(void) {

    int days, totalFreeDays, totalDays;
    float rate, totalRate; 

    


    printf("Enter the daily rate:"); 
    scanf("%f", &rate);

    printf("Enter the rental period (in days):");
    scanf("%d", &days);

    totalFreeDays = days/4; 
    totalDays = days - totalFreeDays;

    totalRate = rate*totalDays*(1+HST);



    printf("Your total free days in this rental is:%d\n", totalFreeDays);
    printf("Your total charge including taxes is:%0.2f\n", totalRate); 



    

    
    return 0;

}
