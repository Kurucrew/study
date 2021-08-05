#include <stdio.h>

int main()
{
    int size;

    printf("배열의 크기를 입력하세요 : ");
    scanf("%d", &size);

    int arrnum[size];

    printf("size arrnum : %d\n", sizeof(arrnum));
    printf("arrnum 배열의 요소의 개수 : %d\n", sizeof(arrnum) / sizeof(int));

    return 0;
}
