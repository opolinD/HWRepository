#include<stdio.h>
#include<math.h>
#include<locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int choise1 = 0, choise2 =0;
	printf("����� ����������!");
	Sleep(500);
	system("cls");
	printf("��������.");
	Sleep(500);
	system("cls");
	printf("��������..");
	Sleep(500);
	system("cls");
	printf("��������...");
	Sleep(500);
	system("cls");
	printf("��������.");
	Sleep(500);
	system("cls");
	printf("��������..");
	Sleep(500);
	system("cls");
	printf("��������...");
	system("cls");
	while (1) {
		printf("����� ������: \n");
		printf("1. �������������\n2. �����������\n3. ����\n0. ����� �� ����������\n����: ");
		scanf_s("%d", &choise1);
		system("cls");
		switch (choise1) {
		case 1:
			printf("������� ��� ������� ��������������: ");
			float a, b;
			scanf_s("%f %f", &a, &b);
			while (1) {
				printf("����:\n1. ����� ������� ��������������.\n2. ����� ������� ������������.\n3. ����� ��������� ������������.\n4. ��������� � ������ ������.\n0. ����� �� ����������.\n����: ");
				scanf_s("%d", &choise2);
				if (choise2 == 1) {
					system("cls");
					printf("������� ��������������: %.2f\n", a * b);
				}
				else if (choise2 == 2) {
					system("cls");
					printf("�������� �����: %.2f\n", 2 * (a + b));
				}
				else if (choise2 == 3) {
					system("cls");
					printf("�������� �������������� �����: %.2f\n", sqrt(a * a + b * b));
				}
				else if (choise2 == 4) {
					system("cls");
					break;
				}
				else {
					return(0);
				}
			}
			break;

		case 2:
			printf("������� ��� ������� �������������� ������������: ");
			float A, B;
			scanf_s("%f %f", &A, &B);
			while (1) {
				printf("����:\n1. ����� ������� ������������\n2. ����� �������� ������������.\n3. ����� ��������� ������������.\n4. ��������� � ������ ������.\n0. �����.\n����: ");
				scanf_s("%d", &choise2);
				if (choise2 == 1) {
					system("cls");
					printf("������� ������������: %.2f\n", A * B/2);
				}
				else if (choise2 == 2) {
					system("cls");
					printf("�������� ������������: %.2f\n", A+B+sqrt(A*A+B*B));
				}
				else if (choise2 == 3) {
					system("cls");
					printf("���������� ������������: %.2f\n", sqrt(A * A + B * B));
				}
				else if (choise2 == 4) {
					system("cls");
					break;
				}
				else {
					return(0);
				}
			}
			break;
		case 3:
			printf("������� ������ �����: ");
			float r;
			scanf_s("%f", &r);
			while (1) {
				printf("����:\n1. ����� ������� �����.\n2. ����� ����� ���������� �����.\n3. ����� ������� �����.\n4. ��������� � ������ ������.\n0. �����.\n����: ");
				scanf_s("%d", &choise2);
				if (choise2 == 1) {
					system("cls");
					printf("������� �����: %.2f\n", 3.14*r*r);
				}
				else if (choise2 == 2) {
					system("cls");
					printf("����� ���������� �����: %.2f\n", 2*3.14*r);
				}
				else if (choise2 == 3) {
					system("cls");
					printf("������� �����: %.2f\n", 2*r);
				}
				else if (choise2 == 4) {
					system("cls");
					break;
				}
				else {
					return(0);
				}
			}

			break;
		case 0:
			return(0);
		default: break;
		}
	}
}