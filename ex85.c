#include <stdio.h>

int main(){
  // �� ���� �ֻ����� ������ �� ���� ���� 6�� �Ǵ�
  //  ��� ����� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

  // [hint] ���� for��
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
