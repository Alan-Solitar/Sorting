#ifndef ASORTER_H
#define ASORTER_H
#include <vector>
class ASorter
{
public:
	//Arrays
	static void selectionSort(int arr[], int n);
	static void insertionSort(int arr[], int n);
	static void mergeSort(int arr[], int l, int h);
	static void merge(int arr[], int l,int mid, int h);
	static void quickSort(int arr[], int l,int h);
	static int partition(int arr[],int l, int h);

	//Vectors
	static void selectionSort(std::vector<int> &arr);
	static void insertionSort(std::vector<int> &arr);
	static void mergeSort(std::vector<int> &arr, int l, int h);
	static void merge(std::vector<int> &arr,int l, int mid, int h);
	static void quickSort(std::vector<int> &vec, int l, int h);
	static int partition(std::vector<int> &vec, int l, int h);

};

#endif
