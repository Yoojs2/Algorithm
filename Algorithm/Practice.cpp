#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <regex>
using namespace std;


//실전 문제1
//*
//**
//***
//****
//*****//

void PrintStar1(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}
}


//실전 문제2
//******
//****
//***
//**
//*

void PrintStart2(int n)
{		
	for (int i = n; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}
}

   
//피라미드
void PrintStart3( )
{
	int n; 
	
	cout << "피라미드의 높이를 입력하세요" <<"\n";
	
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		//공백 출력
		for (int j = 1; j <= n - i; ++j)
		{
			cout << " ";
		}

		//별 출력
		for (int k = 1; k <= 2 * i - 1; ++k)
		{
			cout << "*";
		}

		cout << endl;
	}	
}

//역 피라미드
void PrintStart4()
{

}




// 다이아몬드






//실전 문제1
//*
//**
//***
//****
//*****

void PrintStar1_1( )
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}

		cout << "\n";
	}
}


void PrintStart2___(int n)
{
	for (int i = n; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}
}


void PrintStar2_1()
{
	int n;

	cin >> n;

	for (int i = n; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << "*";
		}

		cout << "\n";
	}	
}

//피라미드 
void PrintStart3____()
{
	int n;

	cout << "피라미드의 높이를 입력하세요" << "\n";

	cin >> n;

	// 5 이면 

	// N이 5이고 첫번째 
		
	for (int i = 1; i <= n; ++i)
	{
		//공백 출력
		for (int j = 1; j <= n - i; ++j)
		{
			cout << " ";
		}

		//별 출력
		for (int k = 1; k <= 2 * i - 1; ++k)
		{
			cout << "*";
		}

		cout << endl;
	}
}


//피라미드

void PrintStar3_1()
{

	int n;

	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		//공백 출력
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}

		//별찍기 2 * i -1
		//1, 3, 5, 7, 9 , 11
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			cout << "*";
		}

		cout << "\n";
	}
}


//역 피라미드
void PrintStart4_1()
{
	// 공백 





}


//-------------- 한컴 문제 복기 --------------------//

//문제 1번

//string s가 주어집니다.
//
//string에는 전화번호가 들어있습니다.
//
//유형별로 anwer을 return 하십시요
//
//유형 1. 01098989988 인 경우 return 0
//유형 2.  010 - 9898 - 9988 return 1
//유형 3. + 82 - 10 - 9898 - 8989 return 2
//
//
//전화번호는 위의 3가지 유형만 가능하며,
//
//010 - 989 - 9988은 잘못된 유형임으로 - 1을 return
//전화번호는 010 아래는 4자리이여 되기 때문
//
//+ 82 - 010 - 9898 - 9988 도 잘못된 경우임, +82이하에는
//10밖에 올수없음으로 - 1 return


void checkPhoneNumber()
{
	//입력 Test Case1

	//// 구현한 방법
	//void Solution(string a)
	//{

	//}

	// 정규 표현식 사용


}


//문제 2번 명예의 전당
//프로그래머스에서 명예의 전당과 같은 문제이며,
//명예의 전당에서는 최하위 값을 Return 하라고 하지만 한컴 문제에서는
//가장 큰 값을 Return하도록 되어있다. 그냥 프로그래머스 풀어 보면 될 것 같다.

//한컴에서의 예)

////입력 배열  [10, 10, 10, 20, 20, 100, 100]과 k가 주어진다
//
//k가 3이라면 배열  Index 0~2, 1~3, 2~4, 3~5, 4~6 까지 차례대로 Vector에 Push한 후
//Vector에서 가장 큰 값을 Return




//문제 3번 

//입력 배열 vector와 result가 주어집니다.
//
//입력 배열 vector와 result가 주어집니다.
//
//입력 카드 배열이{ 0, 2, 3, 4, 5, 6 }이고 result가 6이면
//카드 배열중에 숫자를 골라서 합이 6이 되는 최소의 Count를 반환한다
//
//위 예제에서는 6하나를 코르는게 최소의 Count임 따라서 답은 1
//
//카드배열에서 중복은 없다.
//
//또 다른 예{ 1, 2, 3, 4, 5, 6, 7 }에서 result가 13 이면 6과 7을 뽑으면 
//9가 되니까 답은 2이다.
// 1, 2 ,3 ,6 ,7 을 뽑아도 13이 되지만 카드를 5장 뽑아야하니까 2가 정답!! 






//모래 시계

void RunPractice()
{
	
	
	
	//PrintStar3_1();
	
	//PrintStart3();
}


