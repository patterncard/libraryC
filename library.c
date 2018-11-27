#include <stdio.h>
#define PLIK "plik.txt"
int main(){
    FILE *pliczek;
    char book;
    char user;

    printf("Introduce title of book ");
    scanf("%s", &book);
    printf("Introduce user ");
    scanf("%s", &user);

    pliczek = fopen(PLIK, "w");
    fprintf(pliczek, "%s\n%s", book, user);

    fclose(pliczek);
    getc(pliczek);
return 0;
}