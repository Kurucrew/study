#include <string>
#include <vector>
// ���ڿ� �ӿ� ���ڰ� ��������� ���� �ƴϸ� ��
// ���ڿ��� 4�ڸ� �Ǵ� 6�ڸ� �� �̷��������
using namespace std;

bool solution(string s) {
    bool answer = true;

    if (s.size() != 4 && s.size() != 6)//���ڿ��� 4�ڸ����ƴϰ� 6�ڸ��� �ƴҰ�� ������ ��ȯ
    {
        return false;
    }
    for (int i = 0; i < s.size(); i++)//���ڿ� ũ�⸸ŭ �ݺ�
    {// isdigit:�Ű������� ���� char Ÿ���� 10���� ���ڷ� ������ �����ϸ� �� �ƴϸ� ������ ��ȯ
        if (isdigit(s[i]) == false)// ���ڿ��� �ϳ��� �����̸� ������ ��ȯ
            return false;
    }
    return answer;
}