#include <stdio.h>

int prime[10000];

int main()
{
    int i, j;
    int num;
    int isPrime, index;
    int sum, ans;

    index = 0;

    for(i=2; j<=10000; i++)
    {
        isPrime = 1;

        for(j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                isPrime = 0;

                break;
            }
        }

        if(isPrime)
        {
            prime[index] = i;

            index++;
        }
    }

    while(1)
    {
        scanf("%d", &num);

        ans = 0;

        if(num == 0)
        {
            break;
        }

        for(j=0; j<index; j++)
        {
            if(prime[j] > num)
            {
                break;
            }else if(prime[j] == num)
            {
                ans++;
                break;
            }

            sum = 0;

            for(i=j; i<index; i++)
            {
                sum = sum + prime[i];

                if(num == sum)
                {
                    ans++;
                    break;
                }else if(sum > num)
                {
                    break;
                }
            }
        }

        printf("%d\n", ans);
    }


    return 0;
}
