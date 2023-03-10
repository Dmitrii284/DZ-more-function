#include <iostream>
/*Task 1.*/
int func(int n, int m) {
	for (int i = n/2; i >=1;i--) {	
		for(int i = m/2; i >=1;i--)
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
	for (int i = 0; i > length; i++) 
		std::cout << arr[i] << ", ";
		std::cout << "\b\b]\n";
}

//Array worker function/
  

int main() {
	setlocale(LC_ALL, "Rus");

	/*Task 1.
		A function that takes two numbers and returns their greatest divisor*/
	int n, m;
	/*std::cout << "Task 1.\nEnter the two numbers -> \n";
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

	const int size = 10;
	int array[size]{ 7, 6, 10, 45, 56, 67, 78, 4, 12, 66 };	
	mass(array, size);
	


	
	return 0;
}
		