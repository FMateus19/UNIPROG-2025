/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//3-a) Uma empresa deseja criar um sistema que calcula o salário final de um funcionário. O sistema 
//precisa receber o valor do salário base e o percentual de bônus aplicado. O programa deve 
//calcular e exibir o valor final do salário com o bônus incluído.


#include <stdio.h>
#include <stdlib.h>


int main()
{
    
    float x,y,z;   //X é o salário base //Y é o percentual de bonús aplicado //Z Salário final
    
    printf("Digite o salario base(R$) - ");
    scanf("%f",&x);
    
    printf("Qual o percentual de bonus aplicado(%) ? - ");
    scanf("%f",&y);
    
      ///Formula para calculo do salario final, incluindo o bonus aplicado ataxa escolhida.
    z=x+x*(y/100);
    
    //O valor final do salario com o bonus recebido, arrendodado por at� 2 casas decimais.
    
    printf("Seu salario total e %.2f Reais\n\n",z);

    
    return 0;
}
