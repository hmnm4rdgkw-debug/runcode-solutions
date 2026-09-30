# 56. 1에서 100까지 홀수와 짝수의 합 구하기

**난이도:** ★★

## 문제

1부터 N까지의 수 중 홀수의 합과 짝수의 합을 각각 계산해 출력하세요.

[입력] 정수 N (1 이상)
[출력]
홀수 합: (값)
짝수 합: (값)

## 내 코드

```c
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int s = 0;
    int s1 = 0;

    for (int i = 1; i <= n; i++) 
        if(i%2==0)
            s += i;
        else
            s1 += i;
    printf("홀수 합: %d \n", s1);
    printf("짝수 합: %d", s);
    return 0;
}
```

## 모범 답안

```c
#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    long long odd = 0, even = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) odd += i;
        else even += i;
    }
    printf("홀수 합: %lld\n", odd);
    printf("짝수 합: %lld\n", even);
    return 0;
}
```

_해결일: 2026-09-30_