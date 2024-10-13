#include "Algorithm.h"
#include "stack"
#include "queue"
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

// Array 문제 1 : 배열에서 최대 값 찾기
//정수 배열이 주어졌을때, 이 배열에서 최대 값을 찾아 출력하는 함수 작성
// 입력 배열 int arr[] = {3, 5, 7, 2, 8, -1 , 4, 10, 12}


using namespace std;

int FindMax(int arr[], int n)
{
	int maxValue = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
		}
	}

	return maxValue;
}

// Array 문제 2: 정수 배열이 주어졌을때, 배열의 모든 요소의 합을 계산하는 함수 작성
int SumArray(int arr[], int n)
{
	int SumValue = 0;

	for (int i = 0; i < n; i++)
	{
		SumValue += arr[i];
	}

	return SumValue;
}

// Vector 문제 1번 벡터에서 짝수 요소만 출력
// 정수 벡터가 주어졌을때, 그 중 짝수 요소들만 출력하는 함수 작성
void PrintEvenElements(std::vector<int>& vec)
{
	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		if (*it % 2 == 0)
		{
			std::cerr << *it << "\n";
		}
	}
}

// Vector 문제 2번 
// 정수 벡터가 주어졌을 때, 중복된 값을 제거한 후 남은 값을 출력하는 함수를
// 작성하시오

std::vector<int> RemoveDuplicates(std::vector<int>& vec)
{
	std::unordered_set<int> seen;
	std::vector<int> result;

	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		//find는 중복된 값이 없으면 end를 반환함
		if (seen.find(*it) == seen.end())
		{
			seen.insert(*it);
			result.push_back(*it);
		}
	}

	return result;
}

//Stack 문제 1
//주어진 문자열에서 괄호가 올바르게 짝지어졌는지 확인하는 프로그램을
//작성하세요 문자열은 ( 와 )만 포함합니다. 짝이 맞으면 true, 그렇지 않으면
//false 를 반환하세요

bool isvalidParentheses(std::string s)
{
	std::stack<char> stk;

	for (char c : s)
	{
		if (c == '(')
		{
			stk.push(c);
		}

		else if (c == ')')
		{
			if (stk.empty())
			{
				return false;
			}

			stk.pop();
		}
	}

	return stk.empty();
}


// Queue 문제 1
// 정수 큐가 주어졌을때, 큐의 맨 앞 요소를 빼서 큐의 맨 뒤로 보내는 작업을
// N번 반복한 후, 큐의 상태를 출력하는 프로그램을 작성하세요

void RotateQueue(std::queue<int>& q, int n)
{
	for (int i = 0; i < n; i++)
	{
		int frontElement = q.front();

		q.pop();
		q.push(frontElement);
	}
}

// Hash 문제 1 : 배열에서 각 요소의 빈도 계산
//정수 배열이 주어졌을때 배열 내 각 요소가 몇번 등장했는지 계산하는
//프로그램을 작성하세요. 
//결과는 키가 배열의 요소이고, 값이 해당 요소의 등장 횟수인 해시 맵으로 출력하세요
//예시 입력 {1, 2, 2, 3, 1, 4, 2, 3,}
//예시 출력 1: 2 
//         2: 3
//         3: 2
//         4: 1

void CountFrequencies(int arr[], int n)
{	
	//input EX
	//int arr[] = { 1, 2, 2, 3, 1, 4, 2, 3 };
	
	std::unordered_map<int, int> freqMap;

	for (int i = 0; i < n; i++)
	{
		//freqMap[arr[i]] = freqMap[arr[i]] + 1;
		freqMap[arr[i]]++;		
	}

	for (auto& pair : freqMap)
	{
		std::cerr << pair.first << ": " << pair.second << "\n";
	}		
}

