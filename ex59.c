#include <stdio.h>

int main()
{
    int num1, num2;
    char op;
    int result;

    printf("���� �� ���� �����ȣ�� �Է��ϼ��� : ");
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
        printf("+ - x / % �߿����� �Է��ϼ���\n");
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);
    printf("���α׷� ����");

    return 0;
}
