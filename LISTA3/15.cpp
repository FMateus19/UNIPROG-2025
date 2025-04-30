/*Faça um algoritmo que permita ao aluno calcular a sua média final na Unisinos. Leia a nota do grau A
e do grau B e escreva o resultado na tela. Lembrando que o Grau A vale 1/3 e o Grau B 2/3..*/

#include <stdio.h> 
#include <stdlib.h>


		int main() {
	float preco, total;
	int opcao;
	printf("Digite o preço do produto: R$ ");
	scanf("%f", &preco);
	printf("Escolha a condição de pagamento:\n");
	printf("1 - À vista em dinheiro (15%% de desconto)\n");
	printf("2 - À vista no cartão (10%% de desconto)\n");
	printf("3 - Em duas vezes (sem juros)\n");
	printf("4 - Em três vezes (com 10%% de juros)\n");
	printf("Opção: ");
	scanf("%d", &opcao);
		switch (opcao) {
			case 1:
				total = preco * 0.85;
				printf("Valor com 15%% de desconto: R$ %.2f\n", total);
				break;
			case 2:
				total = preco * 0.90;
				printf("Valor com 10%% de desconto: R$ %.2f\n", total);
				break;
			case 3:
				total = preco;
				printf("Duas vezes de R$ %.2f (sem juros)\n", total / 2);
				break;
			case 4:
				total = preco * 1.10;
				printf("Três vezes de R$ %.2f (com 10%% de juros)\n", total/3);
				break;
			default:
				printf("Opção inválida.\n");
			return 1;

 		system ("Pause");	
		return 0;
}}

