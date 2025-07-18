#include <stdio.h>
#include <stdlib.h>

#include "errlist.h"
#include "extra.h"
#include "s21_convert.h"

#ifndef S21_STRING_H
#define S21_STRING_H

#define s21_NULL (void *)0

typedef unsigned long long s21_size_t;

void *s21_memchr(const void *arr, int c, s21_size_t n);
int s21_memcmp(const void *arr1, const void *arr2, s21_size_t n);
void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strchr(const char *str, int c);
int s21_strncmp(const char *str1, const char *str2, s21_size_t n);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
s21_size_t s21_strcspn(const char *str1, const char *str2);
char *s21_strerror(int errnum);
s21_size_t s21_strlen(const char *str);
char *s21_strpbrk(const char *str1, const char *str2);
char *s21_strrchr(const char *str, int c);
char *s21_strstr(const char *haystack, const char *needle);
char *s21_strtok(char *str, const char *delim);

void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *s21_trim(const char *src, const char *trim_chars);

s21_size_t s21_strspn(const char *str1, const char *str2);
s21_size_t s21_trim_strspn_reverse(const char *str1, const char *str2);
int atoi_counter(const char *str);

#endif