/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
 int min,max;
 int sorteado;
 min=0;
 max=10;
 
 srand(time(0));
 
 for (int cont = 0; cont < 5; cont++)
 
 {
 sorteado = min + rand() % (max - min+1);
 
    printf("%d",sorteado);
    
 }
 
 
}
 
 
 