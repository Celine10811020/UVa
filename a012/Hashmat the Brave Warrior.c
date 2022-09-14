#include <stdio.h>

int main()
{
    long long numOne, numTwo, ans = 0; //題目給2^64，所以用long long。int：16位元、long：32位元

    while(scanf("%d %d", &numOne, &numTwo) != EOF) //NULL用於pointer，EOF用於一般輸入
    {
        ans = abs(numOne - numTwo);
        printf("%lld\n", ans); //因為宣告是long long，所以用%lld
    }

    return 0;
}
