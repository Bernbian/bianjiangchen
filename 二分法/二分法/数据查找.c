//��һ���������������һ������;
//����������1,2,3,4,5,6,7,8,9,10֮���ҵ�8;

#include<stdio.h>;
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11 };                      //ȷ��һ������
	int sz = sizeof(arr) / sizeof(arr[0]);                        //��������Ԫ�ظ���
	int k = 8;                                                    //ȷ��Ҫ�ҵ�Ԫ��
	int left = 0;                                                 //ȷ�����±�
	int right = sz - 1;                                           //ȷ�����±�

	while (left<=right)                                            //����ѭ������
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;                                               //�ҵ�Ԫ�غ�����ѭ��
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}
