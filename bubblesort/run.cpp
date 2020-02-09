#include <iostream>
using namespace std;


int main()
{ 

	double* array =NULL;   //pointer to double as to accept both integer and/or double, initialized at null
	int size; //variable size for array size

	cout<<"Enter the size of the array: \n";
	cin >> size;

	array = new double[size]; //allocation of the size and saving the pointer in array

	cout<<endl;
	cout<<"Enter the array values: \n";

	for (int i=0; i<size; i++)
	{
		array[i] = 0; //initializing all elements to zero
		cin>>array[i]; //read in array elements
	}

	int c=0; //variable for calls - initialization
	int s=0; //variable for swaps - initialization

	cout<<endl;

	cout << "Here is the unsorted array: ";
	for(int i=0;  i<size; i++)
		cout << array[i] << ' '; //print the unsorted array
	cout<<endl;
	cout<<endl;

	cout<< "Make the Swap:";
	cout<<endl;
	bubbleSort(array, size, c, s); //sort by caling the Bubble Sort template
	cout<<endl;

	//to call function with repeated calls if we comment this line then we can see the true implementation of how many calls it takes to sort the array
	bubbles(array,size,c,s); 

	cout << "Here is the sorted array: ";
	print(array,size); //print sorted array
	cout<<endl;

	cout << "Number of Calls is: " <<c<<"\n"; //print number of calls
	cout << "Number of Swaps is: " <<s<<"\n"; //print number of swaps

	delete [] array; // free memory which was pointed to array
	array = NULL; //clear array to prevent the usage of invalid memory references

	return 0;
}
