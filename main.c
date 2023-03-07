#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
char palavras[10][10] = {"Arroz","Frango","Rato","Cavalo","Tucano","Praia","Escudo","Marte","Faca","Peixe"};

int main() {

srand((unsigned) time(NULL));
int r = 0,acertos = 0,tamanho=0,tentativas=0;
r = abs(rand() % 11 - 1);
tamanho = strlen(palavras[r]);
char *palavraSecreta;
palavraSecreta = (char*) malloc((tamanho  * sizeof(char) ));
 char ch;

 printf("Palavra Gerada possui %d Characteres!\n",tamanho);
 
for(int i = 0;i<tamanho;i++) { 
     palavraSecreta[i]= '_';
     palavraSecreta[tamanho] = '\0'; 
     printf("%c ", palavraSecreta[i]);
}
puts("\n");

while((tentativas < tamanho )) {
    ch = getchar();
    if(ch != '\n'  && isalpha(ch)) {
        tentativas++;
    for(int i = 0;i<tamanho;i++) {
        if(palavras[r][i] == ch  && !isalpha(palavraSecreta[i])) {
            palavraSecreta[i] = ch;
            printf("%c \n", palavraSecreta[i]);
        }
    }
    printf("%s",palavraSecreta);
    puts("\n");
    }

}



printf("Jogo Encerrado! \nSua palavra era: %s \nTentativas: %d \n",palavras[r],tentativas);
system("pause");
}