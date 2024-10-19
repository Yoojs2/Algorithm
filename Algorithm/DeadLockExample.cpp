#include <iostream>
#include <mutex>
#include <chrono>
#include <thread>

//�� �̻��� �����尡 ���� �ڿ��� ��ٸ��� ������ ����ϴ� ����....


std::mutex mtx1, mtx2;

//---------------------------------//
void thread1() {
    //mutex�� lock�� �Ҷ� �̹� lock ���̸� lock�� Ǯ�������� ����� �ٽ� ���
    std::lock_guard<std::mutex> lock1(mtx1);  
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    // mtx2 ��� �õ� (thread2�� �̹� mtx2�� ��� ������ ���ɼ�)
    std::lock_guard<std::mutex> lock2(mtx2);  
}


void thread2() {
    // mtx2 ���
    std::lock_guard<std::mutex> lock1(mtx2);  
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    // mtx1 ��� �õ� (thread1�� �̹� mtx1�� ��� ������ ���ɼ�)
    std::lock_guard<std::mutex> lock2(mtx1);  
}
//------------------------------------------------//

void RuncDeadLockExample()
{
 

    std::thread t1(thread1);
    std::thread t2(thread2);


    t1.join();
    t2.join();

}