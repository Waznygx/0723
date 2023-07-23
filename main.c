#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	const char* str1 = "abcdef";
//	const char* str2 = "abc";
//	if (strlen(str2) - strlen(str1) > 0)//strlen返回类型-size_t: typedef unsigned __int64 size_t;
//	{
//		printf("y\n");
//	}
//	else
//	{
//		printf("n\n");
//	}
//	return 0;
//}

//char* my_strlen(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "aaa";
//	printf("%s\n", my_strlen(arr1, arr2));
//	return 0;
//}

//char* my_strcat(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//1.找到arr1中\0的位置
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.将arr2的内容拷贝至arr1里
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[50] = "abdge";
//	char arr2[] = "aaaa";
//	printf("%s", my_strcat(arr1, arr2));
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1++ == *str2++)
//	{
//		if (str1 == '\0')
//			return 0;
//	}
//	if (*str1 > *str2)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abc";
//	printf("%d\n", my_strcmp(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "to be");
//	strcpy(str2, "or not to be");;
//	strncat(str2, str1, 8);
//	puts(str2);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	char* p2 = "abczef";
//	printf("%d\n", strncmp(p1, p2, 4));
//	return 0;
//}

//int main()
//{
//	char str[][5] = { "r2d2","c3p0","r2a6" };
//	int i;
//	for ( i = 0; i < 3; i++)
//	{
//		if (strncmp(str[i],"r2xx",2) == 0)
//		{
//			printf("%s\n", str[i]);
//		}
//	}
//	return 0;
//}

int main()
{
	char str[] = "this is a  simple string";
	char* ch;
	ch = strstr(str, "simple");
	strncpy(ch, "simple", 6);
	puts(str);
	return 0;
}