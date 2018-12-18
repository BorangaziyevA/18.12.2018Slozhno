#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<time.h>

void task7()
{
	int N = 1 + rand() % 10;
	int NF = 1;
	for (size_t i = 1; i <= N; i++)
	{
		NF =i*NF;
		printf("factorial of %d = %d\n",i, NF);
	}
}
void task6()
{
	float Area = 1000;
	float U = 200;
	float totalA;
	float totalU;
	for (size_t i = 1998; i < 2008; i++)
	{
		Area = Area * 1.05;
		U = U * 1.02;
		printf("year:%d\t area:%f\t Urozhai:%f \n",i,Area,U);
		totalA = Area;
		totalU = U;
	}
	printf("%f\n", totalA);
	printf("%f\n", totalU);
}
void task5()
{
	float area = 0;
	for (size_t i = 0; i < 13; i++)
	{
		int zhit = 1000 + rand() % 100000;
		int plot = 1 + rand() % 25;
		area = area + float(zhit / plot);
		printf("Район: %d\t Площадь:%f\t Жителей:%d\t Плотность населения:%d\t\n",i,area,zhit,plot);
	}
}
void task4()
{
	int A = -100 + rand() % 100;
	int N = 0 + rand() % 10;
	int count = 0;

	printf("A = %d\n", A);
	printf("N = %d\n", N);

	for (size_t i = 0; i <= N; i++)
	{
		int S = pow(A, i);
		count = count +S;
		printf("%d\n", count);
	}
	printf("Последнее число это сумма всех чисел.");

}
void task3()
{
	//Она такая же как и вторая
}
void task2()
{
	int A = -10 + rand() % 10;
	int N = 1 + rand() % 10;

	for (size_t i = 0; i <= N; i++)
	{
		int S = pow(A, i);
		printf("%d в степени %d = %d\n", A, i, S);
	}


	
}
void task1()
{
	int A = 1 + rand() % 100;
	int B = 1 + rand() % 100;

	printf("B = ");
	printf("%d\n", B);
	printf("A = ");
	printf("%d\n", A);

	if (A > B)
		printf("ERROR\n");

	int count = 0;

	for (int i = A; i <= B; i++)
	{
		printf("%d\n", i);
		count = count + 1;
	}
	printf("Чисел было:");
	printf("%d\n", count);
}
void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	int task;
	int flag;

	do
	{
		system("cls");

		printf("Введите номер задачи: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:task1(); break;
		case 2:
		case 3:
			task2(); break;
		case 4:task4(); break;
		case 5:task5(); break;
		case 6:task6(); break;
		case 7:task7(); break;
		default:
			break;
		}

		printf("Хотите продолжить?1/0");
		scanf_s("%d", &flag);

	} while (flag == 1);
}