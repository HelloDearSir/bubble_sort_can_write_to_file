#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <fstream>
using namespace std;

int i; 

void bubble(int numbers[], int);
void print(int numbers[], int);
fstream write; 

int main(void)
{
	

	srand (NULL()); //random genador
	int SIZE;
	cout << endl << "How big you want the  array ? : "; //this allow me to go up to 10,000 
	cin >> SIZE; // stores the array size. 
	int* numbers = new int[SIZE];  

	for (int i = 0; i < SIZE; i++)  //the for loop for being up the size with random numbers from 0 - 999 
	{
		numbers[i] = rand() % 1000;//numbers will all be random. 
	}
	
	write.open("sort.txt", ios::out);
	
	if (write.fail())
	{
		cout << "Fails cant be found" << endl; 
	}
	else {
		write << " Numbers  in origional order:" << endl;
		print(numbers, SIZE); //Prints out the original order 

		bubble(numbers, SIZE); // sorts out the list 

		write << "\Number in the right  order:" << endl;
		print(numbers, SIZE);  // prints out the new order. 


	} 
	write.close();
	_getch(); 
	return 0;
}


void print(int numbers[], int SIZE)
{
	for (i = 0; i < SIZE; ++i)
	{
		write << numbers[i] << endl;
	}
}

void bubble(int numbers[], int SIZE)
{
	int temp;
	for (int move_n = 1; move_n < SIZE; ++move_n) {
		for (int i = 0; i < SIZE - 1; ++i) {
			if (numbers[i] > numbers[i + 1]) {
				temp = numbers[i];
				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;
			}
		}
	}
}