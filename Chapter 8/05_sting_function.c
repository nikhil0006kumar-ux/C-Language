#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Nikhil";
    char s1[56] = "Nikhil";
    char s2[56] = " bhai";

    // printf("%d", strlen(st));
    char target[30];
    strcpy(target, st); // target now contains "Nikhil"
    //printf("%s %s", st, target);

    strcat(s1, s2); // s1 now contains "hellonikhil" <no space in between>
    //printf("%s", s1);

    int a = strcmp("deep", "joke");
    printf("%d", a);
    
    return 0;
}
