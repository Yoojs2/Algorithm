#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;



void test()
{
	
		
	
	string str1; string str2;

	str1 = "aaaa";
	str2 = "bbbb";

	
	if (str1 == "aaaa")
	{
		std::cout << "SS";
	}
	
	string answer = "";

	for (int i = 0; i < str1.size(); ++i)
	{
		
		std::cout << str1[i] << std::endl;
		//string tempString = str1[i] + str2[i];
		//answer += tempString;
	}

	

}




void StringTest()
{
	//���ڿ� ����
	string str = "Hello, World";
	cout << "Length : " << str.length() << endl;
	cout << "Size : " << str.size() << endl;
	
	
	//�κ� ���ڿ� ���� 7������ �ټ���
	string sub = str.substr(7, 5);
	cout << "Substring : " << sub << "\n";

	//���ڿ� ã�� // �ش� �ܾ ���۵Ǵ� Index
	//������ nops ��ȯ
	size_t pos = str.find("World");

	if (pos != string::npos)
	{
		cout << "Found 'world' at position : " << pos << "\n";
	}

	//���ڿ� ��ü
	str.replace(7, 5, "Universe");
	cout << "After replace : " << str << "\n";

	//���ڿ� �߰�
	str += "!!";
	cout << "Atfer append : " << str << "\n";

	//���ڿ� ����
	str.erase(5, 6);
	cout << "After erase : " << str << "\n";

	//���ڿ� ��
	string str1 = "apple";
	string str2 = "banana";

	if (str.compare(str2) < 0)
	{
		// str1�� str2���� ���������� �ռ��� ����
	}

}





void RunGrammer()
{
	
	test();
	return;
	
	StringTest();
}
