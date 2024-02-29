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
	
	void setName(string name); // Задать имя
	void setPassword(string password); // Задать пароль
	void setLogin(string login); // Задать логин

public:
	User();
	User(string name, string password, string login);
	User(const User& user);
	User& operator=(const User& user);
	~User();
	
	string getName() const; // Получить имя
	uint* getPassword() const; // Получить пароль
	string getLogin() const; // Получить логин
	void setUserData(); // Задать логин, пароль, имя

	friend ostream& operator<< (ostream& os, const User& user); // Вывод логина и имени
};