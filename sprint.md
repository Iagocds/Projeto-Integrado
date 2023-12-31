# Sprint de Projeto-Integrado

Este documento contem as observações feitas durante a Sprint e a definição de equipe.

Ciclo basico de uma Sprint:

```mermaid
graph TD;
    A[Backlog de Produto]-->B[Backlog de Sprint];
    B --> C[Sprint];
    C --> D[Reuniões Diárias];
    D -->|Execução| D;
    D --> C;
    C -->|Conclusão da Sprint| E[Retrospectiva];
    E --> B;
```

## Funções

`Iago - Scrum master, Product Owner, Time de Desenvolvimento`

## Sprint Backlog

Consumo de backlog da Sprint:

```mermaid
gantt
    dateFormat D
    axisFormat %
    Sprint Backlog : milestone, m1, 1, 0d
    Backlog 1 : 1d
    Backlog 2 : 1d
    Backlog 3 : 1d
    Retrospectiva : milestone, m2, 4, 0d
```

### Backlog 1 - Implementar o programa que gera a amostra.

Implementar um programa que gera a amostra assim como definido no README.md

### Backlog 2 - Implementar o programa que faz a leitura dos resultados.

Implementar um programa que gera a que faz a leitura dos resultados assim como definido no README.md

### Backlog 3 - Implementar o programa que testa a performance dos algoritmos.

Implementar um programa que testa a performance dos algoritmos assim como definido no README.md

### Fim da Sprint, Retrospectiva

Fechar a sprint, verificar o que foi feito corretamente e o que foi feito de forma que não agradou.
Planejamento para a proxima sprint.

## Diario

### Backlog 1

Foi implementado o algoritmo que gera a amostra o mesmo está disponivel para operação no github.
 Não foi encontrado nenhum impedimento a esta tarefa.

### Backlog 2

Foi implementado o algoritmo que lê o arquivo resposta da comparação. Tabém foi feito a correção do [BUG#1](https://github.com/Iagocds/Projeto-Integrado/issues/1).

### Backlog 3

Foi implementado o algoritmo de comparação.

Não foi encontrado nenhum impedimento a esta tarefa.

### Retrospectiva

O trabalho foi feito em pouco tempo util e executado de forma a reduzir o tempo de trabalho em troca de qualidade no software. A execução do programa condiz com os requisitos.
