#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void)
{
    int num1, num2;
    printf("두 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);
    printf("GCD(%d %d) = %d\n", num1, num2, gcd(num1, num2));
    return 0;
}