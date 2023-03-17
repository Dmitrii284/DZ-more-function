#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
/*Task 1.*/
int func(int n, int m) {
	for (int i = n / 2; i >= 1; i--) {
		for (int i = m / 2; i >= 1; i--)
			if (n % i == 0 && m % i == 0)
				return i;
	}
}
/*Task 2.*/
int mirror_namber(int n) {
	int revers = 0, remainder;
	while (n != 0) {
		remainder = n % 10;
		revers = revers * 10 + remainder;
		n /= 10;
	}
	return revers;
}
/*Task 3.*/
// Output initial array.
template <typename T>
void mass(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
//Array worker function
void move_mass(int arr[], const int length, int n) {
	int b = 0;
	for (int i = 0; i < length; i++) 
		if (arr[i] == n) {
			b = i;
			break;
		}
		// sort		
		std::sort(arr + b + 1, arr + length);		
		std::cout << "\nИндекс заданного числа:  "<< arr[b] <<" является: " << b <<'\n'<< std::endl;
}

//Task 4.
void fill_arr(int arr[], const int length, int num1, int num2) {
	int start = 0;
	srand(time(NULL));
	for (int i = 0; i < length; i++) 
		arr[i] = rand()%(num1 - num2) + num1;
}
void sort_mass(int arr[], const int length) {
	int first = 0, last = 0;
	for (int i = 0; i < length; i++)
		if (arr[i] < 0) {
			first = i;
			break;
		}
	for (int i = length - 1; i > 0; i--)
		if (arr[i] < 0) {
			last = i;
			break;
		}
	for (int i = first; i < last; i++)
		arr[i];
}

int main() {
	setlocale(LC_ALL, "Rus");

	/*Task 1.
		A function that takes two numbers and returns their greatest divisor*/
	/*int n, m;
	std::cout << "Task 1.\nEnter the two numbers -> \n";
	std::cin >> n >> m;
	std::cout<< "\nTheir greatest divisor: " << func(n, m) << std:: endl;*/


	/*Task 2.
		Write a function that takes a number and returns it in reflection form.*/

		/*std::cout << "\nTask 2.\nEnter the number and returns it in reflection form.\n";
		std::cout << "Enter the number -> ";
		std::cin >> m;
		std::cout << "Returning a number in reflection form: " << mirror_namber(m)<< std::endl;*/

		/*Task 3.
			The function takes an array, its lengthand, and the number N. We find the element of the array,
			sort the number to the right of the given number and display its position.*/
	/*std::cout << "\nTask 3.\nSort the number to the right of the given number and display its position.\n";
	const int size = 10;
	int array[size]{ 7, 6, 10, 45, 56, 67, 78, 4, 12, 66 };
	int f = 45;
	std::cout << "\nИзначальный массив: \n";
	mass(array, size);
	
	 move_mass(array, size, f);
	 std::cout << "Итоговый массив: \n";
	 mass(array, size);
	 std::cout << std::endl;
	 */

	/*Task 4
		Create a function that accepts empty
	array, its length and two numbers A and B which are
	start and end of the range. The function should
	fill an array with random numbers from the specified
	range.*/
	std::cout << "\nTask 4.\nThe function an array with random numbers from the specified range.\n";
	std::cout << "Initial array : \n";
	const int size1 = 15;
	int arr1[size1];
	fill_arr(arr1, size1, 10, 15);
	mass(arr1, size1);
	sort_mass(arr1, size1);
	mass(arr1, size1);
	std::cout << std::endl;

	return 0;
}
