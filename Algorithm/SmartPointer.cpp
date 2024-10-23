#include <iostream>
#include <memory>


//���� �������� ������ ����Ʈ ������
// ������ ������ �ڿ��� ������ ������ �����ϴ�

void TestUniquePtr()
{
	int length = 200;
	
	std::unique_ptr<int> ptr = std::make_unique<int>(length);
	std::cout << "Unique Ptr Value : " << *ptr << std::endl;

	//������ �����ϴ� ���
	std::unique_ptr<int> ptr2 = std::move(ptr);

}// ���⼭ ptr�� �������� ����� ����


// �ڿ��� ���� �������� ������
// ���� ī��Ʈ�� ����Ͽ� �ڿ��� ��� �����Ͱ� �����ϰ� �ִ��� ����
// ������ shared_ptr�� �ڿ��� �������� �ʰ� �ɶ� �ڿ��� �ڵ����� ����

void TestSharedPtr()
{
	//���� �޸� �Ҵ� �� ����
	std::shared_ptr<int> ptr1 = std::make_shared<int>(100);

	int* normalPointer = new int[100];
	
	std::cout << "ptr1 Value : " << *ptr1 << std::endl;



}



void RunStartPointerTest()
{
	TestSharedPtr();
 

}