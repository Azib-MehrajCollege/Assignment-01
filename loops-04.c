#include <stdio.h> 
int main() {
    // sum of N natural numbers 
    int n, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++) {
        sum+=i;
    }
    printf("Sum is %d", sum);

    printf("\n");


    // print 5 star line
    for (int i=0; i<5; i++) {
        printf("*\n");
    }
    return 0;
}