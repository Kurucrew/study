#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union box
{
    short candy;//2byte
    float snack;//4byte
    char doll[8];//8byte
};

int main()
{
    //공용체 변수선언
    union box b1;

    printf("공용체의 크기 : %d byte\n", sizeof(b1));

    strcpy(b1.doll, "tjoeun");
    printf("b1.doll : %s\n", b1.doll);// 공용체는 해당 구조체에 포함된 제일 큰 타입의 자료형의 공간을 공유하기때문에 한번에 한가지의 자료만 처리 가능하다

    b1.candy = 1;
    printf("b1.candy : %d\n", b1.candy);

    b1.snack = 2.3542f;
    printf("b1.snack : %.2f\n", b1.snack);

    return 0;
}
