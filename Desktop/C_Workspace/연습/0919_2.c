// 문제
// 0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 정수 N(0 ≤ N ≤ 20)이 주어진다.

// 출력
// 첫째 줄에 N!을 출력한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double fact(double n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * fact(n - 1);
}

int main()
{
    double N, result;
    scanf("%lf", &N);
    result = fact(N);

    printf("%.0lf", result);
    return 0;
}