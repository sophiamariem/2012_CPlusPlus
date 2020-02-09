#include <iostream>
using namespace std;

/*Template to print swaps, have used a template as to be able to take in any type and print it.
This takes the array and it's size as parameters.*/
template <class X> void print(X *array, int size)
{
	int i=0; //counter
	for(i=0;i<size;i++)
		cout<<array[i]<<"  "; //print array each time it swaps
	cout << endl;
}

//Boolean Bubble Sort template that take array, size, number of calls and number of swaps as parameters
template <class T> bool bubbleSort(T * array, int size, int & calls, int & swaps)
{
	T t;
	bool swap=false;

	calls++; //increment the number of calls as the function has been started

	//for loops to check all the values in the array
	for(int i=1; i<size; i++)
		for(int x=size-1; x>=i; x--)

			//if loop to check if the previous value in the array is larger than the next one if yes do the following
			if(array[x-1] > array[x])
			{
				//make the swap
				t = array[x-1];            
				array[x-1] = array[x];
				array[x] = t;
				print(array,size); //call the print template as to print out all the swaps that have occurs                             
				swaps++; //increment the number of swaps as a swap has occured
			} 
			return swap=true;
}

//template for recursive calls -used template as to use the variable previously used by the other functions
//since we call the bubbleSort function 2 additional times in this function then the output will show a number of 2 additional calls
template <class Y> void bubbles(Y * array, int size, int & calls, int & swaps)    
{
	bubbleSort(array, size, calls, swaps); //call bubbleSort 
	bubbleSort(array, size, calls, swaps); //call bubbleSort     
}
