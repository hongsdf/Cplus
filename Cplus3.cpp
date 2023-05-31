// Cplus3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// C언어에서 함수를 호출할때 매개변수로 주소를 전달한다. Call by reference

// 디폴트 매개 변수 : 기본값을 정해서 함수 이름만 쓰면 함수를 실행

// 다중정의 : 이름은 같은데 자료형 바꿔도 됨

// 인라인 함수 : 함수와 매크로 장점

// 네임스페이스 : 소속

#include <iostream>
using namespace std;

void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void sort(int* aList) {
	// 버블 정렬
	for (int i = 0; i < 5; i++) {
		// int start = aList[i];
		for (int j = 0; j < 5; j++) {
			if (aList[i] < aList[j]) {
				int temp = aList[i];
				aList[i] = aList[j];
				aList[j] = temp;
			}
		}
	}
}
int Testfunc(int nParam = 10) {
	
	return nParam;
}


int main()
{
	int* aList = new int[5];
	for (int i = 0; i < 5; i++) {
		cin >> aList[i];
	}
	cout << endl;

	sort(aList);

	for (int i = 0; i < 5; i++) {
		cout << aList[i] << ' ';
	}
	cout << endl;



}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
