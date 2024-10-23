#include <iostream>
#include <memory>


//독점 소유권을 가지는 스마트 포인터
// 복사할 수없고 자원의 소유권 이전만 가능하다

void TestUniquePtr()
{
	int length = 200;
	
	std::unique_ptr<int> ptr = std::make_unique<int>(length);
	std::cout << "Unique Ptr Value : " << *ptr << std::endl;

	//소유권 이전하는 방법
	std::unique_ptr<int> ptr2 = std::move(ptr);

}// 여기서 ptr이 스코프를 벗어나면 해제


// 자원의 공유 소유권을 관리함
// 참조 카운트를 사용하여 자원을 몇개의 포인터가 참조하고 있는지 추적
// 마지막 shared_ptr이 자원을 참조하지 않게 될때 자원은 자동으로 해제

void TestSharedPtr()
{
	//동적 메모리 할당 및 공유
	std::shared_ptr<int> ptr1 = std::make_shared<int>(100);

	int* normalPointer = new int[100];
	
	std::cout << "ptr1 Value : " << *ptr1 << std::endl;



}



void RunStartPointerTest()
{
	TestSharedPtr();
 

}