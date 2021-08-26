///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Implement a program to perform sum of digits from given number

#include <stdio.h>
int main(){
    int n,d,s=0;
    scanf("%d", &n);
    while(n != 0){
        d = n%10;
        s = s+d;
        n = n/10;
    }
    printf("%d",s);
}