#include <stdio.h>
#include <string.h>

int main() {
   char str[5000];
   scanf("%[^\n]",str);
   int len=strlen(str);
   int length=0;
   for(int i=len-1;i>=0;i--)
   {
        if(str[i]!=' ')
        length++;
        else break;
   }
   printf("%d",length);
   return 0;
}