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
		cout << "��� ������ ������ ������� 1" << endl;
		cout << "��� ��������� ������� 2" << endl;
		cout << "��� �������� ���������� ��������� ��������� ������� 3" << endl;
		cout << "��� ������ ������� ����� ������ ��������" << endl;
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
				cout << "������� ����� ��������: ";
				cin >> index;
				cout << "������� ����� ������: ";
				cin >> grade;
				grades[index] = grade;
				cout << "����� ������ �����������";
				break;
			case 3:
				for (int i = 0; i < 10; i++) {
					sum += grades[i];
				}

				avg = sum / 10;

				cout << "C������ ������ - " << avg << endl;
				avg > 10.7 ? cout << "��������� ��������" : cout << "��������� �� �����";
				break;
			default:
				isRun = false;
		}

		cin.get(); cin.get();
	}

	return 0;
}
