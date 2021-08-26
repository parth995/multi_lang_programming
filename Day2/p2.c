///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Given an integer n, perform the following conditional actions,

// if n is odd, print Weird,
// if n is even and in the inclusive range of 2 to 5, print Not Weird.
// if n is even and in the inclusive range of 6 to 20, print Weird.
// if n is even and greater than 20, print Not Weird.

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n>=1 && n<=100){
        if(n%2==0){
            if(n>=2 && n<=5){
                printf("Not Weird");
            }
            else if(n>=6 && n<=20){
                printf("Weird");
            }
            else{
                printf("Not Weird");
            }
        }
        else{
            printf("Weird");
        }
    }
}