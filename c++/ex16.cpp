#include <string>
#include <vector>
// ���ܾ ���ڷ� �����ϱ�
using namespace std;

string word[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };//0~9 ������ �ش��ϴ� ���ܾ �ε����� ����

int solution(string s) {
    string result;

    for (int i = 0; i < s.size();)//���ڿ��� ũ�⸸ŭ �ݺ�
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result += s[i];//���ڷε� ���ڶ�� ������� �߰� �� ���� ���ڷ� �Ѿ
            i++;
        }
        else
        {
            for (int j = 0; j < 10; j++)
            {
                if (s.find(word[j], i) == i)// i(���ڿ��� ���� ��ġ) �������� Ž���� ������ ��Ī�� ������ �������� ��ȯ���� i�� ������ Ȯ��
                {
                    result += '0' + j;// ��Ī�� �ε��� ��ġ�� ��ŭ ����'0'�� ���ѵ�(�ƽ�Ű �ڵ� 0~9 �� ���ڵ��� 1�� �����ϴ� ������ �Ǿ������Ƿ� �� ������ �ƽ�Ű �ڵ带�𸣴��� ����'0'�� 0~9������ ���ڸ� ���ϴ°ɷ� �ش� ���ڸ� ���� ����) ������� �߰�
                    i += word[j].length();//��Ī�� ���ܾ��� ���̸�ŭ ��ġ�̵�
                    break;
                }
            }
        }
    }
    int answer = atoi(result.c_str());// ���ڿ��� atoi�� �̿��� int �������� ��ȯ
    return answer;
}

/*
#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    s = regex_replace(s, regex("zero"), "0"); // ��ȯ�� ���ڿ��� ������ ���� = regex_replace(��� ���ڿ�, ã�� ���ڿ�, ��ȯ�� ���ڿ�)
    s = regex_replace(s, regex("one"), "1");
    s = regex_replace(s, regex("two"), "2");
    s = regex_replace(s, regex("three"), "3");
    s = regex_replace(s, regex("four"), "4");
    s = regex_replace(s, regex("five"), "5");
    s = regex_replace(s, regex("six"), "6");
    s = regex_replace(s, regex("seven"), "7");
    s = regex_replace(s, regex("eight"), "8");
    s = regex_replace(s, regex("nine"), "9");
    return stoi(s);
}
*/