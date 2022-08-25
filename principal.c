#include "librerias.h"
#include "declaracionVariables.h"

int main(){
    #include "asignacionApuntadores.h"
    printf("****Bienvenido a tu calendario de Gastos****\n\n");
    printf("Ingrese su sueldo mensual: ");
    scanf("%f",&sueldo);
    printf("\nQue desea hacer?\n");

    while (hola)
    {
        printf("\n\n1) Entrar al metro\n2) Usar el Cable bus\n3) Rentar una Ecobici\n4) Usar el rtp\n5) Entrar al metrobus\n6) Usar la ruta\n7) Entrar al Tren Ligero\n8) Cargar Gasolina\n9) Ver Instrucciones\n10) Ver gastos\n11) Imprimir Gastos en Archivo txt\n0) Salir del programa\nOpcion: ");

        scanf("%d", &gasto);
        scanf("%c", &letra);

        if (letra)
            printf("\n\n");

        switch (gasto)
        {
        case 1:
            printf("Seleccionaste el Metro \n\n"); 
            ptrNombre="metro";
            saldoSuficiente(ptrSueldo,5, ptrNombre,ptrAcuMetro);
            printf("Tu saldo actual es %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 2:
            printf("Seleccionaste el Cable Bus \n\n"); 
            ptrNombre="cablebus";
            saldoSuficiente(ptrSueldo,5, ptrNombre,ptrAcuCable);
            printf("Tu saldo actual es %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 3:
            printf("Seleccionaste la EcoBici \n\n"); 
            ptrNombre="EcoBici";
            saldoSuficiente(ptrSueldo,13, ptrNombre,ptrAcuEco);
            printf("Tu saldo actual es %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 4:
            printf("Seleccionaste el Rtp \n\n"); 
            ptrNombre="Rtp";
            saldoSuficiente(ptrSueldo,3, ptrNombre,ptrAcuRTP);
            printf("Tu saldo actual es %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 5:
            printf("Seleccionaste el Metro Bus \n\n"); 
            ptrNombre="Metro Bus";
            saldoSuficiente(ptrSueldo,6, ptrNombre,ptrAcuMetro);
            printf("Tu saldo actual es %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 6:
            printf("Seleccionaste la Ruta \n\n"); 
            ptrNombre="Ruta";
            saldoSuficiente(ptrSueldo,5.5, ptrNombre,ptrAcuRuta);
            printf("Tu saldo actual es %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 7:
            printf("Seleccionaste el Tren Ligero \n\n"); 
            ptrNombre="Tren Ligero";
            saldoSuficiente(ptrSueldo,3, ptrNombre,ptrAcuTren);
            printf("Tu saldo actual es %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 8:
            printf("Seleccionaste la Gasolina \n\n"); 
            ptrNombre="Gasolina";
            saldoSuficiente(ptrSueldo,5, ptrNombre,ptrgastoGas);
            printf("Tu saldo actual es %.2f\n\nQue mas te gustaria hacer?\n", *ptrSueldo);
            break;
        case 9:
            printf("INSTRUCCIONES:\n"); 
            break;
        case 10:
            printf("Servicio\tViajes\t\tMonto Gastado\n");
            printf("Metro\t\t%d\t\t%d\n", *ptrAcuMetro, (*ptrAcuMetro * 5));
            printf("CableBus\t\t%d\t\t%d\n", *ptrAcuCable, (*ptrAcuCable * 5));
            printf("Ecobici\t\t%d\t\t%d\n", *ptrAcuEco, (*ptrAcuEco * 13));
            printf("RTP\t\t%d\t\t%d\n", *ptrAcuRTP, (*ptrAcuRTP * 3));
            printf("Metrobus\t%d\t\t%d\n", *ptrAcuMBus, (*ptrAcuMBus * 6));
            printf("Ruta\t\t%d\t\t%0.2f\n", *ptrAcuRuta, (*ptrAcuRuta * 5.5));
            printf("Tren Ligero\t%d\t\t%d\n", *ptrAcuTren, (*ptrAcuTren * 3));
            printf("Gasolina\t%d\t\t%0.2f\n", *ptrAcuGas, *ptrgastoGas);
            printf("\nSu sueldo restante es: %0.2f\n\n", *ptrSueldo);
            break;
        case 11:
            break;
        case 0:
            printf("Gracias por usar el programa :)\n"); 
            hola=false;
            break;
        default:
            break;
        }
        

    }

    return 0;
}
