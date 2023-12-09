#include <stdio.h>
#include <stdlib.h>

#define MAX 100 //Quantidade de numeros aleatorios

int main(void)
{
    FILE *arquivo;

    arquivo = fopen("dados","w"); //Abertura do arquivo
    if(arquivo == NULL) //Tratamento de erro do arquivo
    {
        printf("Erro ao gerar ou abrir o arquivo\n");
        return 1;
    }

    fprintf(arquivo, "%d\n", MAX); //Gravar o numero de variaveis gerado na primeira linha do documento

    int i;  
    for (i = 0; i < MAX; i++) //Geração dos numeros aleatorios
    {
        fprintf(arquivo, "%d\n", rand() % 100); //Gerando um numero de 0 a 100 e gravando no arquivo.
    }

    fclose(arquivo); //Fechar arquivo
    return 0;
}