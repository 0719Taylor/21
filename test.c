#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>


//����һ����������,��ɶ�����Ĳ���
//1.ʵ�ֺ���Init()��ʼ������ȫΪ0
//2.ʵ�ֺ���Print()��ӡ�����ÿ��Ԫ��
//3.ʵ��reverse()�����������Ԫ������
//void Init(int* arr,int sz)
//{
//	int* p = arr;
//	int i;
//	for (i = 0; i <sz;i++)
//	{
//		*p++ = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz); 
//	Print(arr, sz);
//	Reverse(arr,sz);
//	Print(arr, sz);
//	return 0;
//}







//������A�е����ݺ�����B�е����ݽ��н���������һ����
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int tmp = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}











//int i;//ȫ�ֱ��� - ����ʼ�� - Ĭ����0
//int main()
//{
//	i--;
//	if (i > sizeof(i))// sizeof() - �������/������ռ�ڴ�Ĵ�С>=0 �޷�����   �����i��ת��Ϊ�޷�������sizeof(i)���бȽ�
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}









int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;   //��ֵ=�����ȼ����ڣ�
	b += a++ + c; //+�����ȼ�����+=
	printf("a=%d b=%d c=%d\n",a,b,c);
	return 0;
}