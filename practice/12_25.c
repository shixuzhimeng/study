#include <stdio.h>

// 复数结构体定义
typedef struct {
    double real;  // 实部
    double imag;  // 虚部
} Complex;

// 复数加法
Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// 复数减法
Complex subtract(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// 复数乘法
Complex multiply(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

// 复数除法（带除零检查）
Complex divide(Complex c1, Complex c2) {
    Complex result;
    double denominator = c2.real * c2.real + c2.imag * c2.imag;
    
    if (denominator == 0) {
        // 处理除零错误，返回一个特殊值或错误提示
        printf("Error: Division by zero!\n");
        result.real = 0;
        result.imag = 0;
        return result;
    }
    
    result.real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
    result.imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
    return result;
}

// 优化后的复数打印函数
void printComplex(Complex c) {
    if (c.real == 0 && c.imag == 0) {
        printf("0.0");
        return;
    }
    
    if (c.real != 0) {
        printf("%.1f", c.real);
    }
    
    if (c.imag != 0) {
        if (c.imag > 0 && c.real != 0) {
            printf("+%.1fi", c.imag);
        } else {
            printf("%.1fi", c.imag);
        }
    }
}

// 打印复数运算表达式和结果
void printOperation(Complex c1, Complex c2, Complex result, char op) {
    printComplex(c1);
    printf(" %c ", op);
    printComplex(c2);
    printf(" = ");
    printComplex(result);
    printf("\n");
}

int main() {
    Complex c1, c2;
    
    // 输入两个复数
    scanf("%lf %lf %lf %lf", &c1.real, &c1.imag, &c2.real, &c2.imag);
    
    // 计算并输出四种运算
    Complex result;
    
    // 加法
    result = add(c1, c2);
    printOperation(c1, c2, result, '+');
    
    // 减法
    result = subtract(c1, c2);
    printOperation(c1, c2, result, '-');
    
    // 乘法
    result = multiply(c1, c2);
    printOperation(c1, c2, result, '*');
    
    // 除法
    result = divide(c1, c2);
    printOperation(c1, c2, result, '/');
    
    return 0;
}