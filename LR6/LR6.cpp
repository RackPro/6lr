#include <iostream>
using namespace std;

void vivodmax() {      //задание 1
	int a1, a2, a3;

	cout << "Введите первое число - " << endl;
	cin >> a1;
	cout << "Введите второе число - " << endl;
	cin >> a2;
	cout << "Введите третье число - " << endl;
	cin >> a3;
	cout << "Максимальное число - ";

	if (a1 >= a2 && a1 >= a3) {
		cout << a1 << endl;
	}
	else if (a2 >= a1 && a2 >= a3) {
		cout << a2 << endl;
	}
	else cout << a3 << endl;
}

void zadan2(int& a1, int& a2, int& a3) {     //задание 2
	int k2 = 0; //для выбора варианта второго меню
	while (k2 != 4) {
		system("pause");
		system("cls");
		cout << "Выберете один из четырёх вариантов" << endl;
		cout << "----------------------------------" << endl;
		cout << "1 - Ввод верхнего предела (На данный момент он равен - " << a1 << ")" << endl;
		cout << "2 - Ввод нижнего предела (На данный момент он равен - " << a2 << ")" << endl;
		cout << "3 - Изменить входящее число повторным вводом (На данный момент оно равно - " << a3 << ")" << endl;
		cout << "4 - Продолжить проверку (выход из меню)" << endl;
		cout << "----------------------------------" << endl;
		cout << "Твой выбор - " << endl;
		cin >> k2;
		switch (k2) {
		case(1):
			system("cls");
			cout << "Изменить верхний предел на - ";
			cin >> a1;
			cout << endl;
			break;
		case(2):
			system("cls");
			cout << "Изменить нижний предел на - ";
			cin >> a2;
			cout << endl;
			break;
		case(3):
			system("cls");
			cout << "Изменить входящее число на - ";
			cin >> a3;
			cout << endl;
			break;
		}
		if (k2 == 4) break;
	}
}

void predeli(int& p1, int& p2) {
	int p3;
	cout << "Введи входящее число" << endl;
	cin >> p3;
	while (true) {
		if (p1 < p3 && p3 < p2) {
			cout << "Число входит в интервал" << endl;
			break;
		}
		else
		{
			zadan2(p1, p2, p3);
		}
	}
}

void vvodm(int N, int* a) {
	cout << "Введи элементы массива" << endl;
	for (int i = 0; i < N; i++) {
		cout << "Введи " << i + 1 << " элемент - ";
		cin >> a[i];
	}
}

void sortvst(int N, int a[]) {
	int k = 0;
	int t = 0;
	for (int i = 0; i < N - 1; i++)
	{
		k = i + 1;
		t = a[k];
		for (int j = i + 1; j > 0; j--)
		{
			if (t < a[j - 1])
			{
				a[j] = a[j - 1];
				k = j - 1;
			}
		}
		a[k] = t;
	}
}

void vivod(int N, int a[]) {
	cout << "Вывод массива" << endl;
	for (int i = 0; i < N; i++) {
		cout << i + 1 << ")элемент - " << a[i] << endl;
	}
}

void sortvst() {     //задание 3
	int N;
	cout << "Введи кол-во чисел в масиве" << endl;
	cin >> N;
	int* a = new int[N];
	vvodm(N, a);
	sortvst(N, a);
	vivod(N, a);
}



int main()
{
	setlocale(LC_ALL, "ru");
	int k1 = 0; //для выбора варианта первого меню
	while (k1 != 4) {
		system("pause");
		system("cls");
		cout << "Выберете один из четырёх вариантов" << endl;
		cout << "----------------------------------" << endl;
		cout << "1 - Функция которая возвращает максимальное из трёх целочисленных аргументов" << endl;
		cout << "2 - (Начать смотреть второе задание) -Войти в меню второго задания (верхний и нижний предел, входящее целое число)" << endl;
		cout << "3 - Сортировка массива вставками" << endl;
		cout << "4 - выход из программы" << endl;
		cout << "----------------------------------" << endl;
		cout << "Твой выбор - " << endl;
		cin >> k1;
		switch (k1) {
		case(1):
			system("cls");
			vivodmax();
			break;
		case(2):
			system("cls");
			int n1, n2;
			cout << "Введите нижни предел" << endl;
			cin >> n1;
			cout << "Введите верхний предел" << endl;
			cin >> n2;
			predeli(n1, n2);
			break;
		case(3):
			system("cls");
			sortvst();
			break;
		}
		if (k1 == 4) break;
	}
}

