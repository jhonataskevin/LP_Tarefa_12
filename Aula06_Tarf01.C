#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    char texto[30], ori[30];

    fgets(texto, sizeof(texto), stdin);
    strcpy(ori, texto);
    printf("\n");

    for (int i=0; texto[i]!='\0'; i++){
        texto[i]=toupper(texto[i]);
    }
    printf("%s", texto);

    for (int i=0; texto[i]!='\0'; i++){
        texto[i]=tolower(texto[i]);
    }
    printf("%s", texto);

    printf("%s\n", ori);


}
