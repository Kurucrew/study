#include "Control.h"

void main()
{
	Control Ctr;
	int Select = 0;
	bool Run = true;
	Ctr.CheckFile();//파일의 유무를 체크한다
	cout << fixed;
	cout.precision(2);
	while (Run)
	{
		system("cls");
		cout << "			==================" << endl;
		cout << "			=학생 관리 시스템=" << endl;
		cout << "			==================" << endl;
		cout << "---------------------------------------------------------------" << endl;
		cout << "\n추가(0),수정(1),저장(2),불러오기(3),출력(4),삭제(5),종료(9) : ";
		cin >> Select;

		switch (Select)
		{
			case 0: {
				cout << "---------------------------------------------------------------" << endl;
				cout << "취소하시려면 00 을 입력하세요" << endl;
				Ctr.Add();//연결리스트의 끝에 새로운 노드를 추가
				cout << "---------------------------------------------------------------" << endl;
				cout << "추가되었습니다 저장해 주세요" << endl;
			}break;

			case 1: {
				Ctr.Draw();
				cout << "---------------------------------------------------------------" << endl;
				cout << "취소하시려면 00 을 입력하세요" << endl;
				Ctr.Edit();//노드를 선택하여 내용을 변경
				cout << "---------------------------------------------------------------" << endl;
				cout << "수정이 완료되었습니다 저장해 주세요" << endl;
			}break;

			case 2: {
				Ctr.SaveFile();//연결리스트를 텍스트파일로 출력
				cout << "---------------------------------------------------------------" << endl;
				cout << "저장되었습니다" << endl;
			}break;

			case 3: {
				Ctr.LoadFile();//텍스트파일의 내용을 연결리스트로 입력
				cout << "---------------------------------------------------------------" << endl;
				cout << "데이터를 불러왔습니다" << endl;
			}break;

			case 4: {
				Ctr.Draw();//연결리스트의 내용을 화면에 출력
			}break;

			case 5: {
				Ctr.Draw();
				cout << "---------------------------------------------------------------" << endl;
				cout << "취소하시려면 00 을 입력하세요" << endl;
				Ctr.DeleteFile();//선택한 노드를 연결리스트에서 제거
				cout << "---------------------------------------------------------------" << endl;
				cout << "삭제되었습니다 저장해 주세요" << endl;
			}break;

		case 9: {
			cout << "---------------------------------------------------------------" << endl;
			cout << "프로그램을 종료합니다" << endl;
			Ctr.Delete();//할당된 메모리를 해제
			Run = false;
		}break;
		}
		cout << "---------------------------------------------------------------" << endl;
		system("pause");
	}
}