#include <iostream>
#include <string>
using namespace std;

char key = 0XAA;

// 암호화 함수
string Encrypt(const string& data)
{
	string encryData;

	for (char c : data)
	{
		encryData += c ^ key; // 각 문자를 XOR 연산하여 문자열 변수에 추가한다.
	}

	return encryData;
}

int main()
{
	string data; // 원본 자료
	cin >> data;

	string encryData = Encrypt(data);
	string decryData = Encrypt(encryData);

	cout << "원본 : " << data << endl;
	cout << "암호화한 데이터 : ";
	for (char c : encryData)
	{
		cout << hex << static_cast<int>(c) << " "; // 16진수로 출력
	}
	cout << endl;
	cout << "복호화한 데이터 : " << decryData << endl;
}