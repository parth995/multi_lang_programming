///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

//Calculate number of digits in given number

#include <stdio.h>
int main(){
    int n,d,count=0;
    scanf("%d", &n);
    while(n!=0){
        d = n%10;
        count++;
        n = n/10;
    }
    printf("%d",count);
    return 1;
}