#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    printf("Rock Paper Scissor\n");
    char varis[3][20] = {"Rock", "Paper", "Scissor"};
    int plchoi;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    int compchoi = rand() % 3; // Gera um índice aleatório entre 0 e 2

    printf("Player's choice: \n");
    printf("0 - Rock\n");
    printf("1 - Paper\n");
    printf("2 - Scissor\n");
    scanf("%d", &plchoi);

    if (plchoi < 0 || plchoi > 2) {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("You chose: %d\n", plchoi);
    printf("Computer chose: %d\n", compchoi);


    if (plchoi == 0 && compchoi == 1){
        printf("Computer won!");
    }
    else if (plchoi == 0 && compchoi == 2){
        printf("Player won!");
    }
    else if (plchoi == 1 && compchoi == 0){
        printf("Player won!");
    }
    else if (plchoi == 1 && compchoi == 2){
        printf("Computer won!");
    }
    else if (plchoi == 2 && compchoi == 0){
        printf("Computer won!");
    }
    else if (plchoi == 2 && compchoi == 1){
        printf("Player won!");
    }
    else{
        printf("Tie!");
    }

    return 0;
}