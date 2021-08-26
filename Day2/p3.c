///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// The e-commerce company Bookshelf wishes to analyse its monthly sales data between minimum range 30 to max range 100. The company has categorized these book sales into four groups depending on the number of sales with the help of these groups the company will know which stock they should increase or decrease in their inventory for the next month. the groups are as follows
// sales range groups
// 30-50 ------------------> D
// 51-60 ------------------> C
// 61-80 ------------------> B
// 81-100 -----------------> A

#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n>=30 && n<=100){
        if(n>=30 && n<=50)
            printf("D");
        else if(n>=51 && n<=60)
            printf("C");
        else if(n>=61 && n<=80)
            printf("B");
        else
            printf("A");
    }
    return 1;
}