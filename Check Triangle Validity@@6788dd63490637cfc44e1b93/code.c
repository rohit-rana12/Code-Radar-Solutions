#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
   if(a+b>c&&a+c>b&&b+c>a){
    printf("Valid");
   }else{
    printf("Invalid");
   }
    return 0;
}