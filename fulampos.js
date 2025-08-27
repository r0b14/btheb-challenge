// Função que soma dois valores de um array que identifica o alvo
function somaFulampos(notas, alvo) {
    let esq = 0, soma = 0;
    let dir = notas.length - 1;

    // o vetor já está ordenado. caso precise ordenar, posso usar o array.sort() O(n log n)
    while (esq <= dir) {
        soma = notas[esq] + notas[dir];

        if (soma === alvo) {
            console.log(`Par de valores encontrado: ${notas[esq]} e ${notas[dir]}`);
            return true;
        } else if (soma < alvo) {
            // preciso de um valor um pouco maior
            esq++;
        } else { // soma > alvo | preciso de um valor um pouco menor
            dir--;
        }
    }

    console.log(`Nenhum par encontrado que some o valor de ${alvo}. Pode liberar o suspeito.`);
    return false;
}


let carteiraSuspeito = [10, 20, 40, 80, 95, 110, 130];
let valorRoubado = 150;

somaFulampos(carteiraSuspeito, valorRoubado);