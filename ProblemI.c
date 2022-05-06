/*
	Author: Amir Aghazadeh
*/

#include <stdio.h>
#include <stdlib.h>

int firstIndexOf(char array[], char c, int arraySize)
{
	for(int i = 0; i < arraySize; i++)
	{
		if(array[i] == c)
		{
			return i;
		}
	}
}

int lastIndexOf(char array[], char c, int arraySize)
{
	for(int i = arraySize - 1; i >= 0; i--)
	{
		if(array[i] == c)
		{
			return i;
		}
	}
}

int main()
{    
	int y;
	scanf("%d", &y);
	
	for(int i = y + 1; ; i++)
	{
		char temp[4];
		
		itoa(i, temp, 10);
		
		if(
			firstIndexOf(temp, temp[0], 4) == lastIndexOf(temp, temp[0], 4) &&
			firstIndexOf(temp, temp[1], 4) == lastIndexOf(temp, temp[1], 4) &&
			firstIndexOf(temp, temp[2], 4) == lastIndexOf(temp, temp[2], 4) &&
			firstIndexOf(temp, temp[3], 4) == lastIndexOf(temp, temp[3], 4)
		)
		{		
			printf("%d\n", i);
			break;
		}
	}
	
	return 0;
}