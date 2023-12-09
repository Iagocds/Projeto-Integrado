# Projeto-Integrado
Cadeira de Projeto Integrado

Neste trabalho iremos identificar diferentes algoritmos de sequenciamento e vamos comparar a performance deles com uma amostra gerada de numeros aleatorios.
O trabalho será desenvolvido utilizando a metodologia Scrum. O relatorio da sprint pode ser encontrado no arquivo `sprint.md`

O codigo fonte deste projeto deve estar disponivel junto a documentação.
Todo o binario disponibilizado junto ao codigo fonte é copilado para funcionar em um sistema compativel com POSIX de 64 bits.

## Amostra

A amostra foi criada utilizando um algoritmo que gera variaveis aleatorias em C.

Este é o arquivo `amostra.c`, ele cria um arquivo chamado `dados` com numeros inteiros aleatorios.
Você pode alterar o numero de inteiros modificando a definição de `MAX`.

```
Cuidado!
O numero maximo que pode ser utilizado em `MAX` é 2147483646.
```

## Comparação

A Comparação é feita executando todos os algoritmos a serem testados em ordem e gravando o tempo de execução usando um timer do sistema.
Ao rodar o algoritmo o mesmo irá calcular o tempo necessario para concluir a ordenação de sua amostra e salvar no arquivo `resultados.txt`.
O resultado pode ser avaliado pelo programa `checagem.c` ou por um leitor de arquivos de texto.

### Algoritmos comparados

Serão comparados os seguintes algoritmos:

Implementação obrigatoria:

Insertion sort
Selection sort
Bubble sort
Comb sort
Bogo sort

Implementação opcional:

Merge sort
Heapsort
Shell sort
Radix sort
Gnome sort
Counting sort
Bucket sort
Cocktail sort
Timsort
Quick sort

As implementações obrigatorias deveram estar disponiveis até o final da sprint, as opcionais deveram ser adicionadas caso as implementações obrigatorias estejam já completas.

##Implementação
