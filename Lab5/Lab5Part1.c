/* LAB 5  PART 1
   Function that will return median of two arrays
   By: Anastasia Dimov */


#include <stdio.h>
double median(int *, int *, int, int);


//main for testing the function median
int main() {
    int a[] = {22,24};
    int b[] = {3,10,17,18,20,50};

    printf("%lf", median(a, b, 2, 6));

    return 0;


}
double median(int a[], int b[], int sizeA, int sizeB){
    int finalSize, cntA = 0, cntB = 0;
    double medianAB; 

    finalSize = sizeA + sizeB;
    int finalArr[finalSize];

    // put all the a[] and b[] values into finalArr in ascending order
    for (int i = 0; i < finalSize; i++) {
        
        if (cntB > sizeB - 1 && cntA <= sizeA - 1) {
            finalArr[i] = a[cntA];
            cntA++;
        }
        else if (cntA > sizeA - 1 && cntB <= sizeB - 1) {
            finalArr[i] = b[cntB];
            cntB++;
        }
        else if (a[cntA] < b[cntB] && cntA <= sizeA - 1 && cntB <= sizeB - 1) {
            finalArr[i] = a[cntA];
            cntA++;
        }
        else if (b[cntB] < a[cntA] && cntB <= sizeB - 1 && cntA <= sizeA - 1) {
            finalArr[i] = b[cntB];
            cntB++;
        }
        
    }
    
    // if the size is even, the median is the average of two middle numbers
    if (finalSize % 2 == 0) {
        int temp; 
        temp = finalSize / 2;

        medianAB = (double)(finalArr[temp] + finalArr[temp - 1]) / 2;
    }

    // if size odd, median is middle number
    else if (finalSize % 2 != 0) {
        int temp; 
        temp = finalSize / 2;

        medianAB = (double)finalArr[temp];
    }

    return medianAB;


}


