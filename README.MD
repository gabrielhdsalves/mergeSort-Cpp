# MergeSort em C++

Este projeto implementa o algoritmo de ordenação **MergeSort** em C++. O MergeSort é um algoritmo de ordenação eficiente baseado na técnica "dividir para conquistar", com complexidade de tempo \(O(n \log n)\), o que o torna adequado para ordenar grandes conjuntos de dados.

## Como Usar

### Pré-requisitos

Antes de começar, verifique se você tem os seguintes programas instalados no seu PC:

- **Compilador C++**: Você pode usar o [GCC](https://gcc.gnu.org/), [MinGW](https://osdn.net/projects/mingw/releases/) (para Windows) ou qualquer outro compilador C++ de sua preferência.
- **IDE ou Editor de Texto**: Você pode usar qualquer editor de texto ou IDE como o **Visual Studio Code**, **CLion**, **Code::Blocks**, entre outros.

### Passos para Rodar o Código

1. **Clone o Repositório (ou Baixe o Código)**:
   Caso o código esteja em um repositório Git, você pode cloná-lo para sua máquina:
   
   ```bash
   git clone https://seu-repositorio-url.git
   ```

2. **Compile o código: Para compilar o código em C++, você precisa usar um compilador. No caso do GCC, execute o seguinte comando**:

    ```bash
    g++ -o mergesort main.cpp
    ```

3. **Execute o programa: Após a compilação, execute o programa gerado. Em sistemas Unix (Linux ou macOS), o comando seria**:
    ```bash
    ./mergesort
    ```

## Explicação do Código
O código utiliza o algoritmo de ordenação MergeSort, que segue as etapas:

Dividir: O vetor é dividido recursivamente até que cada subvetor contenha apenas um elemento.
Ordenar: Os subvetores são então "mesclados" de volta, ordenando-os durante o processo de junção.
A função mergeSort recebe o vetor e os índices de início e fim para realizar a ordenação. A função merge é responsável por mesclar as duas metades do vetor ordenado.

### Personalização
Você pode modificar o programa para alterar a entrada de dados, como permitir a leitura de um arquivo ou gerar números aleatórios.

Considerações Finais
Complexidade: O MergeSort tem complexidade de tempo O(nlogn), o que o torna bastante eficiente para grandes conjuntos de dados.

Estabilidade: O MergeSort é um algoritmo de ordenação estável, ou seja, ele mantém a ordem relativa de elementos com valores iguais.