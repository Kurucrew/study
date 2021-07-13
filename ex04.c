/*
총점과 평균 출력하기
*/
#include <stdio.h>

int main()
{
    int kor, eng, math;
    int total;
    double average;

    kor = 90;
    eng = 90;
    math = 91;

    total = kor+eng+math;
    average = (double)total/3;//average = total/3.0; 이렇게 해도 더블로 판단




    printf("국어 : %3d\t영어 : %3d\t수학 : %3d\n", kor, eng, math);//d앞의 숫자는 숫자를 해당 자릿수 까지만 출력하겠다는 의미
    printf("-----------------------------------------------------\n");
    printf("총점 : %3d\t평균 : %3.2f\n", total, average);



    return 0;
}
