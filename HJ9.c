#include <stdio.h>

int main() {
     int n;
     scanf("%d",&n);
     int arr[10]={0};

     while(n!=0){
        int a=n%10;
        if(arr[a]!=1){
            printf("%d",a);
            arr[a]=1;
        }
        n=n/10;
     }

    return 0;
}