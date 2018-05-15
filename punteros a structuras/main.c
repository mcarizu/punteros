#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int datoInt;
    char datoChar;
}eDato;


int main()/*de la referencia al valor y del valor al campo*/
{

    eDato miDato={1,'C'};
    eDato miDato2={1,'A'};
    eDato* pDato=NULL;
    eDato lista[2];


    pDato=&miDato;

   lista[0]=miDato;
   lista[1]=miDato2;
   pDato=lista;/*apunta la lista*/
    //printf(":%d ---   \n",sizeof(miDato));
    //printf(" %d --- %c\n",pDato->datoInt,pDato->datoChar);

    for(int i=0;i<2;i++){

        printf("Desde el puntero:    %d --- %c\n",(pDato+i)->datoInt, (pDato+i)->datoChar);

    }


                    printf("Desde la estructura: %d --- %c --- %p --- %p \n",miDato.datoInt, miDato.datoChar);
                    printf("Desde el puntero:    %d --- %c --- %p --- %p \n",pDato->datoInt, pDato->datoChar,pDato->datoInt, pDato->datoChar);
                    //printf("Desde el puntero:    %p --- %p\n",pDato->datoInt, pDato->datoChar);





    return 0;
}
/*
Agarrrar el tp2 y donde alla un array pasarlo apuntero

*/
