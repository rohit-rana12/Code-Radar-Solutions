#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int x=0;x<n;x++){
        scanf("%d\n",&arr[x]);
    }
    for(int x=0;x<n;x++){
        printf("%d\n",arr[x]);
    }
    
}