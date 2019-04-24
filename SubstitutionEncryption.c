#include <stdio.h>

int main()
{
    char messageletter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ciphertextletter[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
    char input[] = "JAMIE";
    int n = 5;
    int index = 0;
    int counter = 0;
    
    while (index <= n){
        for (counter = 0; counter < 25; counter ++){
            if (input[index] == messageletter[counter]){
            printf("%c", ciphertextletter[counter]);
            }
        }
        index ++;
    }
    
return 0;
}
