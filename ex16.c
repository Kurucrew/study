#include <stdio.h>
#define SIZE 20

int main()
{
    double left, right, average;//메모리에 해당이름의 더블 공간을 확보
    char name[SIZE], line[] ="------------------";

    label:
    printf("이름을 입력하세요 : ");
    fflush(stdin);//stdin = 표준 입력
    gets(name);// scanf("%s", name); 과 동일
    printf("왼쪽, 오른쪽 시력을 입력하세요 : ");
    scanf("%lf %lf", &left, &right);//공백을 기준으로 1,2번 변수를 결정 콘솔 입력시에도 공백을 줘야함
    average = (left+right)/2;
    printf("%s\n", line);
    printf("이름 : %s\n", name);//%~~ : 서식문자
    printf("평균 시력 : %.2f\n\n", average);

    goto label;//코드의 흐름을 해당 이름을 가진 곳으로 이동(반복문과 유사)
    return 0;
}
