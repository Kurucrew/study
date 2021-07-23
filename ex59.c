#include <stdio.h>

int main()
{
    int num1, num2;
    char op;
    int result;

    printf("정수 두 개와 연산부호를 입력하세요 : ");
    scanf("%d %d %c", &num1, &num2, &op);

    switch(op)
    {
    case '+':
        result = num1 +num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case 'x':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        result = num1 % num2;
        break;
    default:
        printf("+ - x / % 중에서만 입력하세요\n");
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);
    printf("프로그램 종료");

    return 0;
}
