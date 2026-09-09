#include <stdio.h>

int gcd(int a, int b)
{
    int gcd = 1;
    int min = (a < b) ? a : b;
    for(int i = 1; i <= min; i++)
    {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }
    return gcd;
}

int main(void)
{
    int num1, num2;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD(%d %d) = %d\n", num1, num2, gcd(num1, num2));
    return 0;
}