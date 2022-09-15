#include <stdio.h>

int main()
{
    int i, temp, count = 0;
    char input[10], name[10], result[10] = {};

    printf("         NAME                     SOUNDEX CODE\n");

    while(scanf("%s", input) != EOF)
    {
        temp = strlen(input);

        for(i=0; i<temp; i++)
        {
            name[i] = input[i];

            switch(input[i])
            {
                case 'B':
                case 'P':
                case 'F':
                case 'V':
                    input[i] = 1;
                    break;
                case 'C':
                case 'S':
                case 'K':
                case 'G':
                case 'J':
                case 'Q':
                case 'X':
                case 'Z':
                    input[i] = 2;
                    break;
                case 'D':
                case 'T':
                    input[i] = 3;
                    break;
                case 'L':
                    input[i] = 4;
                    break;
                case 'M':
                case 'N':
                    input[i] = 5;
                    break;
                case 'R':
                    input[i] = 6;
                    break;
                default:
                    input[i] = 0;
                    break;
            }
        }

        count = 1;
        for(i=1; i<temp+1; i++)
        {
            if(input[i] != 0 && input[i] != input[i-1])
            {
                result[count] = input[i];
                count++;
            }
        }

        for(i=4; i>count; i--)
        {
            result[i-1] = 0;

        }

        printf("         ");
        for(i=0; i<temp; i++)
        {
            printf("%c", name[i]);
        }
        temp = 25 - temp;
        for(i=0; i<temp; i++)
        {
            printf(" ");
        }
        printf("%c", name[0]);
        for(i=1; i<4; i++)
        {
            printf("%d", result[i]);
        }
        printf("\n");
    }
    printf("                   END OF OUTPUT");


    return 0;
}
