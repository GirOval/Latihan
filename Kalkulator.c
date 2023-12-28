#include <stdio.h>
#include <math.h>

double akarPangkatN(double num1, double num2) {
    return pow(num1, 1.0/num2);
}

double xLog_b(double x, double b) {
    return log10(b) / log10(x);
}

int main() {
    char operator;
    double num1, num2, result;

    printf("Masukkan jenis Operator ( + - * / p(pangkat) a(akar) l(log) ):");
    scanf("%c", &operator);
    

    switch (operator) {
        case '+':
            printf("\nNilai pertama :");
            scanf("%lf", &num1);
            printf("Nilai kedua :");
            scanf("%lf", &num2);

            result = num1+num2;
            printf("Hasilnya adalah :%lf", result);
            break;

        case '-':
            printf("Nilai pertama :");
            scanf("%lf", &num1);
            printf("Nilai kedua :");
            scanf("%lf", &num2);

            result = num1-num2;
            printf("Hasilnya adalah :%lf", result);
            break;

        case '*':
            printf("Nilai pertama :");
            scanf("%lf", &num1);
            printf("Nilai kedua :");
            scanf("%lf", &num2);

            result = num1*num2;
            printf("Hasilnya adalah :%lf", result);
            break;

        case '/':
            printf("Nilai pertama :");
            scanf("%lf", &num1);
            printf("Nilai kedua :");
            scanf("%lf", &num2);

            result = num1/num2;
            printf("Hasilnya adalah :%lf", result);
            break;

        case 'p':
            printf("Nilainya : ");
            scanf("%lf", &num1);
            printf("Dipangkat :");
            scanf("%lf", &num2);

            result = pow(num1, num2);
            printf("Hasilnya adalah :%lf", result);
            break;

        case 'a':
            printf("Nilainya :");
            scanf("%lf", &num1);
            printf("Diakar :");
            scanf("%lf", &num2);

            result = akarPangkatN(num1, num2);
            printf("Hasilnya adalah :%lf", result);
            break;

        case 'l':
            printf("Basisnya :");
            scanf("%lf", &num1);
            printf("Numerusnya :");
            scanf("%lf", &num2);

            result = xLog_b(num1, num2);
            printf("Hasilnya adalah :%lf", result);
            break;
            default :
            printf("Ada yang salah");
            break;
    }
 return 0;
}