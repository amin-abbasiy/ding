#include <stdio.h>
#include <string.h>
#include <unistd.h> 

#define BELL 0x07

int main() {
    char input[50];
    int i;

    scanf("%49s", input);
    
        if (strcmp(input, "ding") == 0) {
            printf("%d\n", BELL);
            i = 3;
            while(i > 0) {
                printf("\n\a");
                sleep(10);
                printf("Ding Ding Again:)\n");
                --i;
            }
        } else {
            printf("No Ding this Time:(\n");
        }
}