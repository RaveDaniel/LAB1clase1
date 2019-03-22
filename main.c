#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;
    int numeroMaximo;
    int numeroMinimo;
    int primerIngreso;
    numeroMaximo=0;

    primerIngreso = 0;

    while(numero != -1)
    {
        printf("Ingrese el numero:");
        scanf("%d",&numero);
        if(primerIngreso == 0)
        {
            numeroMaximo = numero;
            numeroMinimo = numero;
            primerIngreso=1;
        }
        if(numero<numeroMinimo)
        {
            numeroMinimo = numero;
        }
        if(numero>numeroMaximo)
        {
            numeroMaximo = numero;
        }
        printf("Ingrese un nuevo numero: ");
        scanf("%d",&numero);
    }
    printf("El programa salio\n");
    printf("el numero maximo es : %d", numeroMaximo);
    printf("\nel numero minimo es : %d", numeroMinimo);

    return 0;
}
