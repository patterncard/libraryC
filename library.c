#include <stdio.h>
int main(){
    int books[3];
    printf("Introduce 3 books");
    for(int i = 0; i <= 3; i++){
        scanf("%d", &books[3]);
        books[i] = 0;
        printf("%d", books[i]);
    }
    return 0;
}