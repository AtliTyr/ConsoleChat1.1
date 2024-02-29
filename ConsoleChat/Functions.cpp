#include <iostream>
#include "Chat.h"
#include "ExceptionHandling.h"
#include <conio.h>

using namespace std;

extern Chat chat1;

void DisplayValidUsers()
{
	cout << "Доступные пользователи: " << endl
			 << "login: admin		login: A" << endl
		     <<	"password: admin		password: A" << endl;
}

string loginRequest()
{
	string login;
	cout << "Логин получателя: ";
	getline(cin, login);
	return login;
}

void Menu1()
{

	cout << "#####################" << endl
		<< "1: Зарегистрироваться" << endl
		<< "2: Войти в чат" << endl
		<< "3: Выход" << endl
		<< "#####################" << endl
		<< ">";

}

void Menu2()
{
	cout << "\n 1 - Написать сообщение в общий чат " << endl
			<< " 2 - Написать личное сообщение " << endl
			<< " 3 - Прочесть сообщения " << endl
			<< " 4 - Просмотреть пользователей " << endl
			<< " 5 - Удалить аккаунт " << endl
			<< " 6 - Выйти из чата " << endl
			<< " >";
}

void ChatMenu()
{
	char ch = ' ';

	cout << "\n####Добро Пожаловать#####\n" << endl;

	do
	{

		Menu2();

		(cin>>ch).ignore();
		system("cls");

			switch (ch)
			{
			case '1':
				chat1.WriteMessageToAll();
				break;
			case '2':
			{
				try
				{
					chat1.WritePrivateMessage(loginRequest());
				}
				catch (exception& e)
				{
					cout << e.what() << endl;
				}
			}
			break;
			case '3':
				chat1.CheckMessage();
				break;
			case '4':
				chat1.DisplayUserList();
				break;
			case '5':
				try
				{
					chat1.DeleteUserFromChat();
				}
				catch (exception& e)
				{
					cout << e.what() << endl;
					ch = ' ';
				}
				break;
			case '6':
					break;
			default:
				break;
			}

	} while (ch != '6' && ch != '5');
}

void MainMenu()
{

	char ch = 0;

	do
	{
		DisplayValidUsers();
		Menu1();

		(cin >> ch).ignore();
		system("cls");
		switch (ch)
		{
		case '1':
			try
			{
				chat1.Registration();
			}
			catch (exception& e)
			{
				cout << e.what() << endl;
			}
			break;
		case '2':
			try
			{
				if (chat1.EnterChat())
				{
					ChatMenu();
				}
			} 
			catch (exception& e)
			{
				cout << e.what() << endl;
			}
			break;
		default:
			break;
		}

	} while (ch != '3');
}