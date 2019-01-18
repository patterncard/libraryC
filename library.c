#include <stdio.h>
#include <stdlib.h>
#define PLIK "plik.txt"

struct person {
    int  id;
    char name[20];
    char surname[20];
};

int main(){
printf("----------------------------------------\n");
printf("|       Library\n");
printf("|1.\tShow books\n");
printf("|2.\tShow users\n");
printf("|3.\tShow book by ID\n");
printf("|4.\tShow user by ID\n");
printf("|5.\tBorrow book\n");
printf("|6.\tAll books outside the library\n");
printf("|0.\tExit\n");
printf("----------------------------------------\n");

    FILE *f;
    int book;
    int user;

    printf("Introduce nummber ");
    scanf("%hhd", &book);
    printf("Introduce another number ");
    scanf("%hhd", &user);

    f = fopen(PLIK, "w");
    fprintf(f, "%d\n%d", book, user);

    fclose(f);
    getc(f);

    printf("enter 1 ");
return 0;
}