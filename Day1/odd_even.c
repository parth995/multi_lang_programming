#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);    // used to read inputs in C
    if(n>=0){
        if(n%2==0){
            printf("even number"); // used to print output in C
        }
        else{
            printf("odd number");
        }
    }
    else{
        printf("Invalid number");
    }
    return 1;
}