/* LAB 4  PART 2
   finding the Erdos-woods number from ranges of k and a
   By: Anastasia Dimov */


#include <stdio.h> 
int gcd(int, int);

// prompt user to choose values for k and a
int main(void) {
    int lowerK, upperK, lowerA, upperA, coprimes = 0, finalA = 0, finalK = 0;

    do {
        printf("Enter the number to start searching for k (> 2, inclusive): ");
        scanf("%d", &lowerK);

        
    } while (lowerK <= 2);

    do {
        printf("Enter the number to stop searching for k (inclusive): ");
        scanf("%d", &upperK);
    } while (upperK <= lowerK);

    do {
        printf("Enter the number to start searching for a (> 0, inclusive): ");
        scanf("%d", &lowerA);
    } while (lowerA <= 0);

    do {
        printf("Enter the number to stop searching for a (inclusive): ");
        scanf("%d", &upperA);
    } while (upperA <= lowerA);

    // loop goes through the first k value and checks if all the a values fit the requirements
    for (int k = lowerK; k <= upperK; k++) {
        printf("Trying k = %d...\n", k);
        coprimes = 0;

        for (int a = lowerA; a <= upperA - k; a++) {
            coprimes = 0;

            // checks if requirements are met
            for (int i = 1; i < k; i++) {
                if (gcd(a, a + i) > 1 || gcd(a + k, a + i) > 1) {
                    coprimes++;
                }
                else {
                    break;
                }
            }
            // if the amount of primes matches the number k then break the loop
            if (coprimes == k - 1) {
                finalA = a;
                break;
            }
        }
        if (coprimes == k - 1) {
            finalK = k;
            break;
        }
    }
    //prints the results of the search
    if (finalK == 0) {
        printf("Erdos-Woods number not found.");
    }

    else {
        printf("Erdos-Woods number: %d\n", finalK);
        printf("a = %d", finalA);

    }

    return 0;
}

// calculates the common prime number between two numbers
int gcd(int a, int b) {
    
    int temp = 0; 
    if (b > a) {
        temp = a;
        a = b; 
        b = temp;
    }

    if (a % b == 0) {
        return b;
    }
    else {
        return gcd(b, a % b);
    }

}