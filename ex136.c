#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char word[30];
    int length;
    bool ispal = true;

    printf("단어를 입력하세요 : ");
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
    printf("회문입니다\n");
    else
        printf("회문이 아닙니다\n");

    return 0;
}
