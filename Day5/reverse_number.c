///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Output reverse of given number with its digits reversed

#include <stdio.h>
int main(){
    int n,d,r=0;
    scanf("%d",&n);
    while(n!=0){
        d = d%10; // extracting digits one by one
        r = r*10 + d; // reverse number logic
        n= n/10;  // change or update value of n
    }
    printf(r);
    return 1;
}