#include <string>
#include <vector>
// ������ ���̵𿡼� ���Ұ��� �ܾ ������ ���ο� ���̵� ��õ
using namespace std;

string solution(string new_id) {
    string answer = "";

    for (int i = 0; i < new_id.size(); i++)
    {
        if (new_id[i] >= 'A' && new_id[i] <= 'Z')
            new_id[i] = tolower(new_id[i]);// �빮�ڷ� �ۼ��� �ܾ���� �ҹ��ڷ� ġȯ
    }
    for (int i = 0; i < new_id.size();)
    {
        if ((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9') || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
        {
            i++;
            continue;// ���� �ڸ��� ���ڰ� ��� ������ ������ ��� �����ϰ� ����
        }
        new_id.erase(new_id.begin() + i);//��� �Ұ����� ������ ��� �ش� �ڸ��� ���ڸ� ����
    }
    for (int i = 0; i < new_id.size();)
    {
        if (new_id[i] == '.' && new_id[i - 1] == '.')
        {
            new_id.erase(new_id.begin() + i);//�ش� �ڸ��� ���ڿ� ���� �ڸ��� ���ڰ� �Ѵ� '.' �� ��� �ش� �ڸ��� ���ڸ� ����
            continue;
        }
        i++;
    }
    if (new_id.front() == '.')
    {
        new_id.erase(new_id.begin());//ù ���ڰ� '.' �� ��� �ش� ���� ����
    }
    if (new_id.back() == '.')
    {
        new_id.erase(new_id.end() - 1);//������ ���ڰ� '.' �� ��� �ش� ���� ���� string.end():(���ڿ��� �������� �ٷ� ������ ����Ų��)�� �ش��ϴ� ���ڴ� null���� �̹Ƿ� -1�� ���־�� �������� �䱸�ϴ� ������ ���ڸ� ������ �� �ִ�
    }
    if (new_id.size() == 0)// ���ο� ���̵� �� ���ڿ� �̶�� "a"�� �Է�
    {
        new_id = "a";
    }
    if (new_id.size() >= 16)
    {
        while (new_id.size() != 15) // ���ڿ��� ũ�Ⱑ 16 �̻��̸� while���� �����϶����� �ݺ�
        {
            new_id.erase(new_id.begin() + 15);// 16��° ���ڸ� ����(��ǻ�� ���� 0���� �����ϹǷ� 15�� �� 16��° �����̴�) 
        }
    }
    if (new_id.back() == '.')
    {
        new_id.erase(new_id.end() - 1);// ���� ������ ��ģ�� ������ ���ڰ� '.'�̸� �ش� ���� ����
    }
    if (new_id.size() <= 2)
    {
        while (new_id.size() != 3) //���ڿ��� ũ�Ⱑ 2�� �����̸� 3�� �̻��� �ɶ����� ������ ���ڸ� �߰�
        {
            new_id += new_id.back();
        }
    }
    answer = new_id;
    return answer;
}