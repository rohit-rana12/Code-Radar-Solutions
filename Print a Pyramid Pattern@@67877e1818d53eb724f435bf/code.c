#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);

    for (int i = 1;i<=n;i++){
        for (int j =n;j>0; j--){
            printf("-");
        }
    }
    return 0;
}