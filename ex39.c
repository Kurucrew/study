#include <stdio.h>

int main()
{
    int n1, n2;
    char op;
    int result;

    printf("두 정수와 부호를 입력하세요 : ");
    scanf("%d %d %c", &n1, &n2, &op);
    //fflush(stdin);


    result = (op == '+') ? (n1 + n2) : (op == '-') ? (n1 - n2) : (op == 'x') ? (n1 * n2) : (op == '/') ? (n1 / n2) : printf("부호를 확인해 주세요\n");
    printf("계산 결과 : %d\n", result);

    return 0;
}
