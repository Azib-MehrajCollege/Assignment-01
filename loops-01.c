#include <stdio.h>
int main() {
    // print number 1-10
    //using do while
    int i=1;
    do {
        printf("%d \t", i);
        i++;
    } while (i<=10);
    printf("\n");

    //using while 
    i=1;
    while (i<=10) {
        printf("%d\t", i);
        i++;
    }
    printf("\n");

    // using for loop
    for (i=1; i<=10; i++) {
        printf("%d\t", i);
    }
    return 0;
}