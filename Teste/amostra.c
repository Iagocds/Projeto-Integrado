#include <stdio.h>
#include <stdlib.h>

#define MAX 100 //Quantidade de numeros aleatorios

int main(void)
{
    FILE *arquivo;

    //Abertura do arquivo
    arquivo = fopen("dados","w");
    if(arquivo == NULL) //Tratamento de erro do arquivo
    {
        printf("Erro ao gerar ou abrir o arquivo, aperte qualquer tecla para continuar");
        system("pause");
        return 1;
    }

    //Gravar o numero de variaveis gerado na primeira linha do documento
    fprintf(arquivo, "%d\n", MAX);


    //Geração dos numeros aleatorios
    int i;
    for (i = 0; i < MAX; i++)
    {
        fprintf(arquivo, "%d\n", rand() % 100); //Gerando um numero de 0 a 100 e gravando no arquivo.
    }

    //Fechar arquivo
    fclose(arquivo);
    return 0;
}
