#include <iostream>

// Função que soma dois valores de um array que identifica o alvo
bool somaFulampos(int notas[], int tam, int alvo) {
    int esq = 0, soma = 0;
    int dir = tam - 1;


    // o vetor já está ordenado. caso precise ordenar, posso usar a std::sort (Quick, Heap e Insertion ((sort)) O(lgN))
    while (esq <= dir) {
        soma = notas[esq] + notas[dir];

        if (soma == alvo) {
            std::cout << "Par de valores encontrado: " << notas[esq] << " e " << notas[dir] << std::endl;
            return true;
        } else if (soma < alvo) {
            // preciso de um valor um pouco maior
            esq++;
        } else { // soma > alvo | preciso de um valor um pouco menor
            dir--;
        }
    }

    std::cout << "Nenhum par encontrado que some o valor de " << alvo <<". Pode liberar o suspeito."<< std::endl;
    return false;
}

int main() {
    int carteiraSuspeito[] = {10, 20, 40, 80, 95, 110, 130};
    int tam = sizeof(carteiraSuspeito) / sizeof(carteiraSuspeito[0]); // tamanho do array
    int valorRoubado = 150;

    somaFulampos(carteiraSuspeito, tam, valorRoubado);

    return 0;
}