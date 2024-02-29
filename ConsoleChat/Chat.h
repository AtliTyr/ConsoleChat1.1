#pragma once
#include "UserBase.h"
#include <vector>
#include "Message.h"
#include <iostream>

using namespace std;

class Chat
{
private:
	std::vector <Message> chat; // ������ ��������� ����
	UserBase base; // ���� ������������� ����
	User authorized; // �������������� � ������ ������ ������������
public:
	Chat();
	~Chat();

	// ����������� � ����, ���������� true ���� �������� ����� � ������ ��������� � ���� �������������
	bool EnterChat();

	// ����������� � ������ �������� �� ������������ ������ � ���� �������������
	void Registration();

	// ���������� ������� ����������� , ��� �������� �� ������������ ������ , ��� �������� �������
	void Registration(std::string name, std::string login, std::string password);
	
	// ��������� �������� ������������� ���������
	void WriteMessageToAll();
	
	// ��������� �������� ��������� , ��������� ������ ��� ������������ , � �������� �������
	void WritePrivateMessage(std::string login);
	
	// ��������� � ��� ��������� ������������� ���������.����� ���� ��� �������� �����������������.����� �������
	void WriteTestMessages();
	
	// ����� ���������
	void CheckMessage();

	// ������� �������� ��������������� ������������ �� ���� ������������� ����
	void DeleteUserFromChat();
 
	// ����� ������������� ����
	void DisplayUserList();	
};