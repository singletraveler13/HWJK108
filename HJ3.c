#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main()
{
    int n;
     
    int a;
    
    //以数组下标来存储随机数，下标对应的数组值为1，来说明是否是存储的随机数
        scanf("%d", &n);
    
        int count[1001] = {0};
		int i;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a);
            count[a] = 1;
        }
        for (i = 0; i < 1001; i++)
        {
            if (count[i] == 1)
            {
                printf("%d\n", i);
            }
        }
    
     
    return 0;
}
