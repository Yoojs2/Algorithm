#include "DataStruct.h"
#include <list>
#include <stack>
#include <queue>
#include <unordered_map>


//벡터를 사용해야하는 상황
//임의 접근이 빠름
//메모리에 연속적으로 저장됨
void VectorExample()
{
	std::vector<int> scores = { 85, 90, 78, 92, 88 };

	for (int i = 0; scores.size(); ++i)
	{
		std::cout << "Student" << i + 1 << ": " << scores[i] << " points\n";
	}

	scores[2] = 95;
	std::cout << "\nAfter updation, Student 3 : " << scores[2] << " points\n";





}

//중간 삽입과 삭제가 빈번한 상황에서 유리하며, 대기열 관리 같은 시나리오에 적합
void ListExample()
{
	std::list<std::string> taskQueue;

	taskQueue.push_back("Task 1");
	taskQueue.push_back("Task 2");
	taskQueue.push_back("Task 3");

	std::cout << "Initial Task Queue:\n";
	
	for (const auto& task : taskQueue)
	{
		std::cout << task << "\n";
	}

	//중간에 작업 삽입
	auto it = taskQueue.begin();
	++it;
	taskQueue.insert(it, "Urgent Task");

	std::cout << "\nAfter inserting an urgent task:\n";

	for (const auto& task : taskQueue)
	{
		std::cout << task << "\n";
	}

	// 첫 번째 작업 제거(삭제)
	taskQueue.pop_front();

	std::cout << "\nAfter removing the first task:\n";

	for (const auto& task : taskQueue)
	{
		std::cout << task << "\n";
	}

	return;
}

void StactExample()
{
	std::stack<int> s;

	s.push(10);
	s.push(20);
	s.push(30);

	while (!s.empty())
	{
		std::cout << "Top element" << s.top() << "\n";
	}

	return;
}

void QueueExample()
{
	std::queue<int> q;

	//요소 추가
	q.push(10);
	q.push(20);
	q.push(30);

	while (!q.empty())
	{
		std::cout << "Front element : " << "\n";
	}
}

int unordered_map_Example()
{
	// 1.선언
	std::unordered_map<std::string, int> umap;

	// 2. 요소 삽입 (키 - 값 쌍)
	umap["apple"] = 50;
	umap["banana"] = 100;
	umap["orange"] = 150;

	// 3.요소 접근 (키를 통해 값에 접근)
	std::cout << "Price of apple : " << umap["apple"] << std::endl;

	
	
	// 4. 요소 검색
	if (umap.find("banana") != umap.end())
	{
		std::cout << "Banana is in the with price : " << umap["banana"] << "\n"; 
	}

	else
	{
		std::cout << "Banana is not in the map" << std::endl;
	}

	
	//5. 요소 삭제
	umap.erase("orange");

	// 6. 요소 순회
	for (const auto& pair : umap)
	{
		std::cout << pair.first << " : " << pair.second << "\n";
	}

	return 0;
}

void RunDataStructTest()
{

}
