#include <iostream>
#include <mutex>
#include <chrono>
#include <thread>

//둘 이상의 쓰레드가 서로 자원을 기다리며 영원히 대기하는 상태....


std::mutex mtx1, mtx2;

//---------------------------------//
void thread1() {
    //mutex는 lock을 할때 이미 lock 중이면 lock이 풀릴때까지 대기후 다시 잠금
    std::lock_guard<std::mutex> lock1(mtx1);  
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    // mtx2 잠금 시도 (thread2가 이미 mtx2를 잠근 상태일 가능성)
    std::lock_guard<std::mutex> lock2(mtx2);  
}


void thread2() {
    // mtx2 잠금
    std::lock_guard<std::mutex> lock1(mtx2);  
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    // mtx1 잠금 시도 (thread1이 이미 mtx1을 잠근 상태일 가능성)
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