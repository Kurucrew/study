#include <stdio.h>

int main()
{
    int size;

    printf("배열의 크기를 입력하세요 : ");
    scanf("%d", &size);

    int *npointer = malloc(sizeof(int) * size);// (int 타입의 크기 * 입력받은 값) 만큼 동적메모리 할당

    for(int i = 0; i < size; i++)// 입력받은 크기 만큼 반복
    {
        npointer[i] = i + 1;// 인덱스로 접근해서 값을 할당
    }

    for(int i = 0; i < size; i++)
    {
        printf("npointer[%d] : %d\n", i, npointer[i]);// 인덱스로 접근해서 값을 출력
    }

    free(npointer);//함수를 호출해서 할당한 메모리를 해제

    return 0;
}
