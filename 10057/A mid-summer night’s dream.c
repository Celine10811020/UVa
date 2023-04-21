#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void merge(int head, int mid, int tail);
void mergeSort(int head, int tail);

int number[1000000];

int main()
{
    int i;
    int num, index;
    int midOne, midTwo, ans;

    while(scanf("%d", &num) != EOF)
    {
        for(i=0; i<num; i++)
        {
            scanf("%d", &number[i]);
        }

        mergeSort(0, num-1);

        if(num%2 == 0)
        {
            midOne = (num-1) / 2;
            midTwo = num / 2;

            printf("%d ", number[midOne]);

            ans = 0;
            for(i=0; i<num; i++)
            {
                if(number[i]==number[midOne] || number[i]==number[midTwo])
                {
                    ans++;
                }
            }

            printf("%d ", ans);

            ans = number[midTwo] - number[midOne] + 1;

            printf("%d \n", ans);
        }else
        {
            midOne = (num-1) / 2;

            printf("%d ", number[midOne]);

            ans = 0;
            for(i=0; i<num; i++)
            {
                if(number[i]==number[midOne])
                {
                    ans++;
                }
            }

            printf("%d 1\n", ans);
        }
    }


    return 0;
}

void merge(int head, int mid, int tail)
{
    int lenA = mid - head + 1;
    int lenB = tail - mid;

    int *leftSub = (int*)malloc(sizeof(int)*(lenA+1));
    int *rightSub = (int*)malloc(sizeof(int)*(lenB+1));

    int leftIndex, rightIndex;

    for(leftIndex=0; leftIndex<lenA; leftIndex++)
    {
        leftSub[leftIndex] = number[leftIndex + head];
    }
    for(rightIndex=0; rightIndex<lenB; rightIndex++)
    {
        rightSub[rightIndex] = number[rightIndex + mid + 1];
    }

    leftSub[lenA] = 2147483647;
    rightSub[lenB] = 2147483647;

    leftIndex = 0;
    rightIndex = 0;

    int writePointer;
    for(writePointer=head; writePointer<=tail; writePointer++)
    {
        if(leftSub[leftIndex] <= rightSub[rightIndex])
        {
            number[writePointer] = leftSub[leftIndex];
            leftIndex++;
        }else
        {
            number[writePointer] = rightSub[rightIndex];
            rightIndex++;
        }
    }

    free(leftSub);
    free(rightSub);
}

void mergeSort(int head, int tail)
{
    int mid;

    if(head < tail)
    {
        mid = (head+tail) / 2;

        mergeSort(head, mid);
        mergeSort(mid+1, tail);

        merge(head, mid, tail);
    }
}
