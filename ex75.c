#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1 = 0;
    bool flag = false;// �ܺιݺ����� ���������� �����ϴ� ����

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(num1 == 20)
            {
            flag = true;
            break;// if���� �߰�ȣ�� �����ϰ� �� ���� �߰�ȣ�� �����
            }
            num1++;
            printf("num1 : %d\n", num1);
        }
        printf("-------------\n");
        if(flag == true)
        {
        break;
        }
    }
    printf("num1 : %d\n", num1);

    return 0;
}
