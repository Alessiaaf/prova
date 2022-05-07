/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float ipotenusa, cateto1;
 printf("inserisci cateto: ");
 scanf("%f", &cateto1 );
 printf("inserisci ipotenusa: ");
 scanf("%f", &ipotenusa);
 
 printf("la lunghezza del cateto2 è: %.2f" , ipotenusa/cateto1 );
    return 0;
}
