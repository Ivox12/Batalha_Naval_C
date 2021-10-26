#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

int sorteio (){
    int numero, decisao;
    bool loop=true;
    while (loop){
        printf ("Escolha cara ou coroa:\n");
        printf ("1)Cara\n2)Coroa\n");
        scanf ("%i", &decisao);

            switch (decisao){
                case 1:
                    printf ("\nEscolheu cara");
                    numero = rand() % 2;
                    if (numero==1){
                        printf ("\nJogador venceu\n");
                        printf ("Pressione alguma tecla para prosseguir");
                        getch();
                        return 0;
                   }
                   else {
                        printf ("\nComputador Venceu\n");
                        printf ("Pressione alguma tecla para prosseguir");
                        getch();
                        return 0;
                   }
                case 2:
                    printf ("\nEscolheu Coroa");
                    numero = rand() % 2;
                    if (numero==2){
                        printf("\nJogador Venceu\n");
                        printf ("Pressione alguma tecla para prosseguir");
                        getch();
                        return 0;
                    }
                    else {
                        printf ("\nComputador Venceu\n");
                        printf ("Pressione alguma tecla para prosseguir");
                        getch();
                        return 0;
                    }
                default:
                    printf ("\nESCOLHA INVALIDA, TENTE NOVAMENTE\n");
                    continue;
        }
        }
}

void batalha (int *p1, int *p2){
    char tabul_10[10][10];
    int x, y;

    scanf ("%i %i",&x ,&y);
    tabul_10[x][y]= 'x';
    tabuleiro_10x10();
}

void tabuleiro_10x10(){ //(necessario linha-1)
char tabul_10[10][10]={
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    };

    system ("cls");
    printf ("\n\t\t      °°BATALHA NAVAL°° \n");
    printf ("\n\t.-------------------------------------------.");
    printf ("\n\t| X | A | B | C | D | E | F | G | H | I | J | ");
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|01 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_10[0][0], tabul_10[0][1], tabul_10[0][2], tabul_10[0][3], tabul_10[0][4], tabul_10[0][5], tabul_10[0][6], tabul_10[0][7], tabul_10[0][8], tabul_10[0][9]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|02 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_10[1][0], tabul_10[1][1], tabul_10[1][2], tabul_10[1][3], tabul_10[1][4], tabul_10[1][5], tabul_10[1][6], tabul_10[1][7], tabul_10[1][8], tabul_10[1][9]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|03 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_10[2][0], tabul_10[2][1], tabul_10[2][2], tabul_10[2][3], tabul_10[2][4], tabul_10[2][5], tabul_10[2][6], tabul_10[2][7], tabul_10[2][8], tabul_10[2][9]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|04 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_10[3][0], tabul_10[3][1], tabul_10[3][2], tabul_10[3][3], tabul_10[3][4], tabul_10[3][5], tabul_10[3][6], tabul_10[3][7], tabul_10[3][8], tabul_10[3][9]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|05 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_10[4][0], tabul_10[4][1], tabul_10[4][2], tabul_10[4][3], tabul_10[4][4], tabul_10[4][5], tabul_10[4][6], tabul_10[4][7], tabul_10[4][8], tabul_10[4][9]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|06 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_10[5][0], tabul_10[5][1], tabul_10[5][2], tabul_10[5][3], tabul_10[5][4], tabul_10[5][5], tabul_10[5][6], tabul_10[5][7], tabul_10[5][8], tabul_10[5][9]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|07 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_10[6][0], tabul_10[6][1], tabul_10[6][2], tabul_10[6][3], tabul_10[6][4], tabul_10[6][5], tabul_10[6][6], tabul_10[6][7], tabul_10[6][8], tabul_10[6][9]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|08 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_10[7][0], tabul_10[7][1], tabul_10[7][2], tabul_10[7][3], tabul_10[7][4], tabul_10[7][5], tabul_10[7][6], tabul_10[7][7], tabul_10[7][8], tabul_10[7][9]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|09 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_10[8][0], tabul_10[8][1], tabul_10[8][2], tabul_10[8][3], tabul_10[8][4], tabul_10[8][5], tabul_10[8][6], tabul_10[8][7], tabul_10[8][8], tabul_10[8][9]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|10 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_10[9][0], tabul_10[9][1], tabul_10[9][2], tabul_10[9][3], tabul_10[9][4], tabul_10[9][5], tabul_10[9][6], tabul_10[9][7], tabul_10[9][8], tabul_10[9][9]);
    printf ("\n\t.-------------------------------------------.");
    }

