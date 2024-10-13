#include <Algorithm>
#include "Algorithm.h"
#include "DataStruct.h"
#include <stack>
#include "Practice.h"
#include "Grammer.h"
#include <map>


using namespace std;

//Big O 표기 법 예

//-------- O(N) --------------//
// 입력크기 N에 따라 실행 시간이 선형적으로 증가하는 것

// 배열의 모든 요소를 한번씩 출력함
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << arr[i] << " ";
	}
}

//리스트에서 특정 요소를 찾기
int findElement(int arr[], int n, int target)
{
	for (size_t i = 0; i < n; i++)
	{
		if (arr[i] == target)
		{
			return i; // 요소를 찾으면 인덱스를 반환
		}
	}

	return -1;
}
//----------------------------------------------------//

//---------------O(1) 상수 시간 복잡도-----------------//
// 입력 크기와 상관없이 항상 일정한 시간이 걸림
// 입력데이터의 크기와 상관없이 항상 일정한 시간 안에 작업 완료
// 알고리즘 성능은 입력 크기에 영향을 받지 않음

//배열 특정 인덱스에 있는 요소에 접근하기
int getElement(int arr[], int index)
{
	return arr[index];
}

//스택에서 top() 요소 가져오기
int topElement(std::stack<int>& s)
{
	return s.top();
}

//-------------O(n^2) 이차 시간 복잡도---------------//
//----N이 늘어날수록 시간이 제곱 비율로 늘어남
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

//-------O(2^n) 지수 시간 복잡도------///
// N이 커질수록 실행시간이 지수적으로 증가함
int fibonacci(int n) {
	if (n <= 1){
		return n;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}
//-------------------------------------//

//-------------------O(log n)--------------------//
// N을 매번 절반으로 줄이면서 문제를 해결하는 알고리즘
// 이진 탐색
// 정렬 된 배열에서 특정 값을 찾을때 사용 
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

	//현재 순위와 플레이어 이름 저장
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
	// 지금 다시 노트북에서 저장
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