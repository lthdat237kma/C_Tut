#include <stdio.h>
#include <math.h>

// Code by SLyyy


int main()
{
    int i, j, k, l, m;
    char c = '*';
    for (i = 1; i <= 5; i++)
        printf("\n"); 
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 32 - 2 * i; j++)
            printf(" "); 
        for (k = 1; k <= 4 * i + 1; k++)
            printf("%c", c);
        for (l = 1; l <= 13 - 4 * i; l++)
            printf(" ");
        for (m = 1; m <= 4 * i + 1; m++)
            printf("%c", c); 
        printf("\n");        
    }
    for (i = 1; i <= 3; i++)
    { 
        for (j = 1; j <= 24 + 1; j++)
            printf(" "); 
        for (k = 1; k <= 29; k++)
            printf("%c", c); 
        printf("\n");        
    }
    for (i = 7; i >= 1; i--)
    { //下7行
        for (j = 1; j <= 40 - 2 * i; j++)
            printf(" "); //左边的空格，每下一行左边的空格比上一行少2个//8*(n+1)-2*i
        for (k = 1; k <= 4 * i - 1; k++)
            printf("%c", c); //每下一行的字符小爱心比上一行少4个（这个循环是i--）
        printf("\n");        //每一行输出完毕换行
    }
    for (i = 1; i <= 39; i++)
        printf(" ");   //最后一行左边的空格
    printf("%c\n", c); //最后一个字符小爱心
    for (i = 1; i <= 5; i++)
        printf("\n"); //最后空出5行

    getchar(); // 防止控制台程序闪退
    return 0;
}
