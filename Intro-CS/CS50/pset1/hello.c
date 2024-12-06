#include <stdio.h>
#include <cs50.h>

int main(void){

    string name;

    name = get_string("Cuál es tu nombre: ");

    printf("hello, %s\n", name);
}
