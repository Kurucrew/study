#include <string>
#include <vector>

using namespace std;
//로또의 최고순위와 최저순위를 알아내기
vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int z_cnt = 0, w_cnt = 0;//알수없는번호의 갯수와 우승번호와 일치하는 번호의 갯수를 저장하는 변수

    for (int i = 0; i < lottos.size(); i++)//로또번호의 크기만큼 반복
    {
        if (lottos[i] == 0)
        {
            z_cnt++;// 해당 자리의 로또번호가 0(알수없는번호) 라면 알수없는 번호의 갯수 1 증가
            continue;//아래의 반복문을 실행하지 않고 다시 처음의 반복문 실행
        }
        for (int j = 0; j < win_nums.size(); j++)//우승번호의 크기만큼 반복
        {
            if (win_nums[j] == lottos[i])// 로또번호와 우승번호를 각각 대조
            {
                w_cnt++;// 로또번호와 우승번호가 일치하면 우승번호의 갯수 1 증가
                break;
            }
        }
    }

    int max, min;// 최고등수와 최저등수를 저장하는 변수
    if (z_cnt + w_cnt < 2)//알수없는 번호와 우승번호의 갯수가 2개 미만이라면 등수를 6등으로 설정
        max = 6;
    else
        max = 7 - z_cnt - w_cnt;// 총 등수(0등은 존재하지 않기 때문에 1등부터 꽝 까지 총 6개 등수에 1을 더함) 에서 알수없는 번호와 우승번호의 갯수만큼 뺀 값을 최고등수에 저장

    if (w_cnt < 2)//우승번호의 갯수가 2개 미만이라면 등수를 6등으로 설정
        min = 6;
    else
        min = 7 - w_cnt;// 총 등수에서 우승번호의 갯수만큼 뺀 값을 최저등수에 저장

    answer.push_back(max);// 최고등수에 저장된 값을 answer에 반환
    answer.push_back(min);// 최저등수에 저장된 값을 answer에 반환

    return answer;
}