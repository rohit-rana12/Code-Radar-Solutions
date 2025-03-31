#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int x=0;x<n;x++){
        scanf("%d\n",&arr[x]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            int temp = arr[j]
            if(temp==arr[j+1]){
                printf("%d",temp);
                return 0;
            }
        }
    }
    
}