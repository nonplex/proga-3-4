#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int num;
	cout << "Нужный день недели ";
	cin >> num;
	if ((num > 0) && (num < 8)) {// Пределы для дней недели
		switch (num)//Интеграция Switch
		{
		case 1: cout << "Понедельник";//Ячека с ответо для цифры 1
			break;//Чтобы остановить код
		case 2: cout << "Вторник";//Ячека с ответо для цифры 2
			break;//Чтобы остановить код
		case 3: cout << "Среда";//Ячека с ответо для цифры 3
			break;//Чтобы остановить код
		case 4: cout << "Чеиверг";//Ячека с ответо для цифры 4
			break;//Чтобы остановить код
		case 5: cout << "Пятница";//Ячека с ответо для цифры 5
			break;//Чтобы остановить код
		case 6: cout << "Суббота";//Ячека с ответо для цифры 6
			break;//Чтобы остановить код
		case 7: cout << "Воскресенье";//Ячека с ответо для цифры 7
			break;//Чтобы остановить код

		}
	}
	else {
		cout << "Неподходящее условие" << endl;
	}
}
