#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct point
{
    int x;
    int y;
};

int main()
{
    //����ü Ÿ���� �迭 ����
    struct point p1[3];// ����ü�� �ּҰ� �迭�� �����ȴ�

    p1[0].x = 11;
    p1[0].y = 12;
    p1[1].x = 11;
    p1[1].y = 12;
    p1[2].x = 11;
    p1[2].y = 12;

    for(int i = 0; i < 3; i++)
    {
        printf("p1[%d].x : %d, p1[%d].y :%d\n", i, p1[i].x, i, p1[i].y);
    }
    printf("---------------------\n");

    //����ü �迭�� ����� ���ÿ� �ʱ�ȭ
    struct point p2[3] = {{.x = 31, .y = 32}, {.x = 33, .y = 34}, {.x = 35, .y = 36}};

    for(int i = 0; i < 3; i++)
    {
        printf("p2[%d].x : %d, p2[%d].y :%d\n", i, p2[i].x, i, p2[i].y);
    }
    printf("---------------------\n");

    struct point p3[3] = {{1, 2}, {3, 4}, {5, 6}};// ����� ���ÿ� �ʱ�ȭ �� ��쿡�� ���� ��ġ�� �������� �ʾƵ� �ȴ�

    for(int i = 0; i < 3; i++)
    {
        printf("p3[%d].x : %d, p3[%d].y :%d\n", i, p3[i].x, i, p3[i].y);
    }
    printf("---------------------\n");
// ����ü �ɹ� ���θ� 0���� �ʱ�ȭ
    struct point p4[3] = {0,};

    for(int i = 0; i < 3; i++)
    {
        printf("p4[%d].x : %d, p4[%d].y :%d\n", i, p4[i].x, i, p4[i].y);
    }
    printf("---------------------\n");

    return 0;
}
