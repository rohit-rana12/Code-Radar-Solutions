#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        for (int j= n;j>i;j--){
            printf(" ");
        }
        for (int k = 0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=1;i<=n;i++){
        for (int j=i;j<n;j++){
            print(" ");
        }
        for(int k = 0;k<(2*i-1);k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}