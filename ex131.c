#include <stdio.h>
#include <string.h>

int main()
{
    //���ڿ� �ȿ� �ִ� ���� �˻��ϱ�
    //strchr(���ڿ�, �˻��� ����); sting.h �ȿ� ���ǵǾ� ����, ���ڸ� ã�� ��� �ش� ���ڷ� �����ϴ� ���ڿ��� �����͸� ��ȯ, ã�� ���Ѱ�� null�� ��ȯ
    char s1[30] = "A Tjaeun Academy";

    char *pointer1 = strchr(s1, 'a');

    while(pointer1 != NULL)// �˻��� ���ڰ� ������ ���� �ݺ�
    {
        printf("pointer1 : %s\n", pointer1);
        pointer1 = strchr(pointer1 + 1, 'a');
    }
    printf("-------------------\n");

    //strrchr() : r(right) ���ڿ� ���������� �˻���

    char s2[30] = "A java javascript";

    char *pointer2 = strrchr(s2, 'a');

    printf("pointer2 : %s\n", pointer2);
    printf("-------------------\n");

    //strstr(���ڿ�, ���ڿ�) ���ڿ� �ȿ��ִ� ���ڿ��� �˻�
    char s3[30] = "A java javascript";

    char *pointer3 = strstr(s3, "vas");

    printf("pointer3 : %s\n", pointer3);
    printf("-------------------\n");

    char s4[100] = "A java javascript A java javascript A java javascript";

    char *pointer4 = strstr(s4, "vas");

    while(pointer4 != NULL)
    {
        printf("pointer4 : %s\n", pointer4);
        pointer4 = strstr(pointer4 + 1, "vas");
    }
    printf("-------------------\n");

    char s5[30] = "Alice in Wonderland";

    char *pointer5 = strchr(s5, 'n');

    while(pointer5 != NULL)
    {
    printf("%s\n", pointer5);
    pointer5 = strchr(pointer5 + 1, 'n');
    }

    return 0;
}
