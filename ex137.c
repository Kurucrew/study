#include <stdio.h>
#include <string.h>

int main()
{
    //���ڿ��� �ϳ��� �̵��ϸ鼭 2���ھ� ���
    char text[30] = "hello";
    int length;

    length = strlen(text);

    for(int i = 0; i < length - 1; i++)
    {
        printf("%c%c\n", text[i], text[i + 1]);
    }

    return 0;
}
