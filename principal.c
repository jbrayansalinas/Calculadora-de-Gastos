#include "librerias.h"
#include "declaracionVariables.h"

int main(){
    #include "asignacionApuntadores.h"
    printf("****Bienvenido a tu calendario de Gastos****\n\n");
    printf("Ingrese su sueldo mensual: ");
    scanf("%.2f",&sueldo);

    printf("\nQue desea hacer?\n");

    while (hola)
    {
        printf("\n\n1)Entrar al metro\n2) Usar el Cable bus\n3) Rentar una Ecobici\n4) Usar el rtp\n5) Entrar al metrobus\n6) Usar la ruta\n7) Entrar al Tren Ligero\n8) Cargar Gasolina\n9) Ver Instrucciones\n10) Ver gastos\n11) Imprimir Gastos en Archivo txt\n0) Salir del programa\nOpcion: ");

        scanf("%d", &gasto);
        scanf("%d", &letra);

        if (letra)
            printf("\n\n");

        switch (gasto)
        {
        case 1:
            printf("Seleccionaste el Metro \n\n"); 
            break;
        case 2:
            printf("Seleccionaste el Cable Bus \n\n"); 
            break;
        case 3:
            printf("Seleccionaste la EcoBici \n\n"); 
            break;
        case 4:
            printf("Seleccionaste el Rtp \n\n"); 
            break;
        case 5:
            printf("Seleccionaste el Metro Bus \n\n"); 
            break;
        case 6:
            printf("Seleccionaste la Ruta \n\n"); 
            break;
        case 7:
            printf("Seleccionaste el Tren Ligero \n\n"); 
            break;
        case 8:
            printf("Seleccionaste el Gasolina \n\n"); 
            break;
        case 9:
            printf("INSTRUCCIONES:\n"); 
            break;
        case 10:
            break;
        case 11:
            break;
        case 0:
            printf("Gracias por usar el programa :)\n"); 
            break;
        default:
            break;
        }
        

    }
    


    return 0;
}