void tabuleiro_15x15(){ //(necessario linha-1)
char tabul_15[15][15]={
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    };

    system ("cls");
    printf ("\n\t\t\t\t°°BATALHA NAVAL°° \n");
    printf ("\n\t.---------------------------------------------------------------.");
    printf ("\n\t| X | A | B | C | D | E | F | G | H | I | J | K | L | M | N | O | ");
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|01 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[0][0], tabul_15[0][1], tabul_15[0][2], tabul_15[0][3], tabul_15[0][4], tabul_15[0][5], tabul_15[0][6], tabul_15[0][7], tabul_15[0][8], tabul_15[0][9],tabul_15[0][10],tabul_15[0][11],tabul_15[0][12],tabul_15[0][13],tabul_15[0][14],tabul_15[0][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|02 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[1][0], tabul_15[1][1], tabul_15[1][2], tabul_15[1][3], tabul_15[1][4], tabul_15[1][5], tabul_15[1][6], tabul_15[1][7], tabul_15[1][8], tabul_15[1][9],tabul_15[1][10],tabul_15[1][11],tabul_15[1][12],tabul_15[1][13],tabul_15[1][14],tabul_15[1][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|03 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[2][0], tabul_15[2][1], tabul_15[2][2], tabul_15[2][3], tabul_15[2][4], tabul_15[2][5], tabul_15[2][6], tabul_15[2][7], tabul_15[2][8], tabul_15[2][9],tabul_15[2][10],tabul_15[2][11],tabul_15[2][12],tabul_15[2][13],tabul_15[2][14],tabul_15[2][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|04 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[3][0], tabul_15[3][1], tabul_15[3][2], tabul_15[3][3], tabul_15[3][4], tabul_15[3][5], tabul_15[3][6], tabul_15[3][7], tabul_15[3][8], tabul_15[3][9],tabul_15[3][10],tabul_15[3][11],tabul_15[3][12],tabul_15[3][13],tabul_15[3][14],tabul_15[3][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|05 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[4][0], tabul_15[4][1], tabul_15[4][2], tabul_15[4][3], tabul_15[4][4], tabul_15[4][5], tabul_15[4][6], tabul_15[4][7], tabul_15[4][8], tabul_15[4][9],tabul_15[4][10],tabul_15[4][11],tabul_15[4][12],tabul_15[4][13],tabul_15[4][14],tabul_15[4][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|06 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[5][0], tabul_15[5][1], tabul_15[5][2], tabul_15[5][3], tabul_15[5][4], tabul_15[5][5], tabul_15[5][6], tabul_15[5][7], tabul_15[5][8], tabul_15[5][9],tabul_15[5][10],tabul_15[5][11],tabul_15[5][12],tabul_15[5][13],tabul_15[5][14],tabul_15[5][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|07 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[6][0], tabul_15[6][1], tabul_15[6][2], tabul_15[6][3], tabul_15[6][4], tabul_15[6][5], tabul_15[6][6], tabul_15[6][7], tabul_15[6][8], tabul_15[6][9],tabul_15[6][10],tabul_15[6][11],tabul_15[6][12],tabul_15[6][13],tabul_15[6][14],tabul_15[6][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|08 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[7][0], tabul_15[7][1], tabul_15[7][2], tabul_15[7][3], tabul_15[7][4], tabul_15[7][5], tabul_15[7][6], tabul_15[7][7], tabul_15[7][8], tabul_15[7][9],tabul_15[7][10],tabul_15[7][11],tabul_15[7][12],tabul_15[7][13],tabul_15[7][14],tabul_15[7][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|09 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[8][0], tabul_15[8][1], tabul_15[8][2], tabul_15[8][3], tabul_15[8][4], tabul_15[8][5], tabul_15[8][6], tabul_15[8][7], tabul_15[8][8], tabul_15[8][9],tabul_15[8][10],tabul_15[8][11],tabul_15[8][12],tabul_15[8][13],tabul_15[8][14],tabul_15[8][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|10 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[9][0], tabul_15[9][1], tabul_15[9][2], tabul_15[9][3], tabul_15[9][4], tabul_15[9][5], tabul_15[9][6], tabul_15[9][7], tabul_15[9][8], tabul_15[9][9],tabul_15[9][10],tabul_15[9][11],tabul_15[9][12],tabul_15[9][13],tabul_15[9][14],tabul_15[9][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|11 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[10][0], tabul_15[10][1], tabul_15[10][2], tabul_15[10][3], tabul_15[10][4], tabul_15[10][5], tabul_15[10][6], tabul_15[10][7], tabul_15[10][8], tabul_15[10][9],tabul_15[10][10],tabul_15[10][11],tabul_15[10][12],tabul_15[10][13],tabul_15[10][14],tabul_15[10][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|12 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[11][0], tabul_15[11][1], tabul_15[11][2], tabul_15[11][3], tabul_15[11][4], tabul_15[11][5], tabul_15[11][6], tabul_15[11][7], tabul_15[11][8], tabul_15[11][9],tabul_15[11][10],tabul_15[11][11],tabul_15[11][12],tabul_15[11][13],tabul_15[11][14],tabul_15[11][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|13 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[12][0], tabul_15[12][1], tabul_15[12][2], tabul_15[12][3], tabul_15[12][4], tabul_15[12][5], tabul_15[12][6], tabul_15[12][7], tabul_15[12][8], tabul_15[12][9],tabul_15[12][10],tabul_15[12][11],tabul_15[12][12],tabul_15[12][13],tabul_15[12][14],tabul_15[12][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|14 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[13][0], tabul_15[13][1], tabul_15[13][2], tabul_15[13][3], tabul_15[13][4], tabul_15[13][5], tabul_15[13][6], tabul_15[13][7], tabul_15[13][8], tabul_15[13][9],tabul_15[13][10],tabul_15[13][11],tabul_15[13][12],tabul_15[13][13],tabul_15[13][14],tabul_15[13][15]);
    printf ("\n\t|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|");
    printf ("\n\t|15 | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c | %c |", tabul_15[14][0], tabul_15[14][1], tabul_15[14][2], tabul_15[14][3], tabul_15[14][4], tabul_15[14][5], tabul_15[14][6], tabul_15[14][7], tabul_15[14][8], tabul_15[14][9],tabul_15[14][10],tabul_15[14][11],tabul_15[14][12],tabul_15[14][13],tabul_15[14][14],tabul_15[14][15]);
    printf ("\n\t.---------------------------------------------------------------.");
    }

struct dados {
    char nome_usuario[30],ranking[5]

    };

struct jogo {
    char navio[3];//3 casas ---
    char porta_aviao[4];//4 casas ----
    char hidro_aviao[3];//3 casas _-_
    int vencedor;

    };

struct estruturas {
    struct jogo peca;
    struct dados info;

    };

int main () {

    struct estruturas geral;

    char agua ='-', certo='X';
    int escolha=0, lin, col;

    printf ("Escolha o estilo de mapa:");
    printf ("\n1) Mapa 10X10");
    printf ("\n2) Mapa 15X15");
    printf ("\n3) Sair\n");
    printf ("Escolha: ");
    scanf ("%c", &escolha);
    switch (escolha) {
        case '1':
            sorteio();
            tabuleiro_10x10 ();
            break;

        case '2':
            sorteio();
            tabuleiro_15x15 ();
            break;
        case '3':
            printf ("Saindo");
            break;

        default:
            printf ("Escolha invalida...");
            break;
}

return 0;
}
