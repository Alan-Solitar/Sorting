#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ASorter.h"

void printArr(int arr[], int size);
void printArr(std::vector<int> v);
void randomizeArray(int arr[], int size); //fills the array up with randomized values
void randomizeArray(std::vector<int> &vec, int size);

//Driver program to test sorting functions
int main()
{
	srand(time(NULL));
	//Array Sorting
	int size = 10;
	int arr[10] = { 0 };

	std::cout<<"Array Sorting:\n"<<std::endl;
	randomizeArray(arr, size);
	std::cout << "Insertion sort\nUnsorted: ";
	printArr(arr,size);
	ASorter::insertionSort(arr, size);
	std::cout << "Sorted: ";
	printArr(arr, size);
	std::cout << std::endl;
	randomizeArray(arr, size);
	std::cout << "Selection Sort\nUnsorted: ";
	printArr(arr, size);
	ASorter::selectionSort(arr, size);
	std::cout << "Sorted: ";
	printArr(arr, size);
	std::cout << std::endl;
	randomizeArray(arr, size);
	std::cout << "Merge Sort\nUnsorted: ";
	printArr(arr, size);
	ASorter::mergeSort(arr, 0, size - 1);
	std::cout << "Sorted: ";
	printArr(arr, size);
	std::cout << std::endl;
	randomizeArray(arr, size);
	std::cout << "Quick Sort\nUnsorted: ";
	printArr(arr, size);
	ASorter::quickSort(arr, 0, size - 1);
	std::cout << "Sorted: ";
	printArr(arr, size);
	std::cout << std::endl;
	
	//Vector Sorting
	
	std::vector<int> vec;
	int size2 = 10;
	
	std::cout<<"Vector Sorting:\n"<<std::endl;
	randomizeArray(vec, size2);
	std::cout << "Insertion sort\nUnsorted: ";
	printArr(vec);
	ASorter::insertionSort(vec);
	std::cout << "Sorted: ";
	printArr(vec);
	std::cout << std::endl;
	randomizeArray(vec, size2);
	std::cout << "Selection Sort\nUnsorted: ";
	printArr(vec);
	ASorter::selectionSort(vec);
	std::cout << "Sorted: ";
	printArr(vec);
	std::cout << std::endl;
	randomizeArray(vec, size2);
	std::cout << "Merge Sort\nUnsorted: ";
	printArr(vec);
	ASorter::mergeSort(vec, 0, size2 - 1);
	std::cout << "Sorted: ";
	printArr(vec);
	std::cout << std::endl;
	randomizeArray(vec,size2);
	std::cout << "Quick Sort\nUnsorted: ";
	printArr(vec);
	ASorter::quickSort(vec, 0, size2 - 1);
	std::cout << "Sorted: ";
	printArr(vec);
	std::cout << std::endl;
}

void printArr(std::vector<int> v)
{
	int size = v.size();
	for (int i = 0;i < size;i++)
	{
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
}

void printArr(int arr[], int size)
{
	for (int i = 0;i < size;i++)
	{
		std::cout << arr[i]<<" ";
	}
	std::cout << std::endl;
}
void randomizeArray(int arr[], int size)
{
	for (int i = 0;i < size;i++)
	{
		arr[i] = rand() % 100;
	}
}
void randomizeArray(std::vector<int> &vec, int size)
{
	vec.clear();
	for (int i = 0;i < size;i++)
	{
		vec.push_back(rand() % 100);
	}
}


