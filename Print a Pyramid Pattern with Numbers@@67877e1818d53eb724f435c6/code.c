#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for (int i=1;i<=n;i++){
        for(int j=0;j<=n-1-i;j++){
            printf(" ");
        }
        for(int k=1;k<i+2;k++){
            printf("%d ",k);
            k+=1;
        }
        printf("\n");
    }
    return 0;
}