#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define AMOSTRAS 1000


int multiplicador(int razão){
    int n=1, base=1;
    if (razão > 0){
    while(n<razão){
        base=10*base;
        n++;
    }}
    return base;
}


void swap(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void selection_sort(int num[], int tam) { 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) 
         min = j;
     }
     if (i != min) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }
}



void bubbleSort(int *v, int n){ 
    if (n < 1)return; 
 
    for (int i=0; i<n; i++) 
        if (v[i] > v[i+1]) 
            swap(&v[i], &v[i+1]);  
    bubbleSort(v, n-1); 
} 



void insertionSort(int arr[], int size){
    int i, j, key;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(void)
{
    FILE *arquivo; //Arquivo    

    //Abertura do arquivo
    arquivo = fopen("dados","r");
    if(arquivo == NULL) //Tratamento de erro do arquivo
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    int i=0;
    int valor[10];
    char var;
    int n=0, tamanho=0, temp=0;

    while(1)//Seleciona 1 linha e transforma em int
    {
        var = fgetc(arquivo); // Entrada do arquivo
        if (feof(arquivo)){ // Checando pelo fim do arquivo
            printf("Erro, final de arquivo\n");
            return 2;
        }
        if(47 < var && var < 58){ //Checa pra ver se e numero
            valor[i] = var - 48;
            i++;
        }
        else{
            while(n<i){ //Converte numeros da linha em um int
                tamanho = tamanho + valor[n]*multiplicador(i-n); 
                n++;
            }
        i=0;
        n=0; 
        break;
        }    
    }

    printf("Tamanho do vetor: %d\n",tamanho);

    int vetor[tamanho], aux=0;

    while(aux<tamanho){
        vetor[aux]=0;
        aux++;
    }
    aux = 0;

    while(aux<tamanho)//Seleciona 1 linha e transforma em int
    {
        var = fgetc(arquivo); // Entrada do arquivo
        if (feof(arquivo)){ // Checando pelo fim do arquivo
            printf("Erro, final de arquivo\n");
            return 3;
        }
        if(47 < var && var < 58){ //Checa pra ver se e numero
            valor[i] = var - 48;
            i++;
        }
        else{
            while(n<i){
                vetor[aux] = vetor[aux] + valor[n]*multiplicador(i-n); //Transforma uma linha em um unico int
                n++;
            }
            i=0;
            n=0;            
            aux++;
        } 
    }

    fclose(arquivo); //Fechar arquivo

    FILE *resultados; //Arquivo    

    //Abertura do arquivo
    resultados = fopen("resultados.txt","w");
    if(resultados == NULL) //Tratamento de erro do arquivo
    {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    aux = 0;
    int vetor_uso[tamanho];

    int loop, amostras[AMOSTRAS], variacao;

    clock_t inicio, fim;

////////////////////////////////////////////////////////////////////////////////
//  INSERTION SORT
////////////////////////////////////////////////////////////////////////////////
    loop = 0;
    printf("Testando insertion sort\n");
    while(loop<AMOSTRAS){ //Loop para fazer media de execuções

    aux = 0;
    int vetor_uso[tamanho];
    while(aux<tamanho){
        vetor_uso[aux] = vetor[aux];
        aux++;
    }

    inicio = clock(); //Define o tempo inicial e uma variavel de comparacao

    insertionSort(vetor_uso, aux); //insertion sort copiado da Wikipedia 

    fim = clock();

    amostras[loop] = fim - inicio; //tempo total de execucao
    printf("Testando insertion sort execução %d de %d concluido\n",loop, AMOSTRAS);
    loop++;
    }

    loop=0;
    variacao=0;
    while(loop<AMOSTRAS){
        variacao=variacao+amostras[loop];
        loop++;
    }
    
    int nsec = variacao * 1000000 / (CLOCKS_PER_SEC * AMOSTRAS); //transformação para tempo
    printf("Tempo medio de execução do insertion sort %d microssegundos\n", nsec);
    fprintf(resultados, "Tempo medio de execução do insertion sort %d microssegundos\n", nsec);

////////////////////////////////////////////////////////////////////////////////
//  SELECTION SORT
////////////////////////////////////////////////////////////////////////////////
    loop = 0;
    printf("Testando selection sort\n");
    while(loop<AMOSTRAS){ //Loop para fazer media de execuções

    aux = 0;
    int vetor_uso[tamanho];
    while(aux<tamanho){
        vetor_uso[aux] = vetor[aux];
        aux++;
    }

    inicio = clock(); //Define o tempo inicial e uma variavel de comparacao

    selection_sort(vetor_uso, aux); //selection sort copiado da Wikipedia 

    fim = clock();
    printf("Testando selection sort execução %d de %d concluido\n",loop, AMOSTRAS);

    amostras[loop] = fim - inicio; //tempo total de execucao
    loop++;
    }

    loop=0;
    variacao=0;
    while(loop<AMOSTRAS){
        variacao=variacao+amostras[loop];
        loop++;
    }
    
    nsec = variacao * 1000000 / (CLOCKS_PER_SEC * AMOSTRAS); //transformação para tempo
    printf("Tempo medio de execução do selection sort %d microssegundos\n", nsec);
    fprintf(resultados, "Tempo medio de execução do selection sort %d microssegundos\n", nsec);

////////////////////////////////////////////////////////////////////////////////
//  BUBBLE SORT
////////////////////////////////////////////////////////////////////////////////
    loop = 0;
    printf("Testando bubble sort\n");
    while(loop<AMOSTRAS){ //Loop para fazer media de execuções

    aux = 0;
    int vetor_uso[tamanho];
    while(aux<tamanho){
        vetor_uso[aux] = vetor[aux];
        aux++;
    }

    inicio = clock(); //Define o tempo inicial e uma variavel de comparacao

    bubbleSort(vetor_uso, aux); //bubble sort copiado da Wikipedia 

    fim = clock();
    printf("Testando bubble sort execução %d de %d concluido\n",loop, AMOSTRAS);

    amostras[loop] = fim - inicio; //tempo total de execucao
    loop++;
    }

    loop=0;
    variacao=0;
    while(loop<AMOSTRAS){
        variacao=variacao+amostras[loop];
        loop++;
    }
    
    nsec = variacao * 1000000 / (CLOCKS_PER_SEC * AMOSTRAS); //transformação para tempo
    printf("Tempo medio de execução do bubble sort %d microssegundos\n", nsec);
    fprintf(resultados, "Tempo medio de execução do bubble sort %d microssegundos\n", nsec);

    fclose(resultados); //Fechar arquivo

    printf("Resultados salvos no arquivo\n");

    return 0;
}