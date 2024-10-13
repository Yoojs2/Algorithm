#include "Algorithm.h"
#include "stack"
#include "queue"
#include <unordered_set>
#include <unordered_map>
#include <algorithm>

// Array ���� 1 : �迭���� �ִ� �� ã��
//���� �迭�� �־�������, �� �迭���� �ִ� ���� ã�� ����ϴ� �Լ� �ۼ�
// �Է� �迭 int arr[] = {3, 5, 7, 2, 8, -1 , 4, 10, 12}


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

// Array ���� 2: ���� �迭�� �־�������, �迭�� ��� ����� ���� ����ϴ� �Լ� �ۼ�
int SumArray(int arr[], int n)
{
	int SumValue = 0;

	for (int i = 0; i < n; i++)
	{
		SumValue += arr[i];
	}

	return SumValue;
}

// Vector ���� 1�� ���Ϳ��� ¦�� ��Ҹ� ���
// ���� ���Ͱ� �־�������, �� �� ¦�� ��ҵ鸸 ����ϴ� �Լ� �ۼ�
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

// Vector ���� 2�� 
// ���� ���Ͱ� �־����� ��, �ߺ��� ���� ������ �� ���� ���� ����ϴ� �Լ���
// �ۼ��Ͻÿ�

std::vector<int> RemoveDuplicates(std::vector<int>& vec)
{
	std::unordered_set<int> seen;
	std::vector<int> result;

	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		//find�� �ߺ��� ���� ������ end�� ��ȯ��
		if (seen.find(*it) == seen.end())
		{
			seen.insert(*it);
			result.push_back(*it);
		}
	}

	return result;
}

//Stack ���� 1
//�־��� ���ڿ����� ��ȣ�� �ùٸ��� ¦���������� Ȯ���ϴ� ���α׷���
//�ۼ��ϼ��� ���ڿ��� ( �� )�� �����մϴ�. ¦�� ������ true, �׷��� ������
//false �� ��ȯ�ϼ���

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


// Queue ���� 1
// ���� ť�� �־�������, ť�� �� �� ��Ҹ� ���� ť�� �� �ڷ� ������ �۾���
// N�� �ݺ��� ��, ť�� ���¸� ����ϴ� ���α׷��� �ۼ��ϼ���

void RotateQueue(std::queue<int>& q, int n)
{
	for (int i = 0; i < n; i++)
	{
		int frontElement = q.front();

		q.pop();
		q.push(frontElement);
	}
}

// Hash ���� 1 : �迭���� �� ����� �� ���
//���� �迭�� �־������� �迭 �� �� ��Ұ� ��� �����ߴ��� ����ϴ�
//���α׷��� �ۼ��ϼ���. 
//����� Ű�� �迭�� ����̰�, ���� �ش� ����� ���� Ƚ���� �ؽ� ������ ����ϼ���
//���� �Է� {1, 2, 2, 3, 1, 4, 2, 3,}
//���� ��� 1: 2 
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

// ���� Ž�� �⺻ ����
int BinarySearch(const std::vector<int>& arr, int target)
{
	//�迭 Ž�� �ּ� Index
	int low = 0;
	// �迭 Ž�� �ִ� Index
	int high = arr.size() - 1;

	while (low <= high)
	{	
		int mid = (low + high) / 2;
		//���� Flow ����
		//int mid = low + (high - low) / 2;

		if (arr[mid] == target)
		{
			//�ش� ���� ã���� �ε��� ��ȯ
			return mid;
		}

		//ũ�ٸ�
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

//---------DFS ����


//---------DFS ����
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
	//���� ��� �湮 ó��
	visited[node] = true;

	std::cout << node << " ";  // �湮�� ��� ��� (�ʿ��� �۾� ����)

	//���� ��Ʈ Ž��
	for (int adfacent : graph[node])
	{
		//�湮 üũ 
		if (!visited[adfacent])
		{
			//��� ȣ��
			DFSRecursion(adfacent, graph, visited);
		}
	}
}


void BFS(int start, const std::vector<std::vector<int>>& graph) {
	
	std::vector<bool> visited(graph.size(), false); // �湮 ����� ���� �迭
	std::queue<int> q;  // BFS�� ���� ť
	std::vector<int> route;
	// ���� ��带 ť�� �ְ� �湮 ó��
	q.push(start);
	visited[start] = true;
		
	while (!q.empty()) 
	{
		int node = q.front(); // ť���� ��带 ����
		q.pop(); // ť���� ����

		std::cout << node << " ";
		std::vector<int> route;

		route.push_back(node);
		
		// ���� ��带 ��ȸ
		for (int adjacent : graph[node]) 
		{
			if (!visited[adjacent]) 
			{
				q.push(adjacent);  // �湮���� ���� ���� ��带 ť�� �߰�				
				//��� ����
				visited[adjacent] = true;  // �湮 ó��
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
		//������ �ֻ�� ��带 ������
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
	std::vector<bool> visited(graph.size(), false); // �湮 ����� ���� �迭
	std::queue<int> q;  // BFS�� ���� ť
	std::vector<int> route;
	
	//���� Queue Push
	q.push(start);

	//�湮 ���
	visited[start] = true;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		route.push_back(node);

		//���� ��� Ž��
		for (int n : graph[node])
		{
			if (!visited[n])
			{
				q.push(n);
				//Ž���� ����
				visited[n] = true;
			}
		}	
	}
}

//�ִܰŸ� �̱� 
void BFS3(int start, const std::vector<std::vector<int>>& graph)
{		
	vector<bool> visited(graph.size(), false);
	vector<int> route;
	queue<int> q;
	
	//��� ����
	vector<int> prev(graph.size(), -1);
	
	//��ǥ Node
	int end = 5;
		
	q.push(start);
	visited[start] = true;  // ���� ��� �湮 ó��

	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		if (node == end)
		{
			break;
		}
		
		//���� ��� Ȯ��
		for (int ad : graph[node])
		{
			//�湮 ����� ���ٸ�
			if (!visited[ad])
			{
				q.push(ad);
				//�湮 ó��
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


//�ִ� ��θ� �̾ƺ���....
void BFS4(int start, const std::vector<std::vector<int>>& graph)
{
	vector<int> visited(graph.size(), false);
	vector<int> route;
	vector<int> prev(graph.size(), -1);
	queue<int> q;

	//��ǥ ����
	int end = 5;

	q.push(start);
	//�湮ó�� 
	visited[start] = true;

	while(!q.empty())
	{
		int node = q.front();
		q.pop();

		//���� ��� Ž��
		for (int adj : graph[node])
		{			
			//�湮 Ȯ��
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
		//���� ���� �̵�
		at = prev[at];
	}

	// ��θ� �������� ��ȯ
	reverse(route.begin(), route.end());

	// �ִ� ��� ���
	cout << "�ִ� ���: ";
	for (int node : route) {
		cout << node << " ";
	}
	cout << endl;
}

void BFS6(int start, const std::vector<std::vector<int>>& graph)
{
	vector<int> visited(graph.size(), false);
	queue<int> q;
	//���� ���
	vector<int> route;

	//���� node ���
	vector<int> prev(graph.size(), -1);

	q.push(start);
	
	//�湮 ó��
	visited[start] = true;

	while (!q.empty())
	{
		int node = q.front();
		q.pop();

		//������� Ž��
		for (int adj : graph[node])
		{
			//�湮 üũ
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
		//��Ʈ�� �ְ�
		route.push_back(at);
		// ���� ���� �̵�
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



//�����




void RunAlgorithmTest()
{
	int n = 5;

	//�Ƕ�̵�

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

	//��θ� ������ vector
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