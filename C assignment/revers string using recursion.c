#include <stdio.h>
void r();
int main() {
    printf("Enter a sentence: ");
    r();
    return 0;
}

void r() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        r();
        printf("%c", c);
    }
}


