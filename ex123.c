#include <stdio.h>

int main()
{
    char *str1 = "tjoeun";//문자열도 문자들의 배열 이기 때문에 각각의 문자에 인덱스 번호가 부여된다

    printf("str1[%d] : %c\n", 0, str1[0]);
    printf("str1[%d] : %c\n", 1, str1[1]);
    printf("str1[%d] : %c\n", 2, str1[2]);
    printf("str1[%d] : %c\n", 3, str1[3]);
    printf("str1[%d] : %c\n", 4, str1[4]);
    printf("str1[%d] : %c\n", 5, str1[5]);
    printf("str1[%d] : %c\n", 6, str1[6]);//c언어에서 문자열을 저장하면 끝에 null값을 저장하여 문자열이 끝났음을 알린다 따라서 6글자를 저장해도 7번째에 null값이 같이 저장이 된다

    printf("-------------------------------\n");

    //str1[3] = 'r'; 오류발생 (c에서 문자열은 한번 생성하면 그 값을 각각은 바꿀 수 없음)
    str1 = "tjorun";// 하지만 문자열을 새로 저장하는 것은 가능(왜냐하면 새로 저장하는 문자열은 다른 메모리 공간에 값을 저장한뒤 그 주소지를 저장하는 것이기 때문)

    for(int i = 0; i < 6; i++)
    {
        printf("%c", str1[i]);
    }

    printf("\n-------------------------------\n");

    int num[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        printf("num[%d] : %d\n", i, num[i]);
    }

    printf("-------------------------------\n");

    num[3] = 2222;

    for(int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        printf("num[%d] : %d\n", i, num[i]);
    }

    return 0;
}