// 이진 탐색 기본 개념
int BinarySearch(const std::vector<int>& arr, int target)
{
	//배열 탐색 최소 Index
	int low = 0;
	// 배열 탐색 최대 Index
	int high = arr.size() - 1;

	while (low <= high)
	{	
		int mid = (low + high) / 2;
		//오버 Flow 방지
		//int mid = low + (high - low) / 2;

		if (arr[mid] == target)
		{
			//해당 값을 찾으면 인덱스 반환
			return mid;
		}

		//크다면
		else if (arr[mid] < target)
		{
			low = mid + 1;
		}

		else
		{
			high = mid - 1;
		}
	}

	return -1;
}

//---------DFS 개념


//---------DFS 개념
void CreateGraph(std::vector<std::vector<int>>& graph)
{
	graph = { {1, 2}, {0, 3, 4}, {0}, {1}, {1, 5}, {4} };
}

//BFS


//DFS Recursive
void DFSRecursion(int node,
	const std::vector<std::vector<int>>& graph,
	std::vector<bool>& visited)
{
	//현재 노드 방문 처리
	visited[node] = true;

	std::cout << node << " ";  // 방문한 노드 출력 (필요한 작업 수행)

	//인접 노트 탐색
	for (int adfacent : graph[node])
	{
		//방문 체크 
		if (!visited[adfacent])
		{
			//재귀 호출
			DFSRecursion(adfacent, graph, visited);
		}
	}
}


void BFS(int start, const std::vector<std::vector<int>>& graph) {
	
	std::vector<bool> visited(graph.size(), false); // 방문 기록을 위한 배열
	std::queue<int> q;  // BFS를 위한 큐
	std::vector<int> route;
	// 시작 노드를 큐에 넣고 방문 처리
	q.push(start);
	visited[start] = true;
		
	while (!q.empty()) 
	{
		int node = q.front(); // 큐에서 노드를 꺼냄
		q.pop(); // 큐에서 제거

		std::cout << node << " ";
		std::vector<int> route;

		route.push_back(node);
		
		// 인접 노드를 순회
		for (int adjacent : graph[node]) 
		{
			if (!visited[adjacent]) 
			{
				q.push(adjacent);  // 방문하지 않은 인접 노드를 큐에 추가				
				//노드 저장
				visited[adjacent] = true;  // 방문 처리
			}
		}
	}
}






void DFSStack(int startNode,
	const std::vector<std::vector<int>>& graph)
{
	std::vector<bool> visited(graph.size(), false);
	std::stack<int> stack;
	std::vector<int> route;

	stack.push(startNode);
	visited[startNode] = true;

	while (!stack.empty())
	{
		//스택의 최상단 노드를 가져옴
		int node = stack.top();
		stack.pop();

		route.push_back(node);

		std::cout << node << " ";

		std::vector<int> reverse_node = graph[node];
		std::reverse(reverse_node.begin(), reverse_node.end());

		for (int adjacent : reverse_node)
		{
			if (!visited[adjacent])
			{
				stack.push(adjacent);
				visited[adjacent] = true;
			}
		}
	}
}

//DFS Recursive
void DFSRecursion2(int node,
	const std::vector<std::vector<int>>& graph,
	std::vector<bool>& visited)
{
	visited[node] = true;

	for (int n : graph[node])
	{
		if (!visited[node])
		{
			DFSRecursion2(node, graph, visited);
		}
	}	
}

void BFS2(int start, const std::vector<std::vector<int>>& graph) 
{
	std::vector<bool> visited(graph.size(), false); // 방문 기록을 위한 배열
	std::queue<int> q;  // BFS를 위한 큐
	std::vector<int> route;
	
	//시작 Queue Push
	q.push(start);

	//방문 기록
	visited[start] = true;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		route.push_back(node);

		//인접 노드 탐색
		for (int n : graph[node])
		{
			if (!visited[n])
			{
				q.push(n);
				//탐색될 예정
				visited[n] = true;
			}
		}	
	}
}

