#include <string.h>
#include <stdio.h>
#include <ctype.h> //提供isalpha函數


int main()
{
    int num = 0;
    char input[1000] = {};

    //scanf讀到空格即結束，因此使用gets，gets是讀到{ENTER}結束

    while(gets(input) != NULL) //因為input可能不只一行，因此gets()在while()裡面，可以反覆讀輸入值
    {
       for(int i=0; i<strlen(input); i++) //strlen，讀取input的長度
        {
            if(isalpha(input[i]) && !isalpha(input[i+1]))
            {
                num++;
            }
        }
        printf("%d\n", num);

        num = 0;
    }

    return 0;
}
