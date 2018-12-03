#include <iostream>
#include <string>
#include "aeroflot.h"

using namespace std;

/*
	Определить класс с именем АЕRОFLОТ, содержащий следующие поля: 
	-название пункта назначения рейса; 
	-номер рейса; 
	-тип самолета. 
	Определить методы доступа к этим полям и перегруженные операции извлечения и вставки для объектов типа АЕRОFLОТ. 
	Написать программу, выполняющую следующие действия: 
	-ввод с клавиатуры данных в массив, состоящий из семи объектов типа АЕRОFLОТ; записи должны быть размещены в алфавитном порядке по названиям пунктов назначения; 
	-вывод на экран пунктов назначения и номеров рейсов, обслуживаемых самолетом, тип которого введен с клавиатуры; 
	-если таких рейсов нет, выдать на дисплей соответствующее сообщение.
*/

// сортировка по алфавиту
void SortByAlphabet(AEROFLOT *aeroflot, int n) {
	bool isSorted = false;

	while (!isSorted) {
		isSorted = true;

		for (int i = 0; i < n - 1; i++) {
			if (aeroflot[i].getDestination() > aeroflot[i + 1].getDestination()) {
				AEROFLOT tmp = aeroflot[i];
				aeroflot[i] = aeroflot[i + 1];
				aeroflot[i + 1] = tmp;
				isSorted = false;
			}
		}
	}
}

int main() {
	const int N = 7;

	AEROFLOT *aeroflot = new AEROFLOT[N]; // создаём массив из N элементов
	cout << "Enter information about objects:" << endl;

	// читываем информацию об N объектах
	for (int i = 0; i < N; i++)
		aeroflot[i].Read();

	cout << endl << "Entered information: " << endl;

	// выводим введённые данные
	for (int i = 0; i < N; i++)
		aeroflot[i].Print();

	SortByAlphabet(aeroflot, N);

	cout << endl << "Sorted information: " << endl;

	// выводим отсортированные данные
	for (int i = 0; i < N; i++)
		aeroflot[i].Print();

	delete[] aeroflot;
	
	return 0;
}