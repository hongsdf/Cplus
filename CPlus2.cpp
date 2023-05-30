// CPlus2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
// C vs C++
// C언어 비용,성능 유리
// C++ 효율

// Instance 
// int nData; // nData는 int형식의 Instance이다.
// std := 네임스페이스(namespace) - 소속


#include <iostream>

class test{
    
};

void Testfunc(int a, char* pzName) 
{
    std::cout << a << std::endl;
    std::cout << pzName << std::endl;
}

int main()
{
    // 선언 및 정의
    int a = 10; // C언어 스타일
    // int b(a); // C++ 스타일
    auto b(a); //원본의 형식을 따라간다.
    std::cout << b << std::endl;

    char c = 'a';
    auto d(c);
    std::cout << d << std::endl;


    int(10); // 가능

    //함수 포인터 생성
    void(*pftest)(int, char*) = Testfunc;
    auto pftest1(Testfunc);
    char szName[32] = "Hello";
    char* temp = szName;
    pftest(3, szName);

    // cin


    // auto


    // malloc -> new 
    // C
    int* pnDATA = (int *)malloc(sizeof(int));
    free(pnDATA);
    // C++
    int* newPata = new int;
    delete(newPata);

    // C++
    int * parray = new int[5];
    delete[] parray;

    // 참조자 형식
    int nData(10);
    std::cout << nData << std::endl;

    int& rData = nData;// 참조자는 '별명' 이다. // 변하지 않은 포인터이다.
    int* const pData = &nData;

    pData = &nData;

    rData = 5;
    std::cout << nData << std::endl;
    std::cout << &nData << std::endl;
    std::cout << &rData << std::endl;

    // 참조자를 사용하는 이유?
    // 포인터에 대한 문제점 => '변절'이다. => 그래서 C언어에서는 int const *p 로 포인터를 상수화 시킨다





}
