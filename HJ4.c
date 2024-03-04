#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    while (scanf("%8s",str)!=EOF) {
            int len=8-strlen(str);
            printf("%s",str);
            for(int i=0;i<len;i++)
            printf("%c",'0');
            printf("%c",'\n');
    }
}
