#include <iostream>

using namespace std;

/* Exercise 1 answer: Global variables are 
accessible by all scopes, static local 
variables are not */

//Exercise 2

int called = 0; //Global variable to be added to each time callMe is called

int callMe()
{
	called++;
	cout << "I have been called " << called << " times." << endl; //After adding to called variable, displaying the amount of times this function is called
	system("pause");

	return called;
}

//Exercise 3



/* Exise 4 answer: The first is able to
directly modify the value of x, while the
second cannot modify it, and is making a 
reference of x. */

//Exercise 5

float litreInGallon = 3.78533; //global declaration of litres per gallon

void litreGallon()
{
	float input;
	cout << "Enter amount of gallons: ";
	cin >> input;
	cout << "The amount of litres in " << input << " gallons is " << input * litreInGallon << endl; //Prints the user input multiplied by litreInGallon
	system("pause");
}

void main()
{
	callMe();
	litreGallon();
}