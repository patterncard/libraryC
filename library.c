#include <stdio.h>
#define PLIK "plik.txt"
int main(){
    FILE *f;
    char book;
    char user;

    printf("Introduce title of book ");
    scanf("%hhd", &book);
    printf("Introduce user ");
    scanf("%hhd", &user);

    f = fopen(PLIK, "w");
    fprintf(f, "%d\n%d", book, user);

    fclose(f);
    getc(f);
return 0;
}