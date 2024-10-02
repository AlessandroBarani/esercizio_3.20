#include <stdio.h>
int main() {
    int anno;
    printf("Inserisci l'anno desiderato nel formato AAAA: ");
    scanf("%d", &anno);
    if((anno %4 == 0) && (anno % 100 != 0) || (anno % 400 == 0))
        printf("L'anno e' bisestile");
    else {
        printf("L'anno non e' bisestile");
    }
return 0;

}
