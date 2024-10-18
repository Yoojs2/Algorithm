#include "DataStruct.h"
#include <list>
#include <stack>
#include <queue>
#include <unordered_map>
#include <utility>
#include <map>

using namespace std;

//���͸� ����ؾ��ϴ� ��Ȳ
//���� ������ ����
//�޸𸮿� ���������� �����
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


//Map ��� ����ؾ��ϴ� ����
//������ �߿����� �������
//������ ���� ���� ��
//������ �ʿ� ���� ���
//"Ű ���� �ߺ� �� �� �ִ� ���" <-- �׳� ���� �̶� ���� �����
//"Map�� ���������� ���� Ʈ���� �̿��ϰ�" Vector Pair�� �������� �����Ͱ����� �Ҵ���
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

	//index�� ���� ����
	string temp = queue[0].second;
	
	cout << "temp : " << temp << "\n";
	std::cout << "\n";

	//2���� �迭ó�� ������ �Ұ�����
	//string temp = queue[0][1];
	
	//��� ����, 1��° index ����
	queue.erase(queue.begin() + 1);
	
	//���� ���� ���� // ó������ �״��� 3�� (ó�� ����)
	queue.erase(queue.begin(), queue.begin() + 3);
	
	//������ ��� ����, �̸��� Back�� ���ݾ� �̷��� �ڿ��� ����°� ������ �ְ��� 
	queue.pop_back();	
	
}


//�߰� ���԰� ������ ����� ��Ȳ���� �����ϸ�, ��⿭ ���� ���� �ó������� ����
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

	//�߰��� �۾� ����
	auto it = taskQueue.begin();
	++it;
	taskQueue.insert(it, "Urgent Task");

	std::cout << "\nAfter inserting an urgent task:\n";

	for (const auto& task : taskQueue)
	{
		std::cout << task << "\n";
	}

	// ù ��° �۾� ����(����)
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

	//��� �߰�
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

	// insert�� ����� ���ο� Ű-�� �� �߰�
	myMap.insert(make_pair(1, "Apple"));
	myMap.insert(make_pair(2, "Banana"));

	
	
	string temString = myMap[1];
	
	
	// �̹� �����ϴ� Ű�� ���Ե��� ����
	auto result = myMap.insert(make_pair(1, "Orange"));

	// ���� ��� Ȯ��
	if (!result.second) {
		cout << "Ű 1�� �̹� �����մϴ�. ���Ե��� �ʾҽ��ϴ�." << endl;
	}

	// ���� ���� ���
	for (const auto& entry : myMap) {
		cout << entry.first << ": " << entry.second << endl;
	}

	
	map<int, string> m2;

	//�̷��� �����ϸ� �ߺ��Ǹ� �ֽŰ����� ���Եǰ�
	//m2[0] = "AAAA";

	//�̷��� �����ϸ� �ߺ������� �������� �ʴ´�.
	m2.insert(pair<int, string>(1, "bbb"));
	
	
	
	
	
	
	return 0;
}





int unordered_map_Example()
{
	// 1.����
	std::unordered_map<std::string, int> umap;

	// 2. ��� ���� (Ű - �� ��)
	umap["apple"] = 50;
	umap["banana"] = 100;
	umap["orange"] = 150;

	// 3.��� ���� (Ű�� ���� ���� ����)
	std::cout << "Price of apple : " << umap["apple"] << std::endl;

	
	
	// 4. ��� �˻�
	if (umap.find("banana") != umap.end())
	{
		std::cout << "Banana is in the with price : " << umap["banana"] << "\n"; 
	}

	else
	{
		std::cout << "Banana is not in the map" << std::endl;
	}

	
	//5. ��� ����
	umap.erase("orange");

	// 6. ��� ��ȸ
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
