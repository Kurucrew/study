#include <stdio.h>

int main()
{
    int scores[5] = {98, 86, 90, 72, 88};

    //배열변수는 실제 값들을 저장하는 것이 아니라 실제 값이 저장된 곳의 주소를 저장하는것

    int *scorespointer = scores;

    printf("scores : %p\n", scores);// 배열변수도 포인터의 일종이기 때문에 &를 붙이지 않아도 된다
    printf("scorespointer : %p\n", scorespointer);
    printf("*scorespointer : %d\n", *scorespointer);
    printf("*scores : %d\n", *scores);

    printf("size scorespointer : %d\n", sizeof(scorespointer));
    printf("size scores : %d\n", sizeof(scores));

    return 0;
}
