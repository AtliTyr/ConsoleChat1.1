#include "ExceptionHandling.h"

const char* bad_Authorization::what() const noexcept
{
	return "ERROR: ����������� �� �������";
}

const char* bad_Registration::what() const noexcept
{
	return "ERROR: ����������� �� �������";
}

const char* bad_Recepient::what() const noexcept
{
	return "ERROR: �������� ���������� ���������";
}

const char* bad_Delete::what() const noexcept
{
	return "ERROR: ������ ������� ������� ������������";
}