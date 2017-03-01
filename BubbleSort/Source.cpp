#include <iostream>

using namespace std;

void main()
{
	int myArray[] = { 3, 1, 4, 2, 5 };
	int arrayCount = 5;

	for (int i = 0; i < arrayCount - 1; i++)
	{
		for (int j = 0; j < arrayCount - 1; j++)
		{
			if (myArray[j] > myArray[j + 1])
			{
				int temp = myArray[j];
				myArray[j] = myArray[j + 1];
				myArray[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << myArray[i];
	}

	system("Pause");
}