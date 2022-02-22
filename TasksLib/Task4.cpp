#include "pch.h"
#include "Task4.h"

void Task4::Run()
{
	system("cls");
	setlocale(LC_ALL, "Russian.utf8");

	std::string strNumber1;
	std::string strNumber2;	

	std::cout << "Введите первое число: ";
	std::getline(std::cin, strNumber1);
	std::cout << "Введите второй число: ";
	std::getline(std::cin, strNumber2);

	strNumber1 = RemoveSpaces(strNumber1);
	strNumber2 = RemoveSpaces(strNumber2);

	if (DataCorrectness(strNumber1) && DataCorrectness(strNumber2))
	{
		ComparisonOfRealNumbers(strNumber1, strNumber2);

		switch (ComparisonOfRealNumbers(strNumber1, strNumber2))
		{
			case ComparisonResultEnum::FIRST:
			{
				std::cout << "Первое число больше второго!" << std::endl;
				break;
			}
			case ComparisonResultEnum::SECOND:
			{
				std::cout << "Второе число больше первого!" << std::endl;
				break;
			}
			case ComparisonResultEnum::EQUALITY:
			{
				std::cout << "Числа равны!" << std::endl;
				break;
			}		
		}
	}
	else
	{
		std::cout << "Ошибка ввода данных!!!" << std::endl;
	}
}

ComparisonResultEnum Task4::ComparisonOfRealNumbers(std::string number1, std::string number2)
{
	bool key = true;
	
	std::string strIntegerPart1 = IntegerPartOfNumber(number1);        // целая часть первого действительного числа
	std::string strFractionalPart1 = FractionalPartOfNumber(number1);  // дробная часть первого действительного числа
	std::string strIntegerPart2 = IntegerPartOfNumber(number2);        // целая часть второго действительного числа
	std::string strFractionalPart2 = FractionalPartOfNumber(number2);  // дробная часть второго действительного числа

	if (strIntegerPart1 == "0" && 
		strFractionalPart1 == "0" &&
		strIntegerPart2 == "0" &&
		strFractionalPart2 == "0")
	{		
		return ComparisonResultEnum::EQUALITY;
	}

	_minusSign1 = (NumberOfSymbols(number1, '-') == 1);
	_minusSign2 = (NumberOfSymbols(number2, '-') == 1);

	if (_minusSign1 == true && _minusSign2 == false)
	{		
		return ComparisonResultEnum::SECOND;
	}

	if (_minusSign1 == false && _minusSign2 == true)
	{		
		return ComparisonResultEnum::FIRST;
	}

	auto result = ComparisonOfWholeParts(strIntegerPart1, strIntegerPart1);

	if (result == ComparisonResultEnum::EQUALITY)
	{

	}

	return result;
}

std::string Task4::RemoveSpaces(std::string str)
{
	str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
	return str;
}

std::string Task4::RemoveZerosBeforeNumber(std::string str)
{
	bool key = true;

	if (str == "") return str;

	for (size_t i = 0; i < str.length() && key; i++)
	{
		if (str[i] == '0')
		{
			str.erase(i, 1);
			i--;
		}
		else
		{
			key = false;
		}
	}

	return str;
}

std::string Task4::RemoveZerosAfterNumber(std::string str)
{
	bool key = true;

	if (str == "") return str;

	for (size_t i = str.length() - 1; i >= 0  && key; i--)
	{
		if (str[i] == '0')
		{
			str.erase(i, 1);
			i++;
		}
		else
		{
			key = false;
		}
	}

	return str;
}

bool Task4::Numeral(char chr)
{
	return (chr == '0') ||
		   (chr == '1') ||
		   (chr == '2') ||
		   (chr == '3') ||
		   (chr == '4') ||
		   (chr == '5') ||
		   (chr == '6') ||
		   (chr == '7') ||
		   (chr == '8') ||
		   (chr == '9');
}

int Task4::NumberOfSymbols(const std::string str, const char chr)
{
	int k = 0;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == chr) k++;
	}

	return k;
}

