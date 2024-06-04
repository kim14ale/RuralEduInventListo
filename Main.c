#include <stdio.h>
#include "Lecturas.h"
#include "Operaciones.h"



int main() {
    printf("*****  Bienvenido a RuralEduInvent    ****** \n");

    int opcion;

    do {
        opcion = mostrarMenu();

        
        switch(opcion) {
            case 1:
                agregarEquipo();
                break;
            case 2:
                mostrarInventario();
                break;
            case 3:
                calcularInversionTotal(); 
                break;
            case 4:
                printf("Saliendo del programa\n");
                break;
            default:
                printf("Error: Ingreso mal su dato \n");
        }
    } while(opcion != 4);

    return 0;
}
