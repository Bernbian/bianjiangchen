//演示多个字符从字符串两端移动，向中间汇聚

#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "Welcome to  my room!!!";
	char arr2[] = "######################";
	int left = 0;
	int right= (sizeof(arr1) / sizeof(arr1[0])) - 2;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n",arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("Welcome to  my room!!!\n");

	return 0;
}