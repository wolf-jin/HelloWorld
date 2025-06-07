#include <iostream>

using namespace std;

int main()
{       // ubuntu 你好
	int arr[] = {12,4,33};

	// windows git 再修改
	bool flag = false;
	
	
	cout << "010" << endl;

	// windows 你好

	void sort(int arr[], int i, int j)
	{
		int val = arr[i];
		int l = i;
		int r = j;
		while (l < r)
		{
			while (l<r && arr[r] >= val)
			{
				r--;
			}
			if (l < r)
			{
				arr[l++] = arr[r];
			}
			while (l < r && arr[l] <= val)
			{
				l++;
			}
			if (l < r)
			{
				arr[r--] = arr[l];
			}
		}
		arr[l] = val;
		sort(arr, i, l - 1);
		sort(arr, l + 1, j);
	}
	void sort(int arr[], int size)
	{
		sort(arr, 0, size);
	}
}
