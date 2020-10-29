/*
made by lishuwei  20200928
练习字符串参数
1.	
void *memset(void *str, int c, size_t n)
复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符。
2.
void *memcpy(void *dest, const void *src, size_t n)
从 src 复制 n 个字符到 dest。
3.
nt memcmp(const void *str1, const void *str2, size_t n)
把 str1 和 str2 的前 n 个字节进行比较。
4.
char *strcat(char *dest, const char *src)
把 src 所指向的字符串追加到 dest 所指向的字符串的结尾。
5.
char *strncat(char *dest, const char *src, size_t n)
把 src 所指向的字符串追加到 dest 所指向的字符串的结尾，直到 n 字符长度为止。
6.	
char *strchr(const char *str, int c)
在参数 str 所指向的字符串中搜索第一次出现字符 c（一个无符号字符）的位置。
7.
int strcmp(const char *str1, const char *str2)
把 str1 所指向的字符串和 str2 所指向的字符串进行比较。
8.
int strncmp(const char *str1, const char *str2, size_t n)
把 str1 和 str2 进行比较，最多比较前 n 个字节。
9。
char *strcpy(char *dest, const char *src)
把 src 所指向的字符串复制到 dest。
10.
size_t strlen(const char *str)
计算字符串 str 的长度，直到空结束字符，但不包括空结束字符。
11.
char *strrchr(const char *str, int c)
在参数 str 所指向的字符串中搜索最后一次出现字符 c（一个无符号字符）的位置。
*/
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char* data="INFO";
    

    return 0;
}