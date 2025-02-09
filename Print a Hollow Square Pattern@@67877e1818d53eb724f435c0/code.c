#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);

    for (int i = 1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i==1){
                printf("*");
            }else if (i==n) {
                printf("*");
            }else{
                for (int k = 1;k<=j;k++){
                    if (j==1){
                        printf("*");
                        break;
                    } else if (j==n){
                        printf("*");
                        break;
                    } else {
                        printf(" ");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}