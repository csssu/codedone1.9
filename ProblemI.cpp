
/*
	Author: Amir Aghazadeh
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{    
	int y;
	cin >> y;
	
	for(int i = y + 1; ; i++)
	{
		string temp = to_string(i);
		
		if(
			temp.find(temp[0]) == temp.find_last_of(temp[0]) &&
			temp.find(temp[1]) == temp.find_last_of(temp[1]) &&
			temp.find(temp[2]) == temp.find_last_of(temp[2]) &&
			temp.find(temp[3]) == temp.find_last_of(temp[3])
		)
		{		
			cout << i << endl;
			break;
		}
	}
	
	return 0;
}