#include <stdio.h>

int pick[10];
int result[1000000];

int main()
{
    int i, j;
    int stone, num;
    int left, win;

    while(scanf("%d", &stone) != EOF)
    {
        scanf("%d", &num);

        for(i=0; i<num; i++)
        {
            scanf("%d", &pick[i]);
        }

        for(i=1; i<=stone; i++)
        {
            win = 0;

            for(j=0; j<num; j++)
            {
                left = i - pick[j];

                if(left < 0)
                {
                    continue;
                }else if(left == 0)
                {
                    win = 1;

                    break;
                }else if(result[left] == 0)
                {
                    win = 1;

                    break;
                }
            }

            result[i] = win;
        }

        if(result[stone] == 1)
        {
            printf("Stan wins\n");
        }else
        {
            printf("Ollie wins\n");
        }
    }

    return 0;
}
