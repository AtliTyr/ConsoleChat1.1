#include "ExceptionHandling.h"

const char* bad_Authorization::what() const noexcept
{
	return "ERROR: Авторизация не удалась";
}

const char* bad_Registration::what() const noexcept
{
	return "ERROR: Регистрация не удалась";
}

const char* bad_Recepient::what() const noexcept
{
	return "ERROR: Неверный получатель сообщения";
}

const char* bad_Delete::what() const noexcept
{
	return "ERROR: Нельзя удалить данного пользователя";
}