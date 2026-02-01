#pragma once
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

bool safe_add(int a, int b, int* result);
bool safe_sub(int a, int b, int* result);
bool safe_mul(int a, int b, int* result);
bool safe_div(int a, int b, int* result);