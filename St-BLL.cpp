#include <iostream>
using namespace std;

struct student {
	double score;
	int id;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int x, n = 1, z = 0, f = 0;

		cout << "�������� ���������� n ���������: ";
		cin >> x;
		cout << "������� ���� ���������:" "\n";
		// �������� ������ + �������� ������� 
		student arr[100], arr1[100];
		int z = 0, d = 0;
		double y = 0;
		for (int i = 0; i < 100; i++) {
			arr[i].score = 0;
			arr[i].id = 0;
		}
		// ������ ��������� 
		for (int i = 0; i < 100; i++) {
			cout << "[" << i + 1 << "]" << ":";
			cin >> arr[i].score;
			z++;
			arr[i].id += z;
			n++; if (n > x && n != x) { break; }
		}

		for (int i = 0; i < 100; i++)
			arr1[i] = arr[i];


		// ������ �� ��������
		for (int i = 1; i < x; ++i)
		{
			for (int r = 0; r < x - i; r++)
			{
				if (arr[r].score < arr[r + 1].score)
				{
					// ����� �������
					int temp = arr[r].score;
					arr[r].score = arr[r + 1].score;
					arr[r + 1].score = temp;
				}
			}
		}
		//����� ���������������� �������
		cout << "����� ��������� � ������� ��������: ";
		for (int i = 0; i < x; ++i)
		{
			cout << arr[i].score << " ";
		}
		cout << endl;

		// ������� ���
		for (int i = 0; i < 10; i++) {
			y += arr[i].score;
		};
		cout << "������� ��� ���������:" << y / x << "\n";

		cout << "��� ����������� ��������:";
		cin >> f;
		f -= 1;
		cout << arr1[f].score;

	cin.get();
}