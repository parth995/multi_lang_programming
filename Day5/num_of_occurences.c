///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Find number of occurences of given digit in number n

// input - n and d two numbers
// no constraints
// output - num of occurences of d

#include <stdio.h>
int main(){
    int n,d,digit,count=0;
    scanf("%d",&n);
    scanf("%d",&digit);
    while(n!=0){
        d = n%10;
        if(digit == d){
            count++;
        }
        n = n/10;
    }
    printf("%d",count);
    return 1;
}