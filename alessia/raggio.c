/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define PI 3.14159f

int main() {
    float raggio;
    
    printf("inserisci raggio: ");
    scanf("%f" , &raggio);
    
    
printf("La circonferenza è %.2f \n " , 2*PI*raggio);
printf("l'area è %.2f" , PI*raggio*raggio);


    return 0;
}
