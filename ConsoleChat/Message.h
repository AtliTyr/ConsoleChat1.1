#pragma once
#include <string>
using namespace std;

class Message
{
private:
	string FROM; //����� �����������
	string TO;	// ����� ����������
	string MESSAGE; // ������������ ���������
public:
	Message() = default;
	~Message() = default;
	Message(string from, string to, string message);
	void senderOfMessage(string sender_l); // ������ ����� �����������
	void recipientOfMessage(string recipient_l); // ������ ����� ����������
	void setMessage(string message); // ������ ����� ���������
	string getSenderOfMessage() const; // �������� ����� �����������
	string getRecepientOfMessage() const; // �������� ����� ����������
	string getMessage() const; // �������� ����� ���������
};