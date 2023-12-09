#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *arquivo; //Arquivo
    char var; //Variavel temporaria

    //Abertura do arquivo
    arquivo = fopen("resultados.txt","r");
    if(arquivo == NULL) //Tratamento de erro do arquivo
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    while(1)
    {
        var = fgetc(arquivo); // Entrada do arquivo
        if (feof(arquivo)) // Checando pelo fim do arquivo
            break;
        printf("%c", var); //Imprimir valor na tela
    }

    fclose(arquivo); //Fechar arquivo
    return 0;
}