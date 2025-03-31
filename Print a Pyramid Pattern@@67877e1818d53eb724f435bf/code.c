#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    int b=a;
    for(int i=0;i<a;i++){
        for(int k=b;k>=0;k--){
            printf(" ");
            b--;
        }
        for(int j=0;j<((2*i)+1);j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}