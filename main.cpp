#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int grades[10];
	bool isRun = true;
	double sum = 0;
	double avg = 0;

	for (int i = 0; i < 10; i++) {
		bool isInRange = false;

		while (!isInRange) {
			cout << "grade " << i << " = ";
			cin >> grades[i];

			if (grades[i] > 0 && grades[i] <= 12) {
				isInRange = true;
			} else {
				cout << "Repeat, number is not valid" << endl;
			}
		}
	}

	while (isRun) {
		system("cls");
		cout << "Для вывода оценок введите 1" << endl;
		cout << "Для пересдачи введите 2" << endl;
		cout << "Для проверки возможнсти получения стипендии введите 3" << endl;
		cout << "Для выхода введите любое другое значение" << endl;
		int variant = 0;
		cin >> variant;

		switch (variant) {
			case 1:
				for (int i = 0; i < 10; i++) {
					cout << "grade " << i << " = " << grades[i] << endl;
				}
				break;
			case 2:
				int grade, index;
				cout << "Введите номер предмета: ";
				cin >> index;
				cout << "Введите новую оценку: ";
				cin >> grade;
				grades[index] = grade;
				cout << "Новая оценка установлена";
				break;
			case 3:
				for (int i = 0; i < 10; i++) {
					sum += grades[i];
				}

				avg = sum / 10;

				cout << "Cредняя оценка - " << avg << endl;
				avg > 10.7 ? cout << "Стипендия доступна" : cout << "Стипендии не будет";
				break;
			default:
				isRun = false;
		}

		cin.get(); cin.get();
	}

	return 0;
}