//최단거리 뽑기 
void BFS3(int start, const std::vector<std::vector<int>>& graph)
{		
	vector<bool> visited(graph.size(), false);
	vector<int> route;
	queue<int> q;
	
	//경로 추적
	vector<int> prev(graph.size(), -1);
	
	//목표 Node
	int end = 5;
		
	q.push(start);
	visited[start] = true;  // 시작 노드 방문 처리

	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		if (node == end)
		{
			break;
		}
		
		//인접 노드 확인
		for (int ad : graph[node])
		{
			//방문 기록이 없다면
			if (!visited[ad])
			{
				q.push(ad);
				//방문 처리
				visited[ad] = true;
				prev[ad] = node;
			}
		}
	}

	int at = end;
	
	while (at != -1)
	{
		route.push_back(at);
		at = prev[at];
	}
	
	reverse(route.begin(), route.end());
		
	for (int node : route)
	{
		cout << node << " ";
	}
}


//최단 경로를 뽑아보자....
void BFS4(int start, const std::vector<std::vector<int>>& graph)
{
	vector<int> visited(graph.size(), false);
	vector<int> route;
	vector<int> prev(graph.size(), -1);
	queue<int> q;

	//목표 지점
	int end = 5;

	q.push(start);
	//방문처리 
	visited[start] = true;

	while(!q.empty())
	{
		int node = q.front();
		q.pop();

		//인접 노드 탐색
		for (int adj : graph[node])
		{			
			//방문 확인
			if (!visited[adj])
			{
				q.push(adj);
				visited[adj] = true;
				prev[adj] = node;
			}
		}
	}

	int at = end;
	
	while (at != -1)
	{
		route.push_back(at);
		//이전 노드로 이동
		at = prev[at];
	}

	// 경로를 역순으로 변환
	reverse(route.begin(), route.end());

	// 최단 경로 출력
	cout << "최단 경로: ";
	for (int node : route) {
		cout << node << " ";
	}
	cout << endl;
}

void BFS6(int start, const std::vector<std::vector<int>>& graph)
{
	vector<int> visited(graph.size(), false);
	queue<int> q;
	//최종 경로
	vector<int> route;

	//이전 node 기록
	vector<int> prev(graph.size(), -1);

	q.push(start);
	
	//방문 처리
	visited[start] = true;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		//인접노드 탐색
		for (int adj : graph[node])
		{
			//방문 체크
			if (!visited[adj])
			{
				q.push(adj);
				visited[adj] = true;
				prev[adj] = node;
			}
		}
	}

	int end = 5;
	
	int at = end;
	
	while (at != -1)
	{
		//루트에 넣고
		route.push_back(at);
		// 이전 노드로 이동
		at = prev[at];	
	}

	reverse(route.begin(), route.end());


	for (int n : route)
	{
		cout << n << " ";
	}
}




int BinarySearch(vector<int> array, int target)
{
	int left = 0;
	int right = 0;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (array[mid] == target)
		{
			return mid;
		}

		else if (array[mid] < target)
		{
			left = mid + 1;
		}

		else
		{
			right = mid - 1;
		}	
	}	
}



//별찍기




void RunAlgorithmTest()
{
	int n = 5;

	//피라미드

	for (int i = 1; i <= n < i++;)
	{

	}
	
	
	
	
	
	
	
	
	
	
	vector<int> array{ 1, 4, 5, 3, 7, 8, 2, 28, 19, 20, 12, 98, 101, 54, 2 };
	
	sort(array.begin(), array.end());
	
	for (int n : array)
	{
		cout << n << " ";
	}

	
	std::cout << "3\n" << "2\n" <<"2\n";
	
	return;
	
	std::vector<std::vector<int>> graph;

	//BFS 
	CreateGraph(graph);

	//경로를 저장할 vector
	std::vector<int> route;

	std::vector<bool> visited(6, false);
	
	
	//DFSRecursion(0, graph, visited);
	
	

	BFS6(0, graph);
	

	
	//DFSStack(0, graph);
	


	return;
	
	
	std::vector<int> arr = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 20 };

	int target = 7;

	//int result = BinarySearch(arr, target);

	//std::cerr << "Bin Index : "<< result << "\n";

	
	//std::cerr << "Bin Index : " << result << "\n";
}