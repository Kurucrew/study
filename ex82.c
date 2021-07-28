#include <stdio.h>


int main() {

    // 1+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+2+3+...+10) .
    // 의 결과를 출력하세요

    int sum = 0;
    int total = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
        total += sum;
    }

    printf("sum : %d\n", sum);
    printf("total : %d\n", total);

    return 0;
}
