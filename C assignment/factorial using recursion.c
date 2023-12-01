#include<stdio.h>

int m(int n);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, m(n));
    return 0;
}

int m(int n) {
    if (n>=1)
        return n*m(n-1);
    else
        return 1;
}


