#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //���ڿ� �ڸ���
    //token ������ �ڸ�
    //strtok(��� ���ڿ�, ���ع���)

    char s1[30] = "tjoeun it academy";

    char *pointer1 = strtok(s1, " ");

    while(pointer1 != NULL)
    {
        printf("pointer1 : %s\n", pointer1);
        pointer1 = strtok(NULL, " ");// null �� �Է��ϸ� strtok���� �ڸ� ���� �������ڷ� �̵�
    }
    printf("---------------------------\n");

    //char *s1 = "tjoeun it academy"; �����ͷ� �����ϸ� �ڵ尡 �۵����� ����
    char *s2 = malloc(sizeof(char)*30);// malloc�� �̿��ϸ� ����

    strcpy(s2, "tjoeun it academy");

    char *pointer2 = strtok(s2, " ");

    while(pointer2 != NULL)
    {
        printf("pointer2 : %s\n", pointer2);
        pointer2 = strtok(NULL, " ");
    }
    free(s2);
    printf("---------------------------\n");

    //��¥�� �ð� �� �ڸ���
    char s3[30] = "2021-08-05T20:51:22";

    char *pointer3 = strtok(s3, "-T:");// ���ع��ڴ� �������� �ѹ��� ��� ����

    while(pointer3 != NULL)
    {
        printf("pointer3 : %s\n", pointer3);
        pointer3 = strtok(NULL, "-T:");
    }
    printf("---------------------------\n");

    char s4[30] = "tjoeun it academy";

    char *pointarr[10] = {NULL,};// ������ �迭 : ������ ���� �����ϴ� �迭

    int i = 0;

    char *pointer4 = strtok(s4, " ");

    while(pointer4 != NULL)
    {
        pointarr[i] = pointer4;
        i++;
        pointer4 = strtok(NULL, " ");
    }

    for(int j = 0; j < 10; j++)
    {
        if(pointarr[j] != NULL);
        {
            printf("pointarr[%d] : %s\n", j, pointarr[j]);
        }
    }

    return 0;
}
