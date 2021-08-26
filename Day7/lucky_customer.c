///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Lucky customer program
// e-commerce website wishes to find the lucky customer who will get full cashback.

// input is given by admin team. We get output and 

#include <stdio.h>

int fib(int n){
    if(n==0 || n==1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", fib(n));
}