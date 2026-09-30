# 57. 배수의 합 계산하기

**난이도:** ★★

## 문제

1부터 N까지의 수 중 K의 배수의 합을 계산해 출력하세요.

[입력] 정수 N K (공백 구분)
[출력]
(K)의 배수 합: (값)

## 내 코드

```c
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
```

## 모범 답안

```c
#include <stdio.h>
int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long s = 0;
    for (int i = 1; i <= n; i++)
        if (i % k == 0) s += i;
    printf("%d의 배수 합: %lld\n", k, s);
    return 0;
}
```

_해결일: 2026-09-30_