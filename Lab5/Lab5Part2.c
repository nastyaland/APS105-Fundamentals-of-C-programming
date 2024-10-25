/* LAB 5  PART 2
   Function that finds the longest sequence of increasing numbers
   By: Anastasia Dimov */

   #include <stdio.h>
   void longestSequence(int [], int);

    // main to test funtion
   int main() {
       int arr[8] = {1,2,1,2,3,4,5,6};
       longestSequence(arr, 8);

       return 0;
   }

   void longestSequence(int a[], int sizeA){
       int cnt1 = 1, index, seqNum = 0, big = 0, cnt2 = 1, topIndex;
       int cntArr[sizeA];

        // append increasing sequence from each index, to array cntArr
       for (int i = 0; i < sizeA; i++) {
           if (a[i] < a[i + 1]) {
               cnt1++;
           }
           else {
               cntArr[seqNum] = cnt1; 
               cnt1 = 1;
               seqNum++;
           }
            
        }

        //find the greatest sequence in cngArr
        for (int j = 0; j < seqNum; j++) {
            if (cntArr[j] > big) {
                big = cntArr[j];
            }
        }

        
        //finds index of the longest increasing sequence
        for (int y = 0; y < sizeA; y++) {
            if (cnt2 == big) {
                index = y;
                break;
            }
            else if (a[y] < a[y + 1]) {
                cnt2++;
            }
            else {
                cnt2 = 1;
            }
        }
        topIndex = index - (big - 1);

        printf("Longest sequence is");

        for (int l = topIndex; l <= index - 1; l++) {
            printf(" %d,", a[l]);
            
        }

        printf(" %d.", a[index]);
        
        for (int g = 0; g < seqNum; g++) {
            printf(" %d", cntArr[g]);
        }



        

        return;




        
    }