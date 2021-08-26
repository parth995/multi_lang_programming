///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Christmas offer discount. Customer get discount considering sum of all prime numbers in bill amount. 

// Input - order bill value
// constraints - none
// output - print discount - showing sum of all prime numbers in input value digits

// Logic:-
// read total bill amount
// call sumofprimedigits(bill_amount)
// returned value is discount

#include <stdio.h>

int sumofprimedigits(int n){
    int d,s=0;
    while(n!=0){
        d = n%10;
        if(d==2 || d==3 || d==5 || d==7)
            s=s+d;
        n=n/10;
    }
    return s;
}

int main(){
    int billamount;
    scanf("%d", &billamount);
    printf("%d", sumofprimedigits(billamount));
    return 1;
}