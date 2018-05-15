#include <stdio.h>
#include <stdlib.h>

void funcionUno(int [],int); /*(array,t) notacion  array*/
void funcionDos(int [],int); /*(array,t) notacion puntero */
void funcionTres(int *,int); /* (puntero,t) notacion array   */
int funcionCuatro(int [],int);/*(puntero,t) notacion puntero */
void mostrar(char [],int);

int main()
{
   int array[]={9,1,2,7,4};


    funcionUno(array,5);
    funcionDos(array,5);
    funcionTres(array,5);

    if(funcionCuatro(array,5))
    {
          printf("No muestra¡¡¡¡\n");
    }
    return 0;
}


void funcionUno(int array[],int tamanio)
{
    int i;
    printf("Funcion 1\n");
    for(i=0;i<tamanio;i++)
    {
        printf("%d\n",array[i]);
    }

}
void funcionDos(int array[],int tamanio)
{
    int i;
    printf("Funcion 2\n");
    for(i=0;i<tamanio;i++)
    {
        printf("%p\n",*(array+i));
    }
}
void funcionTres(int *array,int tamanio)
{
    int i;
    printf("Funcion 3\n");
    for(i=0;i<tamanio;i++)
    {
        printf("%d\n",array[i]);
    }
}

int funcionCuatro(int *array,int tamanio)
{
    int i;
    int retorno =-1;
    printf("Funcion 4\n");
    if(array!=NULL){
            retorno = 0;
            for(i=0;i<tamanio;i++)
            {
                printf("%d\n",*(array+i));
            }
        }
 return retorno;
}
