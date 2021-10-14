#include <string>
#include <vector>
#include <algorithm>
//문자열을 큰 단어부터 작은단어까지 정렬 대문자는 소문자보다 작은 단어로 판단
using namespace std;

string solution(string s) {
    string answer = "";

    sort(s.begin(), s.end(), greater<char>());// sort 함수를 이용하면 정렬기능을 사용가능 기본적으로 begin 에서 end 까지 오름차수로 정렬 greater<자료형>() 을 이용해 내림차수로 정렬하도록 만듬
    //sort(s.rbegin(), s.rend()); begin과 end 앞에 r(revers)를 붙여 오름차수를 내림차수로 변경가능

    return s;
}