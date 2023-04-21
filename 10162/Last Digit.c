#include <stdio.h>
#include <string.h>

int main()
{
    int lastDigit[20] = {0, 1, 5, 2, 8, 3, 9, 2, 8, 7, 7, 8, 4, 7, 3, 8, 4, 1, 5, 4};

    char num[100];
    char end[1] = {0};

    int value, length, ans, temp;

    while(1)
    {
        scanf("%s", num);

        length = strlen(num);

        if(length == 1)
        {
            value = num[length-1]-48;

            if(value == 0)
            {
                break;
            }
        }else
        {
            value = (num[length-2]-48)*10 + num[length-1]-48;
        }

        temp = value % 20;

        ans = lastDigit[temp];

        temp = value / 20;

        ans = ans + 4*(temp);

        printf("%d\n", ans%10);
    }


    return 0;
}
