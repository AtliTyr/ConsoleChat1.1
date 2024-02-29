#pragma once
#include <string>
#include "sha1.h"
using namespace std;

class User
{
private:
	string _name;
	string _login;
	uint* _password;
	
	void setName(string name); // ������ ���
	void setPassword(string password); // ������ ������
	void setLogin(string login); // ������ �����

public:
	User();
	User(string name, string password, string login);
	User(const User& user);
	User& operator=(const User& user);
	~User();
	
	string getName() const; // �������� ���
	uint* getPassword() const; // �������� ������
	string getLogin() const; // �������� �����
	void setUserData(); // ������ �����, ������, ���

	friend ostream& operator<< (ostream& os, const User& user); // ����� ������ � �����
};