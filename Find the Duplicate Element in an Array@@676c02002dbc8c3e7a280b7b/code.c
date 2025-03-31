#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int x=0;x<n;x++){
        scanf("%d\n",&arr[x]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
                return 0;
            }
        }
    }
    
}