#include <stdio.h>
#include <string.h>

int main(){
    char c ='Z';
    int count = 0;
    char str[] = "Nfsb!qj{{b!lb!mbtu!tmjdf!hibs!qf!ibj";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            count++;
        }    
    }

    printf("%d", count);
    
    return 0;
}

