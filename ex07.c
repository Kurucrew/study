#include <stdio.h>

int main()//main함수는 프로젝트에 한개만 존재가능
{
    int radius;
    float pi;

    printf("정수 하나와 실수 하나를 입력하세요(두 수 사이에 공백을 주세요)\n");
    scanf("%d %f",&radius, &pi);//입력한 값을 변수에 저장 &=뒤에 적은 이름의 변수의 주소를 알려줌
    printf("radius : %d, pi : %.2f\n", radius, pi);


    return 0;
}
