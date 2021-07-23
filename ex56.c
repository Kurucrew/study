#include <stdio.h>

int main()
{
    int month;
    int date;
    int year;

    printf("년도와 개월수를 입력하세요 : ");
    scanf("%d %d", &year, &month);

    switch(month)
    {
    case 1: case 3: case 5: case 7:
    case 8: case 10: case 12:
        date = 31;
        break;

    case 4: case 6:
    case 9: case 11:
        date = 30;
        break;

    case 2:
        {
            if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//윤년 계산 4로 나누어 떨어지면서 100으로는 나누어 떨어지지 않고 400으로는 나누어 떨어지는 년도
            {
            date = 29;
            }
            else
            {
            date = 28;
            }
        }
        break;

    default:
        printf("개월수를 정확히 입력해 주세요\n");
    }


    printf("%d년 %d월은 %d일까지 있습니다\n", year, month, date);
    printf("프로그램 종료");

    return 0;
}
