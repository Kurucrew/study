#include <stdio.h>

int main()
{
    int sum = 0;
    int i;// 변수를 선언하고 최초로 값을 저장하는것을 초기화라 부름
    for(i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("1부터 %d까지의 합은 %d입니다\n", i - 1, sum);

    /*
    int sum = 0;
    for(int i = 1; i <= 10; i++) for문이 시작될때 int i가 선언되고 for문이 끝나면 int i 가 사라진다
    {
        sum += i;
    }
    printf("1부터 %d까지의 합은 %d입니다\n", i - 1, sum); int i 가 사라졌기 때문에 오류가 발생한다
    */

    return 0;
}
