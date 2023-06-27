#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>


//创建一个整型数组,完成对数组的操作
//1.实现函数Init()初始化数组全为0
//2.实现函数Print()打印数组的每个元素
//3.实现reverse()函数完成数组元素逆置
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







//将数组A中的内容和数组B中的内容进行交换（数组一样大）
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











//int i;//全局变量 - 不初始化 - 默认是0
//int main()
//{
//	i--;
//	if (i > sizeof(i))// sizeof() - 计算变量/类型所占内存的大小>=0 无符号数   这里的i会转化为无符号数和sizeof(i)进行比较
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
	b = ++c, c++, ++a, a++;   //赋值=的优先级大于，
	b += a++ + c; //+的优先级大于+=
	printf("a=%d b=%d c=%d\n",a,b,c);
	return 0;
}