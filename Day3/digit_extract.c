///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Implement a program to extract digits from given number

#include <stdio.h>
int main(){
    int n,d;
    scanf("%d", &n);
    while(n != 0){
        d = n%10;
        printf("%d", d);
        n = n/10;
    }
    return 1;
}