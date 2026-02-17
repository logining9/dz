#include <iostream> 
#include "Film.hpp"
using namespace std;

bool Film::menu() {
	cout << "1 - добавить задачу;\n2 - показать все задачи;\n3 - удалить задачу;\n0 - Выход;" << endl;
	int temp;
	try {
		cin >> temp;
	}
	catch (exception x) {
		cout << "Некоректный ввод!" << endl;
	}
	switch (temp)
	{
	case 1:
		add();
		break;
	case 2:
		print_all();
		break;
	case 3:
		del();
		break;
	case 0:
		return false;
		break;
	default:
		return true;
		break;
	}
}
void Film::add() {
	film newfilm;
	string name;
	cout << "Введите название задачи:" << endl;
	cin >> name;
	cout << "Введите текст задачи:" << endl;
	cin >> newfilm.text;
	cout << "Введите дату(срок выполнения) задачи:" << endl;
	cin >> newfilm.date;
	films[name] = newfilm;
}
void Film::del() {
	string title;
	cout << "Введите название задачи для удаления:" << endl;
	cin >> title;
	films.erase(title);
	cout << "Задача " << title << " успешно удалёна" << endl;
}
void Film::print_all() {
	cout << "Список задач:" << endl;
	for (const auto& [x, y] : films) {
		cout << x << " : Текст задачи - " << y.text << ", срок выполнения задачи - " << y.date << endl;
	}
}

void start() {
	Film ff;
	bool temp = true;
	cout << "\t\tTo-Do List\t\t" << endl;
	while (temp) {
		temp = ff.menu();
	}
}