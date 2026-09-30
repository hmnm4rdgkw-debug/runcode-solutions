# 65. 구구단 출력하기

**난이도:** ★★

## 문제

단 수 N(2~9)을 입력받아 N단 구구단을 출력하세요.

[입력] 정수 N (2~9)
[출력]
(N) * 1 = (값)
(N) * 2 = (값)
(...9까지)

## 내 코드

```c
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for(int i=1; i<=9; i++)
        printf("%d * %d = %d\n", N, i, N*i);
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
    for (int i = 1; i <= 9; i++)
        printf("%d * %d = %d\n", n, i, n * i);
    return 0;
}
```

_해결일: 2026-09-30_