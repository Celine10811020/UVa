#include <stdio.h>

int main()
{
    long long numOne, numTwo, ans = 0; //�D�ص�2^64�A�ҥH��long long�Cint�G16�줸�Blong�G32�줸

    while(scanf("%d %d", &numOne, &numTwo) != EOF) //NULL�Ω�pointer�AEOF�Ω�@���J
    {
        ans = abs(numOne - numTwo);
        printf("%lld\n", ans); //�]���ŧi�Olong long�A�ҥH��%lld
    }

    return 0;
}
