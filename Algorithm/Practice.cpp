#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <regex>
using namespace std;


//���� ����1
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


//���� ����2
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

   
//�Ƕ�̵�
void PrintStart3( )
{
	int n; 
	
	cout << "�Ƕ�̵��� ���̸� �Է��ϼ���" <<"\n";
	
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		//���� ���
		for (int j = 1; j <= n - i; ++j)
		{
			cout << " ";
		}

		//�� ���
		for (int k = 1; k <= 2 * i - 1; ++k)
		{
			cout << "*";
		}

		cout << endl;
	}	
}

//�� �Ƕ�̵�
void PrintStart4()
{

}




// ���̾Ƹ��






//���� ����1
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

//�Ƕ�̵� 
void PrintStart3____()
{
	int n;

	cout << "�Ƕ�̵��� ���̸� �Է��ϼ���" << "\n";

	cin >> n;

	// 5 �̸� 

	// N�� 5�̰� ù��° 
		
	for (int i = 1; i <= n; ++i)
	{
		//���� ���
		for (int j = 1; j <= n - i; ++j)
		{
			cout << " ";
		}

		//�� ���
		for (int k = 1; k <= 2 * i - 1; ++k)
		{
			cout << "*";
		}

		cout << endl;
	}
}


//�Ƕ�̵�

void PrintStar3_1()
{

	int n;

	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		//���� ���
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}

		//����� 2 * i -1
		//1, 3, 5, 7, 9 , 11
		for (int k = 1; k <= 2 * i - 1; k++)
		{
			cout << "*";
		}

		cout << "\n";
	}
}


//�� �Ƕ�̵�
void PrintStart4_1()
{
	// ���� 





}


//-------------- ���� ���� ���� --------------------//

//���� 1��

//string s�� �־����ϴ�.
//
//string���� ��ȭ��ȣ�� ����ֽ��ϴ�.
//
//�������� anwer�� return �Ͻʽÿ�
//
//���� 1. 01098989988 �� ��� return 0
//���� 2.  010 - 9898 - 9988 return 1
//���� 3. + 82 - 10 - 9898 - 8989 return 2
//
//
//��ȭ��ȣ�� ���� 3���� ������ �����ϸ�,
//
//010 - 989 - 9988�� �߸��� ���������� - 1�� return
//��ȭ��ȣ�� 010 �Ʒ��� 4�ڸ��̿� �Ǳ� ����
//
//+ 82 - 010 - 9898 - 9988 �� �߸��� �����, +82���Ͽ���
//10�ۿ� �ü��������� - 1 return


void checkPhoneNumber()
{
	//�Է� Test Case1

	//// ������ ���
	//void Solution(string a)
	//{

	//}

	// ���� ǥ���� ���


}


//���� 2�� ���� ����
//���α׷��ӽ����� ���� ����� ���� �����̸�,
//���� ���翡���� ������ ���� Return �϶�� ������ ���� ����������
//���� ū ���� Return�ϵ��� �Ǿ��ִ�. �׳� ���α׷��ӽ� Ǯ�� ���� �� �� ����.

//���Ŀ����� ��)

////�Է� �迭  [10, 10, 10, 20, 20, 100, 100]�� k�� �־�����
//
//k�� 3�̶�� �迭  Index 0~2, 1~3, 2~4, 3~5, 4~6 ���� ���ʴ�� Vector�� Push�� ��
//Vector���� ���� ū ���� Return




//���� 3�� 

//�Է� �迭 vector�� result�� �־����ϴ�.
//
//�Է� �迭 vector�� result�� �־����ϴ�.
//
//�Է� ī�� �迭��{ 0, 2, 3, 4, 5, 6 }�̰� result�� 6�̸�
//ī�� �迭�߿� ���ڸ� ��� ���� 6�� �Ǵ� �ּ��� Count�� ��ȯ�Ѵ�
//
//�� ���������� 6�ϳ��� �ڸ��°� �ּ��� Count�� ���� ���� 1
//
//ī��迭���� �ߺ��� ����.
//
//�� �ٸ� ��{ 1, 2, 3, 4, 5, 6, 7 }���� result�� 13 �̸� 6�� 7�� ������ 
//9�� �Ǵϱ� ���� 2�̴�.
// 1, 2 ,3 ,6 ,7 �� �̾Ƶ� 13�� ������ ī�带 5�� �̾ƾ��ϴϱ� 2�� ����!! 






//�� �ð�

void RunPractice()
{
	
	
	
	//PrintStar3_1();
	
	//PrintStart3();
}


