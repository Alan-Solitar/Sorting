#include "ASorter.h"
#include <iostream>

void ASorter::selectionSort(int arr[], int n)
{
	int min_index = 0;
	int temp = 0;
	for (int i = 0;i < n;i++)
	{
		min_index = i;
		for (int j = i + 1;j < n;j++)
		{
			if (arr[j] < arr[min_index])
				min_index = j;
		}
		if (min_index != i) //Makes sure we don't swap an element with itself.
		{
			temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
	}
}

void ASorter::selectionSort(std::vector<int> &vec)
{
	int size = vec.size();
	int min_index = 0;
	int temp = 0;
	for (int i = 0;i < size;i++)
	{
		min_index = i;
		for (int j = i+1;j < size;j++)
		{
			if (vec[j]< vec[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i) //Makes sure we don't swap an element with itself.
		{
			temp = vec[i];
			vec[i] = vec[min_index];
			vec[min_index] = temp;
		}
	}

}


void ASorter::insertionSort(int arr[], int n)
{
	int j;
	int temp;
	for (int i = 0;i < n;i++)
	{
		j = i;
		while (j>0 &&(arr[j]<arr[j-1]))
		{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				j--;
		}

	}

}
void ASorter::insertionSort(std::vector<int> &arr)
{
	int size = arr.size();
	int j,temp = 0;
	for (int i = 0;i < size;i++)
	{
		j = i;
		while (j > 0 && arr[j] < arr[j - 1])
		{
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}

void ASorter::mergeSort(int arr[], int l, int h)
{
	if (l==h)
		return;
	int mid = (h+l)/2;
	mergeSort(arr, l, mid); //sort left half
	mergeSort(arr, mid + 1, h); //sort right half
	merge(arr,l, mid,h);

}

void ASorter::merge(int arr[],int l,int mid, int h)
{
	
	int i = l;
	int j = mid + 1;
	int k = l;
	int *temp = new int[h+1]{}; //dyanmically allocated for memory efficiency
	while (i <= mid && j<=h)
	{
		if (arr[i] < arr[j])
		{
			temp[k] = arr[i];
			i++;
			
		}
		else
		{
			temp[k] = arr[j];
			j++;
		}
		k++;
	}

	while (i <= mid)
	{
		temp[k] = arr[i];
		i++;
		k++;
	}
	while (j <= h)
	{
		temp[k] = arr[j];
		j++;
		k++;
	}

	for (i = l;i < h+1;i++)
	{
		arr[i]=temp[i];
	}
	delete[] temp; //delete temp array
	return;
}
void ASorter::mergeSort(std::vector<int> &vec, int l, int h)
{

	if (l == h)
		return;
	int mid = (h + l) / 2;
	mergeSort(vec, l, mid); //sort left half
	mergeSort(vec, mid + 1, h); //sort right half
	merge(vec, l, mid, h);

}

void ASorter::merge(std::vector<int> &vec, int l, int mid, int h)
{
	int i = l;
	int j = mid + 1;
	int k = l;
	int size = vec.size();
	std::vector<int> temp(size,0);

	while (i <= mid && j <= h)
	{
		if (vec[i] < vec[j])
		{
			temp[k] = vec[i];
			i++;

		}
		else
		{
			temp[k] = vec[j];
			j++;
		}
		k++;
	}

	while (i <= mid)
	{

		temp[k] = vec[i];
		i++;
		k++;
	}
	while (j <= h)
	{
		temp[k] = vec[j];
		j++;
		k++;
	}

	for (i = l;i < h + 1;i++)
	{
		vec[i] = temp[i];
	}

	return;
}
void ASorter::quickSort(int arr[], int l, int h)
{
	if (l < h)
	{
		int p = partition(arr, l, h);
		quickSort(arr, l, p - 1);
		quickSort(arr, p + 1, h);
	}
	return;
}


int ASorter::partition(int arr[], int l, int h)
{
	int i=l-1; //tells you how many numbers are less than pivot
	int pivot = arr[h];
	int temp;
	for (int j = l;j < h;j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	arr[h] = arr[i + 1];
	arr[i + 1] = pivot;
	return (i + 1);
}
void ASorter::quickSort(std::vector<int> &vec, int l, int h)
{
 
	if (l < h)
	{
		int p = partition(vec, l, h);
		quickSort(vec, l, p - 1);
		quickSort(vec, p + 1, h);
	}
	return;
}


int ASorter::partition(std::vector<int> &vec, int l, int h)
{
	int i = l - 1; //tells you how many numbers are less than pivot
	int pivot = vec[h];
	int temp;
	for (int j = l;j < h;j++)
	{
		if (vec[j] <= pivot)
		{
			i++;
			temp = vec[j];
			vec[j] = vec[i];
			vec[i] = temp;
		}
	}
	vec[h] = vec[i + 1];
	vec[i + 1] = pivot;
	return (i + 1);
}
