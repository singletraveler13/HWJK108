#include <stdio.h>
int HashTable[11111112] = {0};
int main() {
     
    int Num = 0;
    scanf("%d",&Num);
  
    for(int i = 0;i< Num;i++)
    {
        int IndexTemp ,ValueTemp ;
        scanf("%d %d",&IndexTemp,&ValueTemp);
        HashTable[IndexTemp] += ValueTemp;
         
    }
    for(int i = 0;i < 11111112;i++)
    {
        if(HashTable[i] != 0)
        {
            printf("%d %d\n",i,HashTable[i]);
        }
    }
    return 0;
}