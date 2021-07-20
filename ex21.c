#include <stdio.h>
// 문제 : 333을 입력하면 331이 출력되고 777을 입력하면 771이 출력되게 코드를 작성하세요
int main()
{
    int num;
    printf("수치를 입력하세요 :");
    scanf("%d", &num);

    num = num / 100;
    num = num * 110;
    num = num + 1;

    printf("%d", num);

    /*
    해답
    int num;
    printf("수치를 입력하세요 :");
    scanf("%d", &num);

    printf("결과 : %d\n", num / 10 * 10 + 1);
    */

    return 0;
}
