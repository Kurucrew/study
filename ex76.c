#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1 = 0;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(num1 == 20)
            {
            goto out;// if���� �߰�ȣ�� �����ϰ� �� ���� �߰�ȣ�� �����
            }
            num1++;
            printf("num1 : %d\n", num1);
        }
        printf("-------------\n");
    }
        /*
        if(flag == true)
        {
        break;
        }

    */
    out:
    printf("num1 : %d\n", num1);

    return 0;
}
