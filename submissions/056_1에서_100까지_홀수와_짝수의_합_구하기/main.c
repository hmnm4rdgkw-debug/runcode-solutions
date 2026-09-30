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