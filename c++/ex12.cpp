#include <string>
#include <vector>
#include <algorithm>
//���ڿ��� ū �ܾ���� �����ܾ���� ���� �빮�ڴ� �ҹ��ں��� ���� �ܾ�� �Ǵ�
using namespace std;

string solution(string s) {
    string answer = "";

    sort(s.begin(), s.end(), greater<char>());// sort �Լ��� �̿��ϸ� ���ı���� ��밡�� �⺻������ begin ���� end ���� ���������� ���� greater<�ڷ���>() �� �̿��� ���������� �����ϵ��� ����
    //sort(s.rbegin(), s.rend()); begin�� end �տ� r(revers)�� �ٿ� ���������� ���������� ���氡��

    return s;
}