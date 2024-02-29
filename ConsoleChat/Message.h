#pragma once
#include <string>
using namespace std;

class Message
{
private:
	string FROM; //Логин отправителя
	string TO;	// Логин получателя
	string MESSAGE; // Отправляемое сообщение
public:
	Message() = default;
	~Message() = default;
	Message(string from, string to, string message);
	void senderOfMessage(string sender_l); // Задать логин отправителя
	void recipientOfMessage(string recipient_l); // Задать логин получателя
	void setMessage(string message); // Задать текст сообщения
	string getSenderOfMessage() const; // Получить логин отправителя
	string getRecepientOfMessage() const; // Получить логин получателя
	string getMessage() const; // Получить текст сообщения
};