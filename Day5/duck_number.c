///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Check if number is duck number or not. Number which has zeros present in it, but no zero present in beginning of number. If 

#include <stdio.h>
int main(){
    int n,d,res=0;
    scanf("%d", &n);
    while(n!=0){
        d = n%10;
        if(d==0){
            res=1; // yes it is duck number
            break;
        }
        n = n/10;
    }
    if(res == 1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 1;
}