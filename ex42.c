#include <stdio.h>
/*
��Ʈ������
(0, 1)
& ��Ʈ and(����)
| ��Ʈ or(����)
^ ��Ʈ xor(��Ÿ�� ����) �Ѵ� ������� 0 �ٸ���� 1
~ ��Ʈ not (!�� ����)
<< ����Ʈ ����Ʈ������
>> ����Ʈ ����Ʈ������
&=
|=
^=
~=
<<=
>>=
*/
int main()
{
    int num1 = 10;// 1 0 1 0
    int num2 = 5;// 0 1 0 1

    int result = num1 & num2;
    //  1 0 1 0
    //  0 1 0 1
    //& 0 0 0 0
    printf("result : %d\n", result);//0

    result = num1 | num2;// ���� �̸��� ������ ���� �Ҷ��� Ÿ���� �������� ����
    //  1 0 1 0
    //  0 1 0 1
    //| 1 1 1 1
    printf("result : %d\n", result);//15

    result = num1 ^ num2;
    //  1 0 1 0
    //  0 1 0 1
    //^ 1 1 1 1
    printf("result : %d\n", result);

    result = ~num1 & num2;
    //  1 0 1 0
    //~ 0 1 0 1
    //  0 1 0 1
    //& 0 1 0 1
    printf("result : %d\n", result);

    return 0;
}
