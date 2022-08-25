#include <stdio.h>


float saldoSuficiente(float *ptrSueldo, float cantidad, char * nombre, int *ptrAcumulador){
   int viaje;
   fflush(stdin);

if (*ptrSueldo<cantidad){
      printf("Con tu sueldo actual no puedes usar el %s\n", nombre);
   }else{
      *ptrSueldo -= cantidad;
      *ptrAcumulador += 1;
      printf("Ya se desconto un viaje\nQuieres desontar otro?\n");
      printf("\t1)Si\n\t2)No\n");
      scanf("%d",&viaje);

      switch (viaje)
      {
      case 1:
         saldoSuficiente(ptrSueldo,cantidad,nombre,ptrAcumulador);
         break;
      
      case 2:
        printf("Gracias por viajar en %s\n", nombre);
        break;
        default:
        printf("No es un caso valido\n");
         break;
      }
   }
   return *ptrSueldo, *ptrAcumulador;
}