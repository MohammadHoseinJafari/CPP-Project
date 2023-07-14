#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

class Sort
{
	public:

		void start(int d);
		void show(int arr[], int n);
		void bubbleSort(int arr[], int n);
		void bubblesort_print(int arr[] , int n );

		void selectionSort(int arr[], int n);
		void _swap_a_b(int arr[], int firstIndex, int secondIndex) ;
		int indexOfMinimum(int arr[], int startIndex, int n); 
		void selectionSort_print(int arr[] , int n );

		 void insertSort(int arr[], int n);
		 void insertSort_print(int arr[] , int n );

	private:
	
};

void Sort::start(int d)
{
	int len ;
	getch();
	system("cls");
	cout<<"\t-------------------- Get your Unsort Array --------------------\n\n";
	cout<<"\tplease Enter your array size : ";
	cin>>len;
	
	int arr[len];
	for(int i = 0 ; i<len ; i++ )
	{
		cout<<"\tnew : ";
		cin>>arr[i];
	}

	switch(d)
	{
		case 0 :cout<<endl; show(arr,len); cout<<"\n\n"; bubbleSort(arr,len); break;
		case 1 :cout<<endl; show(arr,len); cout<<"\n\n"; selectionSort(arr,len); break;
		case 2 :cout<<endl; show(arr,len); cout<<"\n\n"; insertSort(arr,len); break;
	}
	
} 

void Sort::show(int arr[] , int len)
{
	cout<<"\tUnSorted Array: ";
	for(int i = 0 ; i<len ; i++ )
	{
		cout<<arr[i];
		if(i!=len-1) cout<<" , ";
	}	

}

//////////////////////// bubble /////////////////////////////

void Sort::bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }

	bubblesort_print(arr , n);

}

void Sort::bubblesort_print( int arr[] , int n )
{

	cout<<"\tSorted Array: ";
	for(int i = 0 ; i<n ; i++ )
	{
		cout<<arr[i];
		if(i!=n-1) cout<<" , ";
	}	

}

//////////////////////// selections ///////////////////////////

void Sort::_swap_a_b(int arr[], int firstIndex, int secondIndex) 
{   
    int temp;
    temp = arr[firstIndex];
    arr[firstIndex] = arr[secondIndex];
    arr[secondIndex] = temp;
}

int Sort::indexOfMinimum(int arr[], int startIndex, int n)
{
    int minValue = arr[startIndex];
    int minIndex = startIndex;

    for(int i = minIndex + 1; i < n; i++) {
        if(arr[i] < minValue) 
        {
            minIndex = i;
            minValue = arr[i];
        }
    } 
    return minIndex;
}

void Sort::selectionSort(int arr[], int n) 
{
    for(int i = 0; i < n; i++) 
    {
        int index = indexOfMinimum(arr, i, n);
        _swap_a_b(arr, i, index);
    }

	selectionSort_print(arr,n);
}

void Sort::selectionSort_print(int arr[] , int n)
{
	cout<<"\tSorted Array: ";
	for(int i = 0 ; i<n ; i++ )
	{
		cout<<arr[i];
		if(i!=n-1) cout<<" , ";
	}
}

//////////////////////// insert ///////////////////////////

void Sort::insertSort(int arr[] , int length)
{
	int i, j, key;
	for (i = 1; i < length; i++) 
	{
		j = i;
 		while (j > 0 && arr[j - 1] > arr[j]) 
 		{
 			key = arr[j];
 			arr[j] = arr[j - 1];
 			arr[j - 1] = key;
 			j--;
 		}
	}
	
	insertSort_print(arr, length);
}

void Sort::insertSort_print(int arr[] , int size)
{

	cout<<"\tSorted Array: ";
	for(int i = 0 ; i<size ; i++ )
	{
		cout<<arr[i];
		if(i!=size-1) cout<<" , ";
	}

}


