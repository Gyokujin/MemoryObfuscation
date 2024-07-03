#include <iostream>
#include <string>
using namespace std;

char key = 0XAA;

// ��ȣȭ �Լ�
string Encrypt(const string& data)
{
	string encryData;

	for (char c : data)
	{
		encryData += c ^ key; // �� ���ڸ� XOR �����Ͽ� ���ڿ� ������ �߰��Ѵ�.
	}

	return encryData;
}

int main()
{
	string data; // ���� �ڷ�
	cin >> data;

	string encryData = Encrypt(data);
	string decryData = Encrypt(encryData);

	cout << "���� : " << data << endl;
	cout << "��ȣȭ�� ������ : ";
	for (char c : encryData)
	{
		cout << hex << static_cast<int>(c) << " "; // 16������ ���
	}
	cout << endl;
	cout << "��ȣȭ�� ������ : " << decryData << endl;
}