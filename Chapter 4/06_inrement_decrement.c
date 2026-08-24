#include <stdio.h>

int main(){
    int i = 5;
     printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);
   
    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i); // 11


    i +=2; // same as i = 1 + 2;
    printf("The value of i is %d\n", i); // 13


    // i++ prints i first and then increment i (Posty increment operator)
    // ++i increment i first and then prints i (Posty increment operator)
    return 0;
}