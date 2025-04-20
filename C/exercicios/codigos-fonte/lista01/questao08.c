/* 08.Elabore um programa que contenha uma constante qualquer do tipo float. Use o comando #define. Imprima essa constante.*/
#include <stdio.h>
#define PI 3.14159265359
const double pi = 3.14159265359; 

int main(){
    printf("π = %.11f\n", PI);
    printf("π = %lf\n", pi);
    return 0;
}