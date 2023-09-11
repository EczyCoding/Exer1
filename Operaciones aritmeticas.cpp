#include<iostream>
#include<stdio.h>
int main(){
    int opcion;
    printf("\n\t\t\t Calculadora: ");
    printf("\n 1. Suma:"); printf("\n 2. Resta:"); printf("\n 3. Multiplicacion:"); printf("\n 4. Division:");
    
    
    printf("\n Elegir opcion: "); scanf("%d", &opcion);
    printf("----------------------------------------\n");
    
    // Elegir opcion:
    int suma, resta, multiplicacion, division;
    int n1, n2;
    
    if(opcion==0){
    printf("\tLa opcion digitada, no es ninguna de las opciones integradas.");       
    }
    
    switch (opcion) {
       case 1:
       printf("Elegiste la Opcion 1 - Suma.\n");
       printf("\tIngresa el primer numero: "); scanf("%d", &n1);
       printf("\tIngresa el segundo numero: "); scanf("%d", &n2);
       suma=n1+n2; printf("\tSuma total: %i\n", suma);
       system("pause>nul"); break;
       
       case 2:
       printf("Elegiste la Opcion 2 - Resta.\n");
       printf("\tIngresa el primer numero: "); scanf("%d", &n1);
       printf("\tIngresa el segundo numero: "); scanf("%d", &n2);
       resta=n1-n2; printf("\tResta total: %i\n", resta);
       system("pause>nul"); break;

       case 3:
       printf("Elegiste la Opcion 3 - Multipliacion.\n");
       printf("\tIngresa el primer numero: "); scanf("%d", &n1);
       printf("\tIngresa el segundo numero: "); scanf("%d", &n2);
       multiplicacion=n1*n2; printf("\tMultiplicacion total: %i\n", multiplicacion);
       system("pause>nul"); break;

       case 4:
       printf("Elegiste la Opcion 4 - Division.\n");
       printf("\tIngresa el primer numero: "); scanf("%d", &n1);
       printf("\tIngresa el segundo numero: "); scanf("%d", &n2);
       
       division=n1/n2; printf("\tDivision total: %i\n", division);
       system("pause>nul");
       break;
   
    return 0;
}
}

