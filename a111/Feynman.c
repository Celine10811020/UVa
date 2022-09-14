#include <stdio.h>

int main()
{
    int num, i, ans = 0;

    while(scanf("%d", &num) != EOF && num>0 && num<=100)
    {
        for(i=0; i<num+1; i++)
        {
            ans = ans + pow(i, 2);
        }

        printf("%d\n", ans);

        ans = 0;
    }

    return 0;
}
