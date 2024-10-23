#include <iostream>
#include <mutex>

std::mutex mtx;


void Critical_Section()
{
	//뮤텍스 잠금
	std::lock_guard<std::mutex> lock(mtx);
		
	std::cout << "Critical section\n";
}// lock_guard가 소멸되면서 잠금 해제


void Critical_Section()
{
	//생성과 함께 뮤텍스 잠금
	std::unique_lock<std::mutex> lock(mtx);
	
	std::cout << "Critical section\n";

	//lock_guard와 다르게 명시적으로 lock 해제 가능
	lock.unlock();
	std::cout << "Another critical section\n";
}// 스코프 지나면 해제되는건 똑같음


void RunLockExample()
{



}