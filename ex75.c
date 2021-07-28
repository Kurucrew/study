#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num1 = 0;
    bool flag = false;// 외부반복문을 빠져나올지 결정하는 변수

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(num1 == 20)
            {
            flag = true;
            break;// if문의 중괄호는 무시하고 그 위의 중괄호를 벗어난다
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
