
// EXERCÍCIO 6 - Brincadeira do PAR ou ÍMPAR
#include <stdio.h>
#include <stdlib.h>  // Necessária para rand() e srand()
#include <time.h>    // Necessária para time()

void exercicio6() {
    int escolha, numero_usuario, numero_computador, soma;

    // Solicita a escolha do usuário: PAR (0) ou ÍMPAR (1)
    printf("\n--- EXERCÍCIO 6 ---\n");
    printf("Escolha PAR (0) ou IMPAR (1): ");
    scanf("%d", &escolha);

    if (escolha != 0 && escolha != 1) {
        printf("Escolha inválida! Use 0 para PAR ou 1 para IMPAR.\n");
        return;
    }

    // Solicita o número do usuário (de 0 a 10)
    printf("Digite um número de 0 a 10: ");
    scanf("%d", &numero_usuario);

    if (numero_usuario < 0 || numero_usuario > 10) {
        printf("Número inválido! Deve estar entre 0 e 10.\n");
        return;
    }

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    // Gera um número aleatório de 0 a 10 para o computador
    numero_computador = rand() % 11;

    // Exibe o número sorteado pelo computador
    printf("O computador escolheu: %d\n", numero_computador);

    // Calcula a soma dos dois números
    soma = numero_usuario + numero_computador;
    printf("Soma: %d\n", soma);

    // Verifica se a soma é par ou ímpar e determina o vencedor
    if (soma % 2 == 0 && escolha == 0) {
        printf("Você venceu! A soma é PAR.\n");
    } else if (soma % 2 != 0 && escolha == 1) {
        printf("Você venceu! A soma é ÍMPAR.\n");
    } else {
        printf("O programa venceu!\n");
    }
}

// EXERCÍCIO 7 - Desconto previdenciário
void exercicio7() {
    float salario, desconto;

    printf("\n--- EXERCÍCIO 7 ---\n");
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    if (salario <= 2000) {
        desconto = salario * 0.03;
    } else {
        desconto = 130.80;
    }

    printf("Desconto previdenciário: R$ %.2f\n", desconto);
}

// EXERCÍCIO 8 - Comerciante com lucro variável
void exercicio8() {
    float compra, venda;

    printf("\n--- EXERCÍCIO 8 ---\n");
    printf("Digite o valor de compra do produto: ");
    scanf("%f", &compra);

    if (compra < 200) {
        venda = compra * 1.45;
    } else {
        venda = compra * 1.25;
    }

    printf("Valor de venda: R$ %.2f\n", venda);
}

// EXERCÍCIO 9 - Conversor com menu
void exercicio9() {
    int opcao;
    float valor, convertido;

    printf("\n--- EXERCÍCIO 9 ---\n");
    printf("Escolha uma opção:\n");
    printf("1 - Converter de Real para Euro\n");
    printf("2 - Converter de Real para Dólar\n");
    printf("3 - Converter de Euro para Dólar\n");
    printf("4 - Converter de Euro para Real\n");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    switch(opcao) {
        case 1:
            convertido = valor / 5.5;
            printf("Valor em Euro: %.2f\n", convertido);
            break;
        case 2:
            convertido = valor / 5.0;
            printf("Valor em Dólar: %.2f\n", convertido);
            break;
        case 3:
            convertido = valor * 1.1;
            printf("Valor em Dólar: %.2f\n", convertido);
            break;
        case 4:
            convertido = valor * 5.5;
            printf("Valor em Real: %.2f\n", convertido);
            break;
        default:
            printf("Opção inválida.\n");
    }
}

int main() {
    // Chamada dos exercícios para testar
    exercicio6();
    exercicio7();
    exercicio8();
    exercicio9();
    
    return 0;
}
