#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
   
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] ;
    int i, j;



        // Definindo o tabuleiro
        for(i=0; i<10; i++){
            for (j=0; j<10; j++){
                tabuleiro[i][j] = 0;
            }
        }

        /*Colocando o navio vertical
        // 3 posições - Coluna 4, linhas 5, 6 e 7

        for(i=4; i<=6; i++){
            tabuleiro[i][3] = 3;
        }

        // Colocando o navio horizontal
        // 3 posições - Linha 2 colunas 3,4 e 5

        for(j=2; j<=4; j++){
            tabuleiro[1][j] = 3;
        }

        // Colocando navios diagonais
        // 3 posições - LINHAS e coluna 1 a 3
        for(i=0; i<=2; i++){
            for(j=0; j<=2; j++){
                if(i == j){
                    tabuleiro[i][j]=3;
                }
            }
        }

        // 3 posições - LINHAS 8 a 10 / COLUNAS 1 A 3
        for(i=7; i<=9; i++){
            for(j=0; j<=2; j++){
                if(i + j == 9){
                    tabuleiro[i][j]=3;
                }
            }
        }
        */

        // Montando o cone nas linhas 1 a 3, colunas A a E



        for(i=0; i<=2; i++){
            int jmax = 4;
            for(j=0 ;j<=4; j++){
                if(j >= (jmax/2 -i) && j<= (jmax/2+i)){
                    tabuleiro[i][j] = 1;
                }
            }
        }

        // montando a cruz nas linhas 3 a 5 e colunas F a J

        int jmax = 9, jmin = 5, imax = 4, imin = 2;

        for(i=imin; i<=imax; i++){
            for(j=jmin ;j<=jmax; j++){
                if(j == (jmin + (jmax-jmin)/2) || i == (imax - (imax-imin)/2)){
                    tabuleiro[i][j] = 2;
                } 
            }
        }

         // montando o octaedro nas linhas 6, 7 e 8 e colunas A a 5
         int linhas = 3, meio;
            meio = linhas/2;

         for(i=0; i<= meio ; i++){
            int jmax = 4, imin = 5, imax= 7;
            for(j=0 ;j<=4; j++){
                if(j >= (jmax/2 -i) && (j<= (jmax/2+i))){
                    tabuleiro[i+imin][j] = 3;
                }
            }
        }
        
        for(i=meio-1; i==0 ; i--){
            int jmax = 4, imin = 5, imax= 7;
            for(j=0 ;j<=4; j++){
                if(j >= (jmax/2 -i) && (j<= (jmax/2+i))){
                    tabuleiro[i+imin+(meio+1)][j] = 3;
                }
            }
        }

         

         
        
         
         
         

        



        
        




        
        // Exibindo meu tabuleiro
        
        printf("  ");
        for(i=0; i<10; i++){
            printf("%c", linha[i]);
        }
        printf("\n");


        for(int i=0; i<10; i++){
            printf("%d ", i+1);
            for (int j=0; j<10; j++){
                printf("%d", tabuleiro[i][j]);
            }
            printf("\n");
        }
    

    // Preciso melhorar o programa para que ele se aplique a outras linhas e colunas

    return 0;
}
