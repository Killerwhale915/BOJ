// 문제
// 자연수 \(N\)과 정수 \(K\)가 주어졌을 때 이항 계수
// \(\binom{N}{K}\)를 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 \(N\)과 \(K\)가 주어진다. (1 ≤ \(N\) ≤ 10, 0 ≤ \(K\) ≤ \(N\))

// 출력

// \(\binom{N}{K}\)를 출력한다.

#include <stdio.h>
int main()
{
    int N, K;
    int result1 = 1;
    int result2 = 1;
    int result3 = 1;
    int result = 0;

    scanf("%d %d", &N, &K);

    for (int i = 1; i < N + 1; i++)
    {
        result1 = i * result1;
    }

    for (int j = 1; j < K + 1; j++)
    {
        result2 = j * result2;
    }
    for (int k = 1; k < N - K + 1; k++)
    {

        result3 = result3 * k;
    }

    result = result1 / (result2 * result3);
    printf("%d\n", result);
}