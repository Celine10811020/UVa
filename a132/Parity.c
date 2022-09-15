#include <stdio.h>

int main()
{
    int input, i, temp, parity = 0;
    int result[1000] = {};

    while(scanf("%d", &input) && input != 0)
    {
        temp = 0;

        for(i=0; input>0; i++)
        {
            result[i] = input % 2;
            input = input / 2;
            temp++;
        }
        parity = 0;
        for(i=0; i<temp; i++)
        {
            if(result[i] == 1)
            {
                parity++;
            }
        }

        printf("The parity of ");
        for(i=temp-1; i>=0; i--)
        {
            printf("%d", result[i]);
        }
        printf(" is %d (mod 2).\n", parity);
    }

    return 0;
}
