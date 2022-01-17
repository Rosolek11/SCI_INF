#include <iostream>
#include <algorithm>
#include "addition.h"
#include "algorytm.h"
using namespace std;
char getAlgoritm()
{
	char algoritm;
	cout << "wybierz algorytm sortowania" << endl;
	cout << "1) bouble sort" << endl;
	cout << "2) insertion sort" <<endl;
	cout << "3) selection sort" << endl;
	cout << "4) std sort" << endl;

	cin >> algoritm;

	return algoritm;
}

int main()
{
	int size;
	char type;

	cout << "podaj ilosc elementow" << std::endl;
	cin >> size;

	//funkcje i klasy dla int
	vector<int>* arrayInt = new vector<int>(size);
	VectorAddition<int>* vectorFunctionsInt = new VectorAddition<int>;
	SortAlgoritm<int>* sortAlgoritmInt = new SortAlgoritm<int>;

	//funkcje i klasy dla float
	vector<float>* arrayFloat = new vector<float>(size);
	VectorAddition<float>* vectorFunctionsFloat = new VectorAddition<float>;
	SortAlgoritm<float>* sortAlgoritmFloat = new SortAlgoritm<float>;

	//funkcje i klasy dla char
	vector<char>* arrayChar = new vector<char>(size);
	VectorAddition<char>* vectorFunctionsChar = new VectorAddition<char>;
	SortAlgoritm<char>* sortAlgoritmChar = new SortAlgoritm<char>;

	cout << "podaj typ datnych" << endl;
	cout << "1) int" << endl;
	cout << "2) float" << endl;
	cout << "3) char" ;

	cin >> type;

	switch (type)
	{
		case '1':
			vectorFunctionsInt->fillVector(*arrayInt, 1000);
			vectorFunctionsInt->printVector(*arrayInt);

			switch (getAlgoritm())
			{
			case '1':
				sortAlgoritmInt->bubbleSort(*arrayInt);
				break;
			case '2':
				sortAlgoritmInt->insertionSort(*arrayInt);
				break;
			case '3':
				sortAlgoritmInt->selectionSort(*arrayInt);
				break;
			case '4':
				std::sort(arrayInt->begin(), arrayInt->end());
				break;
			}

			cout << "posortowane: " << endl;
			vectorFunctionsInt->printVector(*arrayInt);

			break;
	
		case '2':
			vectorFunctionsFloat->fillVector(*arrayFloat, 1000);
			vectorFunctionsFloat->printVector(*arrayFloat);

			switch (getAlgoritm())
			{
			case '1':
				sortAlgoritmFloat->bubbleSort(*arrayFloat);
				break;
			case '2':
				sortAlgoritmFloat->insertionSort(*arrayFloat);
				break;
			case '3':
				sortAlgoritmFloat->selectionSort(*arrayFloat);
				break;
			case '4':
				std::sort(arrayFloat->begin(), arrayFloat->end());
				break;
			}

			cout << "posortowane: " << endl;
			vectorFunctionsFloat->printVector(*arrayFloat);

			break;

		case '3':
			vectorFunctionsChar->fillVector(*arrayChar, 255);
			vectorFunctionsChar->printVector(*arrayChar);
			
			switch (getAlgoritm())
			{
			case '1':
				sortAlgoritmChar->bubbleSort(*arrayChar);
				break;
			case '2':
				sortAlgoritmChar->insertionSort(*arrayChar);
				break;
			case '3':
				sortAlgoritmChar->selectionSort(*arrayChar);
				break;
			case '4':
				std::sort(arrayChar->begin(), arrayChar->end());
				break;
			}

			cout << "posortowane: " << endl;
			vectorFunctionsChar->printVector(*arrayChar);
			
			break;
	}
	return 0;
}