bool Task4::StringCorrectness(const std::string str)
{
	bool key = true;
	int k = 0;
	int p = 0;

	for (size_t i = 0; i < str.length() && key; i++)
	{
		key = key && (Numeral(str[i]) || str[i] == '.' || str[i] == '-');

		if (str[i] == '.' && key)
		{
			if (k >= 1) key = false;
			if (k < 1) k++;									
		}

		if (str[i] == '-' && key)
		{
			if (p >= 1) key = false;
			if (p < 1) p++;			
		}
	}

	return key;
}

bool Task4::DataCorrectness(std::string& str)
{
	str = RemoveSpaces(str);
	bool key = true;

	key = !(str.length() == 0);
	key = key && StringCorrectness(str);

	int p = NumberOfSymbols(str, '-');	
	int q = NumberOfSymbols(str, '.');

	if (q == 0)
	{
		str += ".0";
		q = 1;
	}

	key = key && !(p > 1 || q > 1);
	key = key && (((p == 1) && (str[0] == '-')) || (p == 0));
	key = key && !((q == 1) && (str[0] == '.' || str[str.length() - 1] == '.'));
	key = key && !(((p == 1) && (q == 1)) && (((str[0] == '-') && (str[1] == '.') || ((str[1] == '-') && (str[0] == '.')))));

	return key;
}

std::string Task4::IntegerPartOfNumber(std::string number)
{
	if (number[0] == '-') number.erase(0, 1);
	if (number == "") return "0";

	std::string temp;
	bool key = true;

	for (size_t i = 0; i < number.length() && key; i++)
	{
		if (number[i] == '.') key = false;

		if (key)
		{
			temp += number[i];
		}
	}

	temp = RemoveZerosBeforeNumber(temp);

	if (temp == "") return "0";
	
	return temp;
}

std::string Task4::FractionalPartOfNumber(std::string number)
{
	if (number == "") return "0";

	std::string temp;
	bool key = true;	

	for (size_t i = number.length() - 1; i >= 0 && key; i--)
	{
		if (number[i] == '.') key = false;

		if (key)
		{
			temp += number[i];
		}		
	}

	reverse(temp.begin(), temp.end());
	temp = RemoveZerosAfterNumber(temp);

	if (temp == "") return "0";

	return temp;
}

ComparisonResultEnum Task4::ComparisonOfWholeParts(const std::string strIntegerPart1, const std::string strIntegerPart2)
{
	if (((strIntegerPart1.length() > strIntegerPart2.length()) && (_minusSign1 == true && _minusSign2 == true)) ||
		((strIntegerPart1.length() < strIntegerPart2.length()) && (_minusSign1 == false && _minusSign2 == false)))
	{		
		return ComparisonResultEnum::SECOND;
	}

	if (((strIntegerPart1.length() > strIntegerPart2.length()) && (_minusSign1 == false && _minusSign2 == false)) ||
		((strIntegerPart1.length() < strIntegerPart2.length()) && (_minusSign1 == true && _minusSign2 == true)))
	{		
		return ComparisonResultEnum::FIRST;
	}

	for (size_t i = 0; i < strIntegerPart1.length(); i++)
	{
		if (((strIntegerPart1[i] > strIntegerPart2[i]) && (_minusSign1 == true && _minusSign2 == true)) ||
			((strIntegerPart1[i] < strIntegerPart2[i]) && (_minusSign1 == false && _minusSign2 == false)))
		{
			return ComparisonResultEnum::SECOND;
		}

		if (((strIntegerPart1[i] > strIntegerPart2[i]) && (_minusSign1 == false && _minusSign2 == false)) ||
			((strIntegerPart1[i] < strIntegerPart2[i]) && (_minusSign1 == true && _minusSign2 == true)))
		{
			return ComparisonResultEnum::FIRST;
		}
	}

	return ComparisonResultEnum::EQUALITY;
}

ComparisonResultEnum Task4::ComparisonOfFractionalParts(const std::string strFractionalPart1, const std::string strFractionalPart2)
{


	return ComparisonResultEnum::EQUALITY;
}
