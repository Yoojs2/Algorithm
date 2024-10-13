#include <Algorithm>
#include "Algorithm.h"
#include "DataStruct.h"
#include <stack>
#include "Practice.h"
#include "Grammer.h"
#include <map>


using namespace std;

//Big O ǥ�� �� ��

//-------- O(N) --------------//
// �Է�ũ�� N�� ���� ���� �ð��� ���������� �����ϴ� ��

// �迭�� ��� ��Ҹ� �ѹ��� �����
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}

//����Ʈ���� Ư�� ��Ҹ� ã��
int findElement(int arr[], int n, int target)
{
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] == target)
		{
			return i; // ��Ҹ� ã���� �ε����� ��ȯ
		}
	}

	return -1;
}
//----------------------------------------------------//

//---------------O(1) ��� �ð� ���⵵-----------------//
// �Է� ũ��� ������� �׻� ������ �ð��� �ɸ�
// �Էµ������� ũ��� ������� �׻� ������ �ð� �ȿ� �۾� �Ϸ�
// �˰��� ������ �Է� ũ�⿡ ������ ���� ����

//�迭 Ư�� �ε����� �ִ� ��ҿ� �����ϱ�
int getElement(int arr[], int index)
{
	return arr[index];
}

//���ÿ��� top() ��� ��������
int topElement(std::stack<int>& s)
{
	return s.top();
}

//-------------O(n^2) ���� �ð� ���⵵---------------//
//----N�� �þ���� �ð��� ���� ������ �þ
void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n -1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);		
			}
		}
	}
}

//-----------------------------------------------//

//-------O(2^n) ���� �ð� ���⵵------///
// N�� Ŀ������ ����ð��� ���������� ������
int fibonacci(int n) {
	if (n <= 1){
		return n;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}
//-------------------------------------//

//-------------------O(log n)--------------------//
// N�� �Ź� �������� ���̸鼭 ������ �ذ��ϴ� �˰���
// ���� Ž��
// ���� �� �迭���� Ư�� ���� ã���� ��� 
// 
int BinarySearch(int arr[], int n, int target)
{
	int left = 0, right = n - 1;
	
	/*while (left <= right ){
		
	}*/

	return 0;
}

//vector<string> players = { "mumu", "soe", "poe", "kai", "mine" };
//vector<string> callings = { "kai", "kai", "mine", "mine"};


vector<string> solution(vector<string> players, vector<string> callings) 
{
	vector<string> answer(players);

	map<string, int> m1;

	//���� ������ �÷��̾� �̸� ����
	for (int i = 0; i < players.size(); i++)
	{
		m1[players[i]] = i;
	}
			
	for (int i = 0; i < callings.size(); i++)
	{
		string calling = callings[i];
		
		
		//int rank = m1[calling];

		int rank = m1[callings[i]];

		
		string temp = players[rank - 1];
		


		
	}



	return players;
}



void GitTest()
{
	// ���� �ٽ� ��Ʈ�Ͽ��� ����
}




int main()
{
	vector<string> players = {"mumu", "soe", "poe", "kai", "mine"};
	vector<string> callings = { "mumu", "kai", "mine", "soe", "poe" };
	vector<string> result;
	
	result = solution(players, callings);
	
		
	
	RunPractice();

	
	return 0;
	RunAlgorithmTest();

	return 0;
	
	
	RunGrammer();
	
	return 0;
	
	RunPractice();
	
	return 0;
	
	RunAlgorithmTest();
	
	
	
	return 0;
	//std::cerr << "Hello World" << std::endl;
	//unordered_map_Example();

}