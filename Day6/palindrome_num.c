///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// Check if given number is palindrome number or not

 #include <stdio.h>
int main(){
    int n,d,temp,r;
    scanf("%d", &n);
    r=0;
    temp=n;
    while(n!=0)
    {
        d = n%10;
        r = r*10 + d;
        n = n/10;
    }
    if(temp==r){
        printf("Its palindrome");
    }
    else{
        printf("Not palindrome");
    }
}