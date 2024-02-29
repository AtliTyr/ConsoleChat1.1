#include "UserBase.h"
#include <iostream>
#include "User.h"
#include "sha1.h"

UserBase::UserBase() = default;
UserBase::~UserBase() = default;
//UserBase::~UserBase()
//{
//	//delete[] list;
//
//	//list = nullptr;
//}
User& UserBase::operator[](int index)
{
	if (index >= 0 && index <= List.size())
	{
		int i = 0;
		for (list<User>::iterator it = List.begin(); it != List.end(); it++, i++)
			if (i == index)
				return *it;
	}
}

void UserBase::addUserToUserBase(const User& user)
{
	List.push_back(user);
}
void UserBase::deleteUserFromUserBase(std::string login)
{
	for (list<User>::iterator it = List.begin(); it != List.end();it++)
		if ((*it).getLogin() == login)
		{
			List.erase(it);
			break;
		}
}
void UserBase::displayUserBase()
{
	for (list<User>::iterator it = List.begin(); it != List.end(); it++)
	{
		cout << (*it) << endl;
	}
}
int UserBase::findUserIndex(std::string login)
{
	int i = 0;
	for (list<User>::iterator it = List.begin(); it != List.end(); it++, i++)
	{
		if ((*it).getLogin() == login)
		{
			return i;
		}
	}
	return -1;
}
bool UserBase::authorization(std::string login, std::string password)
{
	int index = findUserIndex(login);
	if (index != -1)
	{
		list<User>::iterator it = List.begin();
		for (int i = 0; i < index; i++)
		{
			it++;
		}

		char* temp = new char[password.length() + 1];
		strcpy_s(temp, password.length() + 1, password.c_str());

		uint* digest = sha1(temp, sizeof(temp) - 1);

		bool cmpHashes = !memcmp(
			(*it).getPassword(),
			digest,
			SHA1HASHLENGTHBYTES);
		
		delete[] digest;
		delete[] temp;

		return cmpHashes;
	}
	return false;
}