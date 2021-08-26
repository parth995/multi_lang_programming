///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Display if number is niven or not
// Niven number is that number which is divisible by its sum of digits

// input --> a number
// constraints --> n>0
// output --> niven number or not

#include <stdio.h>

int sumofdigits(int n){
    int d,s=0;
    while(n!=0){
        s=s+(n%10); //braces has highest precedence. 
        n=n/10;
    }
    return s;
}

int main(){
    int n;
    scanf("%d", &n);
    if(n % sumofdigits(n)==0)
        printf("Niven number...");
    else
        printf("Not niven number");
    return 1;
}