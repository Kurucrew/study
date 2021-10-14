#include <string>
#include <vector>
// 문자열 속에 숫자가 들어있으면 거짓 아니면 참
// 문자열은 4자리 또는 6자리 로 이루어져있음
using namespace std;

bool solution(string s) {
    bool answer = true;

    if (s.size() != 4 && s.size() != 6)//문자열이 4자리도아니고 6자리도 아닐경우 거짓을 반환
    {
        return false;
    }
    for (int i = 0; i < s.size(); i++)//문자열 크기만큼 반복
    {// isdigit:매개변수로 들어온 char 타입이 10진수 숫자로 변경이 가능하면 참 아니면 거짓을 반환
        if (isdigit(s[i]) == false)// 문자열중 하나라도 거짓이면 거짓을 반환
            return false;
    }
    return answer;
}