#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{ 
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] =0;
//		printf("heheh\n");
//	}
//	system("pause");
//	return 0;
//}
//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//若为真，不会出错，若为假，报错
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//*dest = *src;
//}
//int main()
//{
//	char arr[10] = "qqqqqqq";
//	char* p = "abc";
//	my_strcpy(arr, p);
//	printf("%s", arr);
//	system("pause");
//	return 0;
//}
int main()
{
	const int num = 10;
	const int*  p = (int*)&num;
	*p = 20;
	printf("%d", num);
	system("pause");
	return 0;
}
