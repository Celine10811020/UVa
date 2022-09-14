#include <stdio.h>

struct information
{
    char web[100];
    int num;
}data[10];

int main()
{
    int cases, i, j, max= 0;

    scanf("%d", &cases);

    for(j=0; j<cases; j++)
    {
        for(i=0; i<10; i++)
        {
            if(scanf("%s", data[i].web) != EOF)
            if(scanf("%d", &data[i].num) != EOF)

            if(data[i].num > max)
            {
                max = data[i].num;
            }
        }

        printf("Case #%d: \n", j+1);

        for(i=0; i<10; i++)
        {
            if(data[i].num == max)
            {
                printf("%s\n", data[i].web);
            }
        }
    }

    return 0;
}
