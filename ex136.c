#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char word[30];
    int length;
    bool ispal = true;

    printf("�ܾ �Է��ϼ��� : ");
    scanf("%s", word);
    getchar();

    length = strlen(word);

    for(int i = 0; i < length / 2; i++)
    {
        if(word[i] != word[length - i - 1])
        {
            ispal = false;
            break;
        }
    }
    if(ispal)
    printf("ȸ���Դϴ�\n");
    else
        printf("ȸ���� �ƴմϴ�\n");

    return 0;
}
