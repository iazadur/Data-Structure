#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sumEven = 0, sumOdd = 0;

    for (int i=0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumEven = sumEven + arr[i];
        }
        else
        {
            sumOdd = sumOdd + arr[i];
        }
    }
    printf("%d %d", sumEven, sumOdd);

    return 0;
}