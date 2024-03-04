#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    scanf("%s",str);
    int len=strlen(str);
    int sum=0;
    for(int i=2;i<len;i++){
        int n;
        if(str[i]>='0'&&str[i]<='9')
            n=str[i]-'0';
        else 
            n=str[i]-'A'+10;
        sum=sum*16+n;
    }

    printf("%d",sum);
}
