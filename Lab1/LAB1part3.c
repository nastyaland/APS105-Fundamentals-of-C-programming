
#include <stdio.h>
#define inch 0.0254

int main(void) {


    double meters, totalInches, remainedInches, totalFeet, totalYard, remainingfeet, remaininginch;
    int yards, feet, inches;

    printf("Please provide a distance in meters:\n");
    scanf("%lf", &meters); 

    totalInches = meters/inch;
    totalFeet = totalInches/12;
    totalYard = totalFeet/3; 

    yards = (int)totalFeet/3;

    remainingfeet = totalInches - yards*12*3;
    feet = (int)remainingfeet/12; 

    remaininginch = remainingfeet - feet*12; 
    inches = (int)remaininginch; 

    remainedInches = remaininginch - inches; 





    

    printf("yards=%d feet=%d inches=%d remaining=%0.2lf", yards, feet, inches, remainedInches);
    

    

    return 0;


    



}