///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// For each of 6 coffee cups i buy, i get 7th cup free. in total i get 7 cups.
// Implement program that takes n cups and print the total no. of cups i would get

// input --> n number of cups
// constraints --> n>0
// output --> number of cups present we have

// c --> n+(n/6)
// c+= --> n+(n/6)
// java --> n+(n/6)
// py --> n+(n//6)

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n>0){
        ans = n+(n/6);
    }
    printf("%d",ans);
    return 1;
}