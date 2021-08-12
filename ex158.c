#include <stdio.h>
//매개변수로 포인터를 사용하기
void snum(int fir, int sec)
{
    printf("fir : %d, sec : %d\n", fir, sec);
    printf("-----------------\n");
    int cup = fir;
    fir = sec;
    sec = cup;
    printf("fir : %d, sec : %d\n", fir, sec);
    printf("-----------------\n");
}

void snum2(int *fir, int *sec)
{
    int cup = *fir;
    *fir = *sec;
    *sec = cup;
}

int main()
{

    int fir = 11;
    int sec = 22;

    snum(fir, sec);// 일반 변수를 함수의 매개변수로 사용했을때는 함수가 끝나면 매개변수로 사용했던 변수의 값이 변하지 않는다 (변수의 값을 복사해서 붙여 넣었기 때문)

    printf("fir : %d, sec : %d\n", fir, sec);
    printf("-----------------\n");

    snum2(&fir, &sec);// 포인터 변수를 함수의 매개변수로 사용할때는 함수가 끝나면 사용했던 변수의 값이 변한다 (변수의 주소를 복사해서 붙여넣었기 때문)

    printf("fir : %d, sec : %d\n", fir, sec);
    printf("-----------------\n");

    return 0;
}
