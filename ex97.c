#include <stdio.h>

int main()
{
    //포인터 변수에는 메모리의 주소가 저장되어 있음 메모리 주소가 있는 곳으로 이동해서 그 공간에 할당되어 있는 데이터를 가져오고 싶을 때 사용하는 연산자(역참조 연산자)
    //참조 : reference <--> 역참조 : dereference

    int *pointnumber;
    int number = 11;

    pointnumber = &number;
    printf("number의 주소값 : %u\n", pointnumber);

    printf("1 %d\n", *pointnumber); // 포인터 변수를 선언한 뒤 변수의 주소를 할당하고 *변수이름 을 작성하게 되면 할당된 주소의 공간을 사용하겠다는 의미

    *pointnumber = 22;
    printf("2 %d\n", *pointnumber);
    printf("3 %d\n", number);

    return 0;
}
