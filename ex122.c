#include <stdio.h>

int main()
{
    char ch = 'a';

    char *str1 = "hello";// c������ string �� ���� ������ char�� ������(char *�����̸�)�� �̿��ؼ� �����Ѵ�

    printf("ch : %c\n", ch);

    printf("str1 : %s\n", str1);
    printf("str1�� �ּ� : %p\n", &str1);

    return 0;
}
