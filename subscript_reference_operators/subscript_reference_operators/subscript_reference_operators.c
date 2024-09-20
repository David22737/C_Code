#include <stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	//arr[3] = 10;
	int n = 0;
	arr[n] = 10;//这里可以引用变量n
	printf("%d\n", arr[0]);

	//[ ]就是下标引用操作符，arr和3是[ ]arr的操作数
	//如a+b,+是操作符，a,b分别为左右操作数
	//数组下标从0开始

	return 0;
}