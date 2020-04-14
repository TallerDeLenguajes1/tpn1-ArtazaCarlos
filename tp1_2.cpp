#include <stdio.h>
#include <ctype.h>

int calculoPot(int num, int exp);
void calculoPot2(int*, int*, int*);
void invertirNum(int*, int*);
void ordenarVal(int*, int*, int, int);

int main()
{
    int num=10, exp=2, pot2=1, pot, var, inver1, inver2, primero, segundo, num1, num2;
    char control='y';
    pot= calculoPot(num, exp);
    calculoPot2(&num, &exp, &pot2);
    printf("ejercicios a) y b)\n");
    printf("a) Calculo de potencia por funcion con pasaje por valor: %d\n", pot);
    printf("b) Calculo de potencia por funcion con pasaje por referencia: %d\n\n", pot2);
    printf("ejercicio c)\n");
    puts("ingrese un numero entero: ");
    scanf("%d", &var);
    fflush(stdin);
    printf("La direccion de la variable var es: %p y su contenido es %d\n\n", &var, var);
    printf("d) invertir dos valores, ingrese dos enteros:\n ");
    scanf("%d", &inver1);
    scanf("%d", &inver2);
    printf("Los valores antes de invertir son: a=%d y b=%d\n", inver1, inver2);
    invertirNum(&inver1, &inver2);
    printf("Los valores despues de invertir son: a=%d y b=%d\n\n", inver1, inver2);
    fflush(stdin);
    printf("e) dados los valores anteriormente ingresados quedan ordenamos: ");
    ordenarVal(&primero, &segundo, inver1, inver2);
    printf("primero= %d\t", primero);
    printf("segundo= %d\n\n", segundo);
    printf("f) usamos la funcion anterior para presentar por pantalla pares de numeros ordenados\n");
    while (control=='y')
    {
        printf("ingrese un par de numeros enteros\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
        ordenarVal(&primero, &segundo, num1, num2);
        printf("primero= %d\t", primero);
        printf("segundo= %d\n\n", segundo);
        puts("¿Desea ingresar otro par de numeros? y=yes, n=no");
        fflush(stdin);
        control=getchar();
    }

    fflush(stdin);
    getchar();
    return 0;
}

int calculoPot(int num, int exp){
    int pot=1;
    for (int i=1; i<=exp; i++)
    {
        pot=pot*num;
    }
    
    return(pot);
}

void calculoPot2(int* num, int* exp, int* pot2){
    for (int i=1; i<=(*exp); i++)
    {
        (*pot2)=(*pot2)*(*num);
    }
}

void invertirNum(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void ordenarVal(int* primero, int* segundo, int inver1, int inver2){
    for (int i = 1; i <= 2; i++)
    {
        if (inver1>inver2)
        {
            *segundo=inver1;
            *primero=inver2;
        }else
        {
            *segundo=inver2;
            *primero=inver1;
        }
    }
}