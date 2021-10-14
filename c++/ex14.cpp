#include <string>
#include <vector>

using namespace std;
//�ζ��� �ְ������ ���������� �˾Ƴ���
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int z_cnt = 0, w_cnt = 0;//�˼����¹�ȣ�� ������ ��¹�ȣ�� ��ġ�ϴ� ��ȣ�� ������ �����ϴ� ����

    for (int i = 0; i < lottos.size(); i++)//�ζǹ�ȣ�� ũ�⸸ŭ �ݺ�
    {
        if (lottos[i] == 0)
        {
            z_cnt++;// �ش� �ڸ��� �ζǹ�ȣ�� 0(�˼����¹�ȣ) ��� �˼����� ��ȣ�� ���� 1 ����
            continue;//�Ʒ��� �ݺ����� �������� �ʰ� �ٽ� ó���� �ݺ��� ����
        }
        for (int j = 0; j < win_nums.size(); j++)//��¹�ȣ�� ũ�⸸ŭ �ݺ�
        {
            if (win_nums[j] == lottos[i])// �ζǹ�ȣ�� ��¹�ȣ�� ���� ����
            {
                w_cnt++;// �ζǹ�ȣ�� ��¹�ȣ�� ��ġ�ϸ� ��¹�ȣ�� ���� 1 ����
                break;
            }
        }
    }

    int max, min;// �ְ����� ��������� �����ϴ� ����
    if (z_cnt + w_cnt < 2)//�˼����� ��ȣ�� ��¹�ȣ�� ������ 2�� �̸��̶�� ����� 6������ ����
        max = 6;
    else
        max = 7 - z_cnt - w_cnt;// �� ���(0���� �������� �ʱ� ������ 1����� �� ���� �� 6�� ����� 1�� ����) ���� �˼����� ��ȣ�� ��¹�ȣ�� ������ŭ �� ���� �ְ����� ����

    if (w_cnt < 2)//��¹�ȣ�� ������ 2�� �̸��̶�� ����� 6������ ����
        min = 6;
    else
        min = 7 - w_cnt;// �� ������� ��¹�ȣ�� ������ŭ �� ���� ��������� ����

    answer.push_back(max);// �ְ����� ����� ���� answer�� ��ȯ
    answer.push_back(min);// ��������� ����� ���� answer�� ��ȯ

    return answer;
}