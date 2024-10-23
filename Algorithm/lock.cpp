#include <iostream>
#include <mutex>

std::mutex mtx;


void Critical_Section()
{
	//���ؽ� ���
	std::lock_guard<std::mutex> lock(mtx);
		
	std::cout << "Critical section\n";
}// lock_guard�� �Ҹ�Ǹ鼭 ��� ����


void Critical_Section()
{
	//������ �Բ� ���ؽ� ���
	std::unique_lock<std::mutex> lock(mtx);
	
	std::cout << "Critical section\n";

	//lock_guard�� �ٸ��� ��������� lock ���� ����
	lock.unlock();
	std::cout << "Another critical section\n";
}// ������ ������ �����Ǵ°� �Ȱ���


void RunLockExample()
{



}