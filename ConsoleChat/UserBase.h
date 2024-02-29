#pragma once
#include "User.h"
#include <list>

class UserBase
{
private:
	//User* list = nullptr;
	list<User> List;
	int UserCount{0};
public:
	UserBase();
	~UserBase();
	User& operator[](int index);

	// ��������� ������������ � ����
	void addUserToUserBase(const User& user);

	// ������� ������������ �� ����
	void deleteUserFromUserBase(std::string login);
	
	// ����� ������� � ��� �������������
	void displayUserBase();

	// ���������� ������ ������������ � ���� ������ ���� ������� �������
	// � ���������� -1 ���� ������������ �� ������
	int findUserIndex(std::string login); 
	
	// ������� ����� � ������ ������������ �� ���� , � ���� ������������ �
	// ������ ������� � ������ ����������, �� ���������� true
	// ����� false
	bool authorization(std::string login, std::string password);

};
