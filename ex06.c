#include <stdio.h>

int main()
{
    printf("\"너 자신을 알라\" 라고 소크라테스는 말했다\n");
    printf("일이 70%% 진행됨\n");
    printf("C:\\temporary 폴더에 복사하기\n");
    printf("\n");
    printf("교통비\t: %5d\n", 50000);
    printf("잡비\t: %5d\n", 2200);//d앞의 숫자가 양수일 경우 우측정렬 음수일 경우 좌측정렬
    printf("잡비\t: %-5d\n", 2200);

    return 0;

}
