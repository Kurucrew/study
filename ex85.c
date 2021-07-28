#include <stdio.h>

int main(){
  // 두 개의 주사위를 던졌을 때 눈의 합이 6이 되는
  //  모든 경우의 수를 출력하는 프로그램을 작성하시오

  // [hint] 이중 for문
	int i = 1;
	int j = 1;
	int sum = 0;
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= 6; j++)
		{
			if (i + j == 6)
			{
				sum = i + j;
				printf("%d + %d : %d\n", i, j, sum);
			}
		}
	}

  return 0;
}
