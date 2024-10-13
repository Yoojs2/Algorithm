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
	//문자열 길이
	string str = "Hello, World";
	cout << "Length : " << str.length() << endl;
	cout << "Size : " << str.size() << endl;
	
	
	//부분 문자열 추출 7번부터 다섯개
	string sub = str.substr(7, 5);
	cout << "Substring : " << sub << "\n";

	//문자열 찾기 // 해당 단어가 시작되는 Index
	//없으면 nops 반환
	size_t pos = str.find("World");

	if (pos != string::npos)
	{
		cout << "Found 'world' at position : " << pos << "\n";
	}

	//문자열 대체
	str.replace(7, 5, "Universe");
	cout << "After replace : " << str << "\n";

	//문자열 추가
	str += "!!";
	cout << "Atfer append : " << str << "\n";

	//문자열 제거
	str.erase(5, 6);
	cout << "After erase : " << str << "\n";

	//문자열 비교
	string str1 = "apple";
	string str2 = "banana";

	if (str.compare(str2) < 0)
	{
		// str1이 str2보다 사전적으로 앞서면 실행
	}

}





void RunGrammer()
{
	
	test();
	return;
	
	StringTest();
}
