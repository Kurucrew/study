#include <stdio.h>

int main()
{
    char ch = 'a';

    char *str1 = "hello";// c에서는 string 이 없기 때문에 char의 포인터(char *변수이름)를 이용해서 저장한다

    printf("ch : %c\n", ch);

    printf("str1 : %s\n", str1);
    printf("str1의 주소 : %p\n", &str1);

    return 0;
}
