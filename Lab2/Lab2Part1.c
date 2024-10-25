/* LAB 2  PART 1
   Monthly Payment Calculation given certain parameters
   By: Anastasia Dimov */


#include <stdio.h>
#include <math.h>

int main(void) {

    int purchaceCost, downPayment, term; 
    double ratePercent, rateDecimal, monthlyPayment;

    purchaceCost = 0;
    downPayment = 0; 
    term = 0; 
    ratePercent = 0;
    rateDecimal = 0; 
    monthlyPayment = 0;
    // initializing each variable to zero (to not create any possible mistakes)

    printf("Enter the purchase price P:");
    scanf("%d", &purchaceCost); 

    printf("Enter the amount of down payement D:");
    scanf("%d", &downPayment); 

    printf("Enter the finance term (in months):");
    scanf("%d", &term); 

    printf("Enter the monthly interest rate (in percent):\n");
    scanf("%lf", &ratePercent); 
    // gets all the necessary values for the payement calculations


    rateDecimal = ratePercent/100;  // converting to decimal


    monthlyPayment = ((purchaceCost - downPayment)*rateDecimal*pow((1 + rateDecimal), term))/(pow((1 + rateDecimal), term) - 1);
    // calculating monthlyPayment using the provided formula


    printf("The monthly payement is: %0.2lf", monthlyPayment);



    return 0; 

}
