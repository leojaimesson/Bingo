#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    
    int cartela[5][5];
    int numeros[75];
    int i = 0;
    int y = 0;
    int saiu;


	//aqui o vetor de numeros sao preenchidos com 0 para representar que aquele numero ainda não foi sortiado
    for(i = 0; i < 75; i++)
        numeros[i] = 0;
    

    i =0;
    
    //aqui ele vai adicionar os valores a cartela, caso o numero sortiado aleatoriamente não tenha saido antes, ele insere na matriz
    while(i <= 4){

        while(y < 5){
            if(i == 0)
                saiu = rand()%15;
            if(i == 1)
                saiu = 15 + rand()%15;
            if(i == 2)
                saiu = 30 + rand()%15;
            if(i == 3)
                saiu = 45 + rand()%15;
            if(i == 4)
                saiu = 60 + rand()%15;

            if(i == 0 && numeros[saiu] == 0){
                cartela[y][i] = saiu+1;
                numeros[saiu] = 1;
                y++;
            }
            if(i == 1 && numeros[saiu] == 0){
                cartela[y][i] = saiu+1;
                numeros[saiu] = 1;
                y++;
            }
            if(i == 2 && numeros[saiu] == 0 && y != 2){
                cartela[y][i] = saiu+1;
                numeros[saiu] = 1;
                y++;
            }
            if(i == 2 && y == 2){
                cartela[y][i] = 0;
                y++;
            }
            if(i == 3 && numeros[saiu] == 0){
                cartela[y][i] = saiu+1;
                numeros[saiu] = 1;
                y++;
            }
            if(i == 4 && numeros[saiu] == 0){
                cartela[y][i] = saiu+1;
                numeros[saiu] = 1;
                y++;
            }
        }
        i++;
        y = 0;

    }

    printf("B  I  N  G  O\n");
    for(i = 0; i < 5;i++){
        for(y = 0; y< 5; y++){
           if(i == 2 && y == 2)
                printf("## ");
            else
                printf("%.2d ",cartela[i][y]);
        }
        printf("\n");
    }

    return 0;
}
