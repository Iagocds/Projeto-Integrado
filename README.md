# Projeto-Integrado
Cadeira de Projeto Integrado

Neste trabalho iremos identificar diferentes algoritmos de sequenciamento e vamos comparar a performance deles com uma amostra gerada de numeros aleatorios.

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

### Isso funciona em markdown?




O Markdown é uma linguagem de marcação muito simples, desenvolvida por
John Gruber.

A ideia básica por trás da linguagem é fazer com que o escritor se
preocupe mais com o **conteúdo** do texto do que com a *formatação*.

## Mais um título

Aqui vamos tentar descrever uma análise.

## Simulando variáveis aleatórias

No R podemos simular valores de uma distribuição normal padrão através
da função `rnorm()`.

Seja $X \sim \text{N}(0,1)$, então para gerar 30 valores dessa variável
aleatório normal, fazemos

```
(x <- rnorm(30))
```

Com o resultado dessa simulação, podemos calcular a média e a variância
dessa VA $X$ para conferir se o resultado fica próximo de 0 e 1,
respectivamente.

Também podemos fazer um histograma dessa VA $X$ simulada

```
hist(x)
```
