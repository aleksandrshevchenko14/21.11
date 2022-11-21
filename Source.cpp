#include <iostream>
#include <ctime>
using namespace std;
int sign(double x) {
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;
}
int rootsCount(double a, double  b, double c) {
	double d = b * b - 4 * a * c;
  if (d < 0) return 0;
  if (d == 0) return 1;
  if (d > 0) return 2;
  }
double CircleS(double r) {
	return 3.14 * r * r;
   }
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	//Proc16.Описать функцию Sign(X) целого типа, возвращающую для вещественного числа X следующие значения :
	// если x < 0, то -1;
	//если x = 0, то 0;
	//если x > 0, то 1;
	//С помощью этой функции найти значение выражения Sign(A) + Sign(B) для данных вещественных чисел A и B.
	/*
	double a, b;
	cin >> a >> b;
	cout << sign(a) + sign(b) << endl;
    */
	//Proc17.Описать функцию RootsCount(A, B, C) целого типа, определяющую количество корней квадратного уравнения A·x 2 + B·x + C = 0 (A, B, C —
	//вещественные параметры, A 6 = 0).С ее помощью найти количество корней для каждого из трех квадратных уравнений с данными коэффициентами.
	//Количество корней определять по значению дискриминанта D = B^2 − 4·A·C.
	/*
	double a, b, c;
	for (int i = 1; i <= 3; i++) {
		cin >> a >> b >> c;
		cout << rootsCount(a, b, c) << endl;
	}*/
	//Proc18.Описать функцию CircleS(R) вещественного типа, находящую площадь круга радиуса R(R — вещественное).С помощью этой функции
	//найти площади трех кругов с данными радиусами.Площадь круга радиуса R вычисляется по формуле S = π·R 2.В качестве значения π использовать 3.14.
	double r, p = 3.14;
	for (int i = 1; i <= 3; i++) {
	cin >> r;
	cout << CircleS(r) << endl;
	}
}