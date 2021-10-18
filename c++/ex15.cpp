#include <string>
#include <vector>
// 생성된 아이디에서 사용불가인 단어를 제외한 새로운 아이디 추천
using namespace std;

string solution(string new_id) {
    string answer = "";

    for (int i = 0; i < new_id.size(); i++)
    {
        if (new_id[i] >= 'A' && new_id[i] <= 'Z')
            new_id[i] = tolower(new_id[i]);// 대문자로 작성된 단어들을 소문자로 치환
    }
    for (int i = 0; i < new_id.size();)
    {
        if ((new_id[i] >= 'a' && new_id[i] <= 'z') || (new_id[i] >= '0' && new_id[i] <= '9') || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')
        {
            i++;
            continue;// 해장 자리의 문자가 사용 가능한 문자일 경우 무시하고 진행
        }
        new_id.erase(new_id.begin() + i);//사용 불가능한 문자일 경우 해당 자리의 문자를 삭제
    }
    for (int i = 0; i < new_id.size();)
    {
        if (new_id[i] == '.' && new_id[i - 1] == '.')
        {
            new_id.erase(new_id.begin() + i);//해당 자리의 문자와 이전 자리의 문자가 둘다 '.' 일 경우 해당 자리의 문자를 삭제
            continue;
        }
        i++;
    }
    if (new_id.front() == '.')
    {
        new_id.erase(new_id.begin());//첫 글자가 '.' 일 경우 해당 문자 삭제
    }
    if (new_id.back() == '.')
    {
        new_id.erase(new_id.end() - 1);//마지막 글자가 '.' 일 경우 해당 문자 삭제 string.end():(문자열의 마지막의 바로 다음을 가르킨다)에 해당하는 문자는 null문자 이므로 -1을 해주어야 문제에서 요구하는 마지막 문자를 삭제할 수 있다
    }
    if (new_id.size() == 0)// 새로운 아이디가 빈 문자열 이라면 "a"를 입력
    {
        new_id = "a";
    }
    if (new_id.size() >= 16)
    {
        while (new_id.size() != 15) // 문자열의 크기가 16 이상이면 while문이 거짓일때까지 반복
        {
            new_id.erase(new_id.begin() + 15);// 16번째 문자를 삭제(컴퓨터 언어는 0부터 시작하므로 15는 즉 16번째 문자이다) 
        }
    }
    if (new_id.back() == '.')
    {
        new_id.erase(new_id.end() - 1);// 위의 과정을 거친뒤 마지막 문자가 '.'이면 해당 문자 삭제
    }
    if (new_id.size() <= 2)
    {
        while (new_id.size() != 3) //문자열의 크기가 2자 이하이면 3자 이상이 될때까지 마지막 문자를 추가
        {
            new_id += new_id.back();
        }
    }
    answer = new_id;
    return answer;
}