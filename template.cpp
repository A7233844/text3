#include<iostream>
using namespace std;

template<typename T>
void InsertionSort(T list[], int listSize)
{
	for (int i = 1; i < listSize; i++)
	{
		T currentElement = list[i];
		int k;
		for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
		{
			list[k + 1] = list[k];
		}
		list[k + 1] = currentElement;
	}
}

template<typename T>
T BinarySearch(const T list[], T key, int listSize)
{
	int low = 0;
	int high = listSize - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;
		else
			low = mid + 1;
	}

	return - 1;
}

int main()
{
	const int size = 9;
	int list1[size] = { 1,5,6,2,3,7,9,8,4 };

	int a,b,c;
	double e, f, g;
	cin >> a >> b >> c >> e >> f >> g;
	cout << "From: ";
	for (int i = 0; i < size; i++)
	{
		if (i == 8)
			cout << list1[i];
		else
			cout << list1[i] << ",";
	}

	InsertionSort(list1, size);
	cout << endl <<"To: ";
	for (int i = 0; i < size; i++)
	{
		if (i == 8)
			cout << list1[i];
		else
			cout << list1[i] << ",";
	}
	cout << endl <<a<<" at "<< BinarySearch(list1, a,size)<<endl;
	cout <<b<<" at "<< BinarySearch(list1, b, size)<<endl;
	cout <<c<<" at "<< BinarySearch(list1, c, size)<<endl;
    
    cout<<endl;
	const int size1 = 9;
	double list2[size1] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };

    
	cout << "From: ";
	for (int i = 0; i < size1; i++)
	{
		if (i == 8)
			cout << list2[i] ;
		else
			cout << list2[i] << ",";
	}
	InsertionSort(list2, size1);
	cout << endl << "To: ";
	for (int i = 0; i < size1; i++)
	{
		if (i == 8)
			cout << list2[i] ;
		else
			cout << list2[i] << ",";
	}
	cout << endl << e << " at " << BinarySearch(list2, e, size1)<<endl;
	cout << f << " at " << BinarySearch(list2, f, size1) <<endl;
	cout <<	g << " at " << BinarySearch(list2, g, size1)<<endl;

	system("pause");
	return 0;
}

