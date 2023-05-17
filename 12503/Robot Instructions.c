#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int record[101];

int main()
{
    int i, j, temp;
    int num, step;
    int position;
    char instruction[6];

    scanf("%d", &num);

    for(i=0; i<num; i++)
    {
        scanf("%d", &step);

        position = 0;

        for(j=1; j<=step; j++)
        {
            scanf("%s", instruction);

            if(instruction[0] == 'L')
            {
                position--;
                record[j] = -1;
            }else if(instruction[0] == 'R')
            {
                position++;
                record[j] = 1;
            }else
            {
                scanf("%s", instruction);
                scanf("%d", &temp);

                record[j] = record[temp];

                position = position + record[temp];
            }
        }
        printf("%d\n", position);
    }

    return 0;
}
