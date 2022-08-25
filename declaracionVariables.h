#include <stdio.h>

char direccion[]= "C:\\Users\\Wposs\\Documents\\C\\proyecto_calculadora_Gastos\\Calculadora-de-Gastos\\Gastos.txt";
FILE *arch,*fd;

float sueldo=0;
int gasto=0;
bool hola=true;
char letra,caracter,fecha[50],nombre[20];

int AcuMetro=0;
int AcuCable=0;
int AcuEco=0;
int AcuRTP=0;
int AcuMBus=0;
int AcuRuta=0;
int AcuTren=0;
int AcuGas=0;
float gastoGas=0;

int *ptrAcuMetro;
int *ptrAcuCable;
int *ptrAcuEco;
int *ptrAcuRTP;
int *ptrAcuMBus;
int *ptrAcuRuta;
int *ptrAcuTren;
int *ptrAcuGas;
float *ptrgastoGas;
float *ptrSueldo;

char *ptrNombre;