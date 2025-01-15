#include <iostream>
#include <vector>

void merge(std::vector<int> &vetor, int  inicio, int  meio, int fim) {
    int aux, i, j, n1 = meio - inicio + 1, n2 = fim - meio;

    std::vector<int> vetor1(n1);
    std::vector<int> vetor2(n2);

    for(i = 0; i < n1; i++) {
        vetor1[i] = vetor[inicio + i];
    }

    for(int i = 0; i < n2; i++) {
        vetor2[i] = vetor[meio + 1 + i];
    }

    i = 0; j = 0; aux = inicio;

    while(i < n1 && j < n2) {
        if(vetor1[i] <= vetor2[j]) {
            vetor[aux] = vetor1[i];
            i++;
        } else {
            vetor[aux] = vetor2[j];
            j++;
        }
        aux++;
    }

    while(i < n1) {
         vetor[aux] = vetor1[i];
         aux++;
         i++;
    }

    while(j < n2) {
        vetor[aux] = vetor2[j];
        aux++;
        j++;
    }
    return;
}

void mergeSort(std::vector<int> &vetor, int inicio, int fim) {
    int meio;
    if(inicio >= fim) {
        return;
    }
    meio = (inicio+fim)/2;
    mergeSort(vetor, inicio, meio);
    mergeSort(vetor, meio + 1, fim);
    merge(vetor, inicio, meio, fim);
}

int main(void) {
    int qtd;

    std::cout << "Digite a quantidade de numeros" << std::endl;
    std::cin >> qtd;

    if(qtd <= 0) {
        std::cout << "So serao aceitos valores maiores que 0" << std::endl;
        return 1;
    }

    std::vector<int> vetor(qtd);

    for(int i = 0; i < qtd; i++) {
        std::cout << "Digite um numero: ";
        std::cin >> vetor[i];
    }

    mergeSort(vetor, 0, qtd - 1);

    for(int i = 0; i < qtd; i++) {
        std::cout << vetor[i] << " ";
    }

    return 0;
}