#include <stdio.h>

int main()
{
    int scores[7] = {79, 88, 91, 33, 100, 55, 95};
    //최고 성적, 최저 성적 구하기
    int max, min;
    //scores 배열에서 요소를 뽑아서 max 변수에 할당된 값과 비교해서 scores값이 크면 max에 할당 최소는 반대로 연산

    for(int i = 0; i < sizeof(scores) / sizeof(int); i++)
    {
        if(i == 0)
        {
            max = min = scores[i];
        }
        else
        {
            if(max < scores[i])
            {
            max = scores[i];
            }
            else if(min > scores[i])
            {
            min = scores[i];
            }
        }
    }

    printf("max : %d\n", max);
    printf("min : %d\n", min);

    return 0;
}
