#include <stdio.h>
#include <time.h>

int algorithm1(int a, int b)
{
    int gcd = 1;
    for(int i = 1; i <= b; ++i)
    {
        if((a % i) == 0 && (b % i) == 0)
            gcd = i;
    }
    return gcd;
}

int algorithm2(int a, int b)
{
    while(b != 0)
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
    double cost1, cost2;
    clock_t start1, start2, finish1, finish2;

    start1 = clock();
    printf("GCD = %d\n", algorithm1(num1, num2));
    finish1 = clock();
    cost1 = (double)(finish1 - start1)/CLOCKS_PER_SEC;
    printf("Cost of algorithm1: %f\n", cost1);

    start2 = clock();
    printf("GCD = %d\n", algorithm2(num1, num2));
    finish2 = clock();
    cost2 = (double)(finish2 - start2)/CLOCKS_PER_SEC;
    printf("Cost of algorithm2: %f\n", cost2);
    
    return 0;
}