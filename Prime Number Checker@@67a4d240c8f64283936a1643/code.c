// #include <stdio.h>

int isPrime(int n){
    int i,count=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }

    return count;
}

int main(){
    int num;
    scanf("%d",&num);
    if(isPrime(num)==2){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}