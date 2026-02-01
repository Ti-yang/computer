#include"over.h"

bool safe_add(int a, int b, int* result) {
    if (b > 0 && a > INT_MAX - b) return false;  // 上溢
    if (b < 0 && a < INT_MIN - b) return false;  // 下溢
    *result = a + b;
    return true;
}

bool safe_sub(int a, int b, int* result) {
    if (b < 0 && a > INT_MAX + b) return false;  // 上溢
    if (b > 0 && a < INT_MIN + b) return false;  // 下溢
    *result = a - b;
    return true;
}

bool safe_mul(int a, int b, int* result) {
    if (a == 0 || b == 0) {
        *result = 0;
        return true;
    }

    if (a > 0) {
        if (b > 0) {  // 正×正
            if (a > INT_MAX / b) return false;
        }
        else {  // 正×负
            if (b < INT_MIN / a) return false;
        }
    }
    else {
        if (b > 0) {  // 负×正
            if (a < INT_MIN / b) return false;
        }
        else {  // 负×负
            if (a < INT_MAX / b) return false;  // 注意：b是负数
        }
    }

    *result = a * b;
    return true;
}

bool safe_div(int a, int b, int* result) {
    if (b == 0) return false;  // 除数为0
    if (a == INT_MIN && b == -1) return false;  // 唯一会溢出的除法
    *result = a / b;
    return true;
}