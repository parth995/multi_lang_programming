///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Convert decimal to binary number

////// Decimal ////////
// extract digit --> %10
// reverse --> *10
// next n value --> /10

/////// Binary /////////
// digit --> %2
// next --> /2

// Logic
// 1. read number
// 2. find n%2 and store in array
// 3. repeat this by eval n/2 until n>0 or n!=0
// 4. we have data in array
// 5. print array in reverse

#include <stdio.h>
int main(){
    int n,i,a[10];
    scanf("%d", &n);
    i=0;
    while(n>0){
        a[i] = n%2;
        n = n/2;
        i++;
    }
    for(i=i-1;i>=0;i--)
        printf("%d",a[i]);
    return 1;
}