/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Lista1, exercicio2.
//a)Qual a entrada de dados? Ano de nascimento
//b)Qual o processamento realizado?Subtrair o ano de nascimento do ano atual para calcular idade usando uma expressão matemática;
//c)Qual é a saída de dados? Exibir a idade calculada na tela.

#include <stdio.h>

int main()
{
    
    int x,y; //X ano de nascimento //Y idade calculada
    
    printf("Diga qual seu ano de nascimento- ");
    scanf("%d",&x);
    y=2025-x;
    
    //Idade atual completos no ano de 2025,
    printf("Sua idade em 2025 e %d anos \n\n",y);

    return 0;
}