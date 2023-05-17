//WA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char word[10000000][50];
//char ans[1000000000];

int main()
{
    int i;
    int stop;
    int index, ziShu;
    int number, wei, found;
    //int ansIndex;
    char temp;

    for(i=0; i<10000000; i++)
    {
        word[i][1] = 2;
    }
    index = 0;
    number = 0;
    wei = 0;
    //ansIndex = 0;
    stop = 0;

    while(1)
    {
        scanf("%c", &temp);

        //printf("%d", temp);

        if(stop == 1)
        {
            break;
        }else if((temp>=65 && temp<=90) || (temp>=97 && temp<=122))
        {
            printf("%c", temp);
            //ans[ansIndex] = temp;
            //ansIndex++;

            ziShu = word[index][1];

            word[index][ziShu] = temp;

            word[index][1]++;
        }else if(temp>=48 && temp <=57)
        {
            number = number*pow(10, wei) + temp-48;

            wei++;
        }else
        {
            if(wei != 0)
            {
                if(number == 0)
                {
                    stop = 1;

                    break;
                }

                number = index - number + 1;

                for(i=0; i<index; i++)
                {
                    if(number == word[i][0])
                    {
                        found = i;

                        break;
                    }
                }

                for(i=2; i<word[found][1]; i++)
                {
                    printf("%c", word[found][i]);
                    //ans[ansIndex] = word[found][i];
                    //ansIndex++;
                }

                for(i=0; i<index; i++)
                {
                    if(word[i][0] > number)
                    {
                        word[i][0]--;
                    }
                }

                word[found][0] = index;
                number = 0;
                wei = 0;
            }
            if(ziShu != 0)
            {
                word[index][0] = index + 1;

                index++;
                ziShu = 0;
            }

            printf("%c", temp);
            //ans[ansIndex] = temp;
            //ansIndex++;

            //system("PAUSE");
        }


    }

    /*for(i=0; i<ansIndex; i++)
    {
        printf("%c", ans[i]);
    }*/

    return 0;
}
