///////////////////////////////////////////////////////////
//////////////////// Problem Statement ////////////////////
///////////////////////////////////////////////////////////

// check birthday progam asked in (IBM)
// check if bday provided matches bday of lisa. Take month and day as input. no constraints. output 0 or 1

#include <stdio.h>

int strcmp(char a[], char b[]) {    //june (a), july (b)
    int flag=0, i=0; // flag is result status variable. i used for index
    while(a[i] != '\0' && b[i] != '\0'){
        if(a[i] != b[i]){
            flag = 1;
            break;
        }
        i++;
    }
    // outside of while loop....
    if(flag==0)
        return 1;
    else
        return 0;
}

int checkBirthday(char* m, int d){ // char* m == char m[]
    if(d == 5 && strcmp(m, "july"))
        return 1;
    else
        return 0;
}

int main(){
    int day;
    char month[7];
    scanf("%d %s", &day, &month);
    printf("%d", checkBirthday(month, day));
    return 1;
}
