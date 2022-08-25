#include <stdio.h>

float gasolina(float *ptrSueldo, int *ptrAcuGas, float *ptrgastoGas){
    float gasto=0;


    printf("Interta el gasto en Gasolina\n");
    scanf("%f", &gasto);

    if (gasto>*ptrSueldo)
        printf("\No puedes gastar esa cantidad en gasolina\n");
    else{
        *ptrSueldo -= gasto;
        *ptrgastoGas += gasto;
        *ptrAcuGas +=1;
    }
    printf("Gracias por viajar en coche");

    return *ptrSueldo, *ptrAcuGas, *ptrgastoGas;
}