#include <stdio.h>

int main(void) {
    int N, K;
    int sum = 0;

    scanf("%d %d", &N, &K);

    for(int i=K; i<=N; i+=K)
        sum += i;

    printf("%d의 배수 합: %d", K, sum);

    return 0;
}