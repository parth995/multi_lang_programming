///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// A special two digit number

// special two digit number is number such that when sum of digits is added to product of its digits, result should be equal to original two digit number.

// input --> two digit number
// constraints --> 10<=n<=99
// output --> special two digit number or not

// Logic:-
// Extract digits from given number
// calculate new_num = sum of those digits + product of those digits
// compare new_num with old number
// if equal print "special two digit number"

#include <stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d", &n);
    if(n>=10 && n<=99){
        a = n%10;
        b = (n/10)%10;
        c = (a*b)+(a+b);
        if(n==c)
            printf("It is special two digit number");
        else
            printf("Not special number");
    }
    else
        printf("Invalid number..");
}