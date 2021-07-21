#include <stdio.h>
/*
비트연산자
(0, 1)
& 비트 and(논리곱)
| 비트 or(논리합)
^ 비트 xor(배타적 논리합) 둘다 같을경우 0 다를경우 1
~ 비트 not (!과 유사)
<< 레프트 쉬프트연산자
>> 라이트 쉬프트연산자
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

    result = num1 | num2;// 같은 이름의 변수를 재사용 할때는 타입을 적어주지 않음
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
