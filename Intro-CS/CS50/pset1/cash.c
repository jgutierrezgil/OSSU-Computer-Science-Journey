#include <stdio.h>
#include <cs50.h>

int main(void){

    const int cents[] = {25, 10, 5, 1};
    int cambio = 0;
    //Pide cambio
    int precio;
    do{
        precio = get_int("Change owed: ");
    }while(precio < 0);

    for(int i = 0; i < 4; i++){

        while(precio >= cents[i]){
            if(precio >= cents[i]){
                precio = precio - cents[i];
                cambio = cambio + 1;
            }
        }
    }

    printf("%i\n", cambio);

}
