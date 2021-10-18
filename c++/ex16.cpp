#include <string>
#include <vector>
// 영단어를 숫자로 변경하기
using namespace std;

string word[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };//0~9 까지에 해당하는 영단어를 인덱스로 생성

int solution(string s) {
    string result;

    for (int i = 0; i < s.size();)//문자열의 크기만큼 반복
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            result += s[i];//숫자로된 문자라면 결과값에 추가 후 다음 문자로 넘어감
            i++;
        }
        else
        {
            for (int j = 0; j < 10; j++)
            {
                if (s.find(word[j], i) == i)// i(문자열의 현재 위치) 에서부터 탐색을 시작해 매칭된 문자의 시작점의 반환값이 i와 같은지 확인
                {
                    result += '0' + j;// 매칭된 인덱스 위치값 만큼 문자'0'에 더한뒤(아스키 코드 0~9 의 문자들은 1씩 증가하는 순서로 되어있으므로 각 숫자의 아스키 코드를모르더라도 문자'0'에 0~9까지의 숫자를 더하는걸로 해당 문자를 도출 가능) 결과값에 추가
                    i += word[j].length();//매칭된 영단어의 길이만큼 위치이동
                    break;
                }
            }
        }
    }
    int answer = atoi(result.c_str());// 문자열을 atoi를 이용해 int 형식으로 변환
    return answer;
}

/*
#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    s = regex_replace(s, regex("zero"), "0"); // 변환된 문자열을 대입할 변수 = regex_replace(대상 문자열, 찾을 문자열, 변환할 문자열)
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