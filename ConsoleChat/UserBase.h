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

	// ƒобавл€ет пользовател€ в базу
	void addUserToUserBase(const User& user);

	// ”дал€ет пользовател€ из базы
	void deleteUserFromUserBase(std::string login);
	
	// ¬ывод логинов и имЄн пользователей
	void displayUserBase();

	// ¬озвращает индекс пользовател€ в базе данных если таковой имеетс€
	// » возвращает -1 если пользователь не найден
	int findUserIndex(std::string login); 
	
	// —вер€ет логин и пароль пользовател€ из базы , и если пользователь с
	// данным логином и паролЄм существует, то возвращает true
	// иначе false
	bool authorization(std::string login, std::string password);

};
