#pragma once
#include "UserBase.h"
#include <vector>
#include "Message.h"
#include <iostream>

using namespace std;

class Chat
{
private:
	std::vector <Message> chat; // ћассив сообщений чата
	UserBase base; // Ѕаза пользователей чата
	User authorized; // јвторизованный в данный момент пользователь
public:
	Chat();
	~Chat();

	// јвторизаци€ в чате, возвращает true если введЄнные логин и пароль совпадают в базе пользователей
	bool EnterChat();

	// –егистраци€ с учЄтом проверки на уникальность логина в базе пользователей
	void Registration();

	// ”скоренный вариант регистрации , без проверок на уникальность логина , дл€ быстрого ƒебагга
	void Registration(std::string name, std::string login, std::string password);
	
	// ѕозвол€ет написать общедоступное сообщение
	void WriteMessageToAll();
	
	// ѕозвол€ет написать сообщение , доступное только дл€ пользовател€ , с заданным логином
	void WritePrivateMessage(std::string login);
	
	// ƒобавл€ет в чат несколько общедоступных сообщений.Ќужно было дл€ проверки работоспособности.ћожно удалить
	void WriteTestMessages();
	
	// ¬ывод сообщений
	void CheckMessage();

	// ”дал€ет текущего авторизованного пользовател€ из базы пользователей чата
	void DeleteUserFromChat();
 
	// ¬ывод пользователей чата
	void DisplayUserList();	
};