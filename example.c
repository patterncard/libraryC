#include <stdio.h>
#include <stdlib.h>

struct person {
    int  id;
    char name[20];
    char surname[20];
};

int main(){
    FILE *infile;
    struct person input;
    infile = fopen("users.c", "r");
    if (infile == NULL){
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }
    while (fread(&input, sizeof(struct person), 1, infile)); 
    printf ("id = %d name: %s, surname: %s\n", input.id, input.name, input.surname);

    char line[256];
    while (fscanf(infile, "%s", line) != EOF){
        printf("id = %d name: %s, surname: %s\n", input.id, input.name, input.surname);
    }
    fclose(infile);
}