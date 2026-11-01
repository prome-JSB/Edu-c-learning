#include <stdio.h>

int main() {
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    printf("Address of number :%p\n",&number);
    printf("Remainder when divided by 2 :%d\n",number %2);
    printf("Remainder when divided by 5:%d\n",number %5);
    return 0;
}
