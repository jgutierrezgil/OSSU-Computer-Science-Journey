#include <stdio.h>
#include <cs50.h>

int main(void){

    int altura;

    altura = get_int("Qué altura quieres: ");

    for(int i = 0; i < altura; i++){
        for(int j = 0; j < altura; j++){
            if(j >= altura+i  || j <= altura-1){
                printf("#");
                if(j==altura-1){
                    printf("#\n");
                }
            }else{
                printf(" ");
            }
        }
    }
}
