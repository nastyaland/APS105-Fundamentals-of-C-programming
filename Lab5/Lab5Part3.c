/* LAB 5  PART 3
   Function that finds the longest sequence of increasing numbers in both array
   By: Anastasia Dimov */
   
#include <stdio.h>
void longestMutualSequence(int [], int [], int, int);

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int arr2[6] = {4,5,6,1,2,3};
    longestMutualSequence(arr, arr2, 6, 6);

    return 0;
}

void longestMutualSequence(int firstArr[], int secondArr[], int sizeA, int sizeB){
    int amount, cnt = 0, row = 0, col = 0, cnt1 = 0, zeroCnt = 0;
    
    //gets size for the 2D array
    if (sizeA > sizeB) {
        amount = sizeA;
    }
    else {
        amount = sizeB;
    }

    int seqArr[amount][amount];
    int numArr[amount];

    //fill the 2d array with zeros
    for (int i = 0; i < amount; i++) {
        for (int j = 0; j < amount; j++) {
            seqArr[i][j] = 0;
        }
    }

    // appending same sequences to 2D array
    for (int s = 0; s < sizeA; s++) {
        for (int v = 0; v < sizeB; v++) {
            if (firstArr[s] == secondArr[v] && cnt == 0) {
                seqArr[row][col] = firstArr[s];
                col++;
                cnt = 1;
                cnt1++;
                
            }
            else if (cnt == 1 && firstArr[s + cnt1] == secondArr[v])  {
                seqArr[row][col] = secondArr[v];
                col++;
                cnt1++;
            }
            
           

        }

        row++;
        cnt = 0;
        col = 0;
        cnt1 = 0;
    }

    //count the length of each sequence
    for (int o = 0; o < amount; o++) {
        for (int d = 0; d < amount; d++) {
            if (seqArr[o][d] != 0) {
                zeroCnt++;
            }
        }
        numArr[o] = zeroCnt;
        zeroCnt = 0;
    }
    int temp = 0, temp2 = 0;

    // finds where the longest sequence is
    for (int r = 0; r < amount; r++) {
        if (numArr[r] > temp) {
            temp = numArr[r];
            temp2 = r;
        }
    }

    printf("Longest Common Sequence is");

    for (int f = 0; f < temp - 1; f++) {
        printf(" %d,", seqArr[temp2][f]);
    }
    printf(" %d.", seqArr[temp2][temp - 1]);



        
    



    for (int k = 0; k < amount; k++) {
        printf("{");
        for (int l = 0; l < amount; l++) {
            printf("%d, ", seqArr[k][l]);
        }
        printf("}");
    }
    printf("\n"); 

    for (int y = 0; y < amount; y++) {
        printf("%d,", numArr[y]);
    }
    printf("%d, %d", temp, temp2);

    return;
}



