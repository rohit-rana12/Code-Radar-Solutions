#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    int trailing_zeroes=__builtin_ctz(num);
    printf("%d", trailing_zeroes);
    return 0;
}