#include <stdio.h>
#include <curses.h>
#define PLIK "plik.txt"
int main(){
    FILE *pliczek;
    int book;
    int user;

    printf("Introduce title of book ");
    scanf("%d", &book);
    printf("Introduce user ");
    scanf("%d", &user);

    pliczek = fopen(PLIK, "w");
    fprintf(pliczek, "%d\n%d", book, user);

    fclose(pliczek);
    getch();
return 0;
}