#include <stdio.h>
#include <math.h>

int main() {
    char mode, diket;
    double c, r, f, k;
    
    printf("Simpel atau Akurat ? S/A\n");
    scanf("%c", &mode);
    
    if (mode != 'S' && mode!= 'A')
    {
        printf("Tolong gunakan huruf besar!");
    }
    else 
    {
        printf("Yang diketahui ?:\nC/R/F/K\n");
        scanf(" %c", &diket);
        
        switch (diket) 
        {
            case 'C':
                printf("Berapa derajat ?\n");
                scanf("\n%lf", &c);

                r = 0.8 * c;
                f = 1.8 * c + 32;
                k = c + 273.15;

                switch (mode)
                {
                case 'S':
                    printf("Reamur = %0.2lf\n", r);
                    printf("Fahrenheit = %0.2lf\n", f);
                    printf("Kelvin = %0.2lf\n", k);
                    break;
                case 'A':
                    printf("Reamur = %lf\n", r);
                    printf("Fahrenheit = %lf\n", f);
                    printf("Kelvin = %lf\n", k);
                    break;
                }
                break;
                
            case 'R':
                printf("Berapa derajat ?\n");
                scanf(" %lf", &r);

                c = r / 1.8;
                f = 1.8 * c + 32;
                k = c + 273.15;
                
                switch (mode)
                {
                case 'S':
                    printf("Celsius = %0.2f\n", c);
                    printf("Fahrenheit = %0.2f\n", f);
                    printf("Kelvin = %0.2f\n", k);
                    break;
                case 'A':
                    printf("Celsius = %f\n", c);
                    printf("Fahrenheit = %f\n", f);
                    printf("Kelvin = %f\n", k);
                    break;
                }
                break;

            case 'F':
                printf("Berapa derajat ?\n");
                scanf(" %lf", &f);

                c = (f - 32) / 1.8;
                r = 0.8 * c;
                k = c + 273.15;
                
                switch (mode)
                {
                case 'S':
                    printf("Reamur = %0.2f\n", r);
                    printf("Celsius = %0.2f\n", c);
                    printf("Kelvin = %0.2f\n", k);
                    break;
                case 'A':
                    printf("Reamur = %f\n", r);
                    printf("Celsius = %f\n", c);
                    printf("Kelvin = %f\n", k);
                    break;
                }
                break;

            case 'K':
                printf("Berapa derajat ?\n");
                scanf("%lf", &k);

                c = k - 273.15;
                r = 0.8 * c;
                f = 1.8 * c + 32;
                
                switch (mode)
                {
                case 'S':
                    printf("Reamur = %0.2f\n", r);
                    printf("Fahrenheit = %0.2f\n", f);
                    printf("Celsius = %0.2f\n", c);
                    break;
                case 'A':
                    printf("Reamur = %f\n", r);
                    printf("Fahrenheit = %f\n", f);
                    printf("Celsius = %f\n", c);
                    break;
                }
                break;
                default :
                printf("Tolong gunakan huruf besar!");
                break;
        }
    }
    return 0;
}