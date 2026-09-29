# 55. 1에서 100까지 숫자 더하기

**난이도:** ★★

## 문제

1부터 N까지 모든 정수의 합을 반복문으로 계산해 출력하세요.

[입력] 정수 N (1 이상)
[출력]
(1부터 N까지의 합)

## 내 코드

```c
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int s = 0;
    for (int i = 1; i <= n; i++) 
        s += i;
    printf("%d", s);
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
    long long s = 0;
    for (int i = 1; i <= n; i++) s += i;
    printf("%lld\n", s);
    return 0;
}
```

_해결일: 2026-09-29_