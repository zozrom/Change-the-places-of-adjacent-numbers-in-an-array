#include<iostream>
using namespace std;

int main()
{
	int y;
	int arr[100];
	int n;
	cout << "Enter the number /2   :" << endl;
	do
	{
		cout << "Enter numbers  ";
		cin >> n;

	} while (n%2!=0);

	for (int  i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int  i = 0; i < n; i++)
	{
		 y = arr[i]  ;
		 arr[i] = arr[i + 1]  ;
		arr[i+1]=y  ;
		i++;
	}
	   
	for (int  i = 0; i < n; i++)
	{
		cout << arr[i];
	}
	system("pause");
 }