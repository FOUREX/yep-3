#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>


void pause() {
	printf("\n");
	system("pause");
}


void clear() {
	system("cls");
}


int fucktoriel(int num) {
	int result = 1;

	for (int i = 1; i <= num; i++) {
		result *= i;
	}

	return result;
}


void yep_1() {
	int x;
	float y, s, m, k;

	s = m = k = 0;

	printf("Calculate the equation\n\n\n");
	printf("Results: \n\n");

	for (x = 1; x < 50; x += 2) {
		float _x = (float)x;
		y = powf(_x, 3) + s * powf(_x, 5) - m * k + sqrtf(_x + m - k);

		printf("y(%d) = %.3f\n", x, y);
		Sleep(50);
	}
}


void yep_2() {
	float cost;

	printf("Calculate the price of cookies\n\n\n");
	printf("Enter cost of 1kg cookies: ");
	scanf("%f", &cost);
	printf("Results: \n\n");

	for (int weight = 1; weight <= 10; weight++) {
		float sum = (float)weight * cost;
		printf("%dkg of cookies = %.2f UAH\n", weight, sum);
	}
}


void yep_3() {
	int a, b, sum;

	printf("The sum of the squares of all integers from A to B inclusive\n\n\n");
	printf("Enter numbers:\n");
	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);
	printf("Results: \n\n");

	for (int i = a - a; i <= b; i++) {
		sum += (int)pow(i, 2);
	}

	printf("Sum = %d\n", sum);
}


void yep_4() {
	int n, sum = 0;

	printf("Sum of numbers factorials\n\n\n");
	printf("Enter numbers:\n");
	printf("N: ");
	scanf("%d", &n);
	printf("Results: \n\n");

	for (int i = 1; i <= n; i++) {
		sum += fucktoriel(i);
	}

	printf("Sum of factorials = %d\n", sum);
}


int main() {
	int input;

	while (1) {
		clear();

		printf("FUNCTIONS:\n\n");

		printf("1. Calculate the equation\n");
		printf("2. Calculate the price of cookies\n");
		printf("3. The sum of the squares of all integers from A to B inclusive\n");
		printf("4. Sum of numbers factorials\n");
		printf("5. Exit\n");

		printf("\nSelect function: ");
		scanf("%d", &input);

		clear();

		switch (input) {
			case 1:
				yep_1();
				break;
			case 2:
				yep_2();
				break;
			case 3:
				yep_3();
				break;
			case 4:
				yep_4();
				break;
			case 5:
				clear();
				exit(0);
			default:
				printf("Bruh... %d, rly?", input);
		}

		pause();
	}
}