#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j= n;j>i;j--){
            printf(" ");}
        for (int k = 0;k<(2*i-1);k++){
            printf("*");}
        printf("\n");}
    for (int x=n-1;x>=1;x++){
        for (int y=n;y>x;y--){
            printf(" ");}
        for (int z = 0;z<(2*x-1);z++){
            printf("*");}
        printf("\n");}
    return 0;
}