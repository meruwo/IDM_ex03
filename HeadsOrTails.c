#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main (){
    srand(time(NULL));

    int totalHeads = 0;
    int totalTails = 0;
    
    printf("Tossing a coin...\n");

    for(int i = 1; i <= N; i++){
        int toss = rand() % 2;
        if (toss == 0) {
            printf("Round %d: Heads\n", i);
            totalHeads++;
        } 
        else {
            printf("Round %d: Tails\n", i);
            totalTails++;
        }
    }

    printf("Heads: %d, Tails: %d\n", totalHeads, totalTails);

    return 0;
}