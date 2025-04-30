/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//3-b) Um posto de gasolina precisa de um programa que calcule o valor a ser pago por um cliente. O 
//cliente informa quantos litros abasteceu e o preço por litro. O programa deve calcular e exibir 
//o valor total da compra.


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x;     //X é a quantidade de litros abastecido pelo cliente
    float y,z;   //Y é o preço por litro //Z é o valor a pagar
    
    printf("Quantos litros o Cliente abasteceu ? - ");
    scanf("%i",&x);
    
    printf("Digite o preco por litro (R$) - ");
    scanf("%f",&y);
    
      ///Formula para calculo do valor a ser pago.
    
    z=x*y;
    
    //O valor a ser pago pelo cliente.
    
    printf("Total a pagar  %.2f (R$)\n\n",z);

    
    return 0;
}
