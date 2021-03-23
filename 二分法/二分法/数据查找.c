//在一个有序数组里查找一个数字;
//比如在数组1,2,3,4,5,6,7,8,9,10之内找到8;

#include<stdio.h>;
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };                      //确立一个数组
	int sz = sizeof(arr) / sizeof(arr[0]);                        //计算数组元素个数
	int k = 8;                                                    //确定要找的元素
	int left = 0;                                                 //确定左下标
	int right = sz - 1;                                           //确定右下标

	while (left<=right)                                            //代入循环条件
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;                                               //找到元素后跳出循环
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}
