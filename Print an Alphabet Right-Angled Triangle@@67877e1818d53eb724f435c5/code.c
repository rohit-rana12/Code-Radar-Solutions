#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    int n;
    scanf("%d",&n);

    for (int i = 1;i<=n;i++){
        a=65;
        for (int j = 1;j<=i;j++){
            printf("%c ",a);
            a+=1;
        }
        printf("\n");
    }
    return 0;
}