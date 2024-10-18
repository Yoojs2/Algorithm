#include "DataStruct.h"
#include <list>
#include <stack>
#include <queue>
#include <unordered_map>
#include <utility>
#include <map>

using namespace std;

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


//Map 대신 사용해야하는 이유
//순서가 중요하지 않은경우
//데이터 양이 적을 때
//정렬이 필요 없는 경우
//"키 값이 중복 될 수 있는 경우" <-- 그냥 보통 이때 많이 사용함
//"Map은 내부적으로 균형 트리를 이용하고" Vector Pair는 연속적인 데이터공간에 할당함
void VectorPairExample()
{
	//#include <utility

	vector<pair<int, string>> queue;

	queue.push_back({1, "Alice"});
	queue.push_back({ 2, "Bob" });
	queue.push_back({ 3, "Charlie" });

	for (const auto& person : queue)
	{
		cout << "Order : " << person.first << ", Name : " << person.second;
	}
	
	std::cout << "\n";

	//index로 접근 가능
	string temp = queue[0].second;
	
	cout << "temp : " << temp << "\n";
	std::cout << "\n";

	//2차원 배열처럼 접근은 불가능함
	//string temp = queue[0][1];
	
	//요소 삭제, 1번째 index 삭제
	queue.erase(queue.begin() + 1);
	
	//범위 지정 삭제 // 처음부터 그다음 3개 (처음 포함)
	queue.erase(queue.begin(), queue.begin() + 3);
	
	//마지막 요소 삭제, 이름에 Back이 있잖아 이렇게 뒤에꺼 지우는건 이유가 있겠지 
	queue.pop_back();	
	
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


int map_Example()
{
	map<int, string> myMap;

	// insert를 사용해 새로운 키-값 쌍 추가
	myMap.insert(make_pair(1, "Apple"));
	myMap.insert(make_pair(2, "Banana"));

	
	
	string temString = myMap[1];
	
	
	// 이미 존재하는 키는 삽입되지 않음
	auto result = myMap.insert(make_pair(1, "Orange"));

	// 삽입 결과 확인
	if (!result.second) {
		cout << "키 1은 이미 존재합니다. 삽입되지 않았습니다." << endl;
	}

	// 맵의 내용 출력
	for (const auto& entry : myMap) {
		cout << entry.first << ": " << entry.second << endl;
	}

	
	map<int, string> m2;

	//이렇게 삽입하면 중복되면 최신값으로 삽입되고
	//m2[0] = "AAAA";

	//이렇게 삽입하면 중복값으로 삽입하지 않는다.
	m2.insert(pair<int, string>(1, "bbb"));
	
	
	
	
	
	
	return 0;
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
	
	
	map_Example();
	return;
	
	VectorPairExample();
}
