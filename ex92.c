#include <stdio.h>

int main()
{
    //���ڿ��� ���ڸ� ����Ǿ� �ִ��� ���ڵ� �����ִ��� �˾ƺ���

    char number[16] = "12O34";
    char ch = ' ';
    int flag = 1;

    for(int i = 0; i < 5; i++)
    {
        ch = number[i];
        if(!('0' <= ch && ch <= '9'))
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        {
            printf("%s �� �����Դϴ�\n", number);
        }
        else
        {
            printf("%s �� ���ڰ� �ƴմϴ�\n", number);
        }

    return 0;
}
