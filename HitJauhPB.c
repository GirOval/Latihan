#include <stdio.h>
#include <math.h>
#define PI 3.141592654

double v0X(double v0, double sudut), v0Y(double v0, double sudut);
double radian(double sudut);
double vX(double v0x), vY(double v0y, double g, double t);
double X(double vx, double t), Y(double vy, double t, double g);
double Xmax(double v0, double g, double rad), Ymax(double v0, double g, double rad);
double Tx(double v0, double g, double rad);

int main() 
{
    char cari, subCari;
    double v0, vx, vy, v0x, v0y, x, y, xmax, ymax, thmax, txmax, vt, t, g, sudut, rad;

    do{
        printf("Ini adalah program penyelesaian yang berhubungan dengan\ngerak parabola. Apa yang mau di cari ?\n A.Kecepatan awal horizontal dan vertikal\nV_xy = v_0 * cos-sin dari(sudut-radian)\n\n B.Kecepatan horizontal(opsional) dan vertikal\nV_x = V0x\nV_y = V_0y - g * t\n\n C.Jarak horizontal dan vertikal\nX = Vx * t\ny = Vx * t - g * pow(t)\n\n D.Jarak terjauh dan Ketinggian maksimum\nXmax = Pow(V0) * (sin * 2sudut) / g\nYmax = Pow(V0) * Pow(sin(sudut))\n\n E.Waktu untuk mencapai titik terjauh dan tertinggi\ntxmax = 2 * v0 * sin(sudut) / g\nthmax = v0 * sin(sudut) / g\n\n I.Kecepatan total benda\n");
        scanf("%c", &cari);
    }while (cari == '\n');
   
    switch (cari)
    {
    case 'A':
        printf(" Diketahui\n Kecepatan awal:");
        scanf("%lf", &v0);
        printf(" Sudut:");
        scanf("%lf", &sudut);

        rad = radian(sudut);
        v0x = v0X(v0, rad);
        v0y = v0Y(v0, rad);

        printf(" v0x = %lf * cos(%lf)=>%lf = %lf\n v0y = %lf * sin(%lf)=>%lf = %lf", v0, sudut, cos(rad), v0x, v0, sudut, sin(rad), v0y);
        break;

    case 'B' :
        printf(" Apakah kecepatan awal x dan y diketahui ?: Y / T\n");
        scanf(" %c", &subCari);
        switch (subCari)
        {
            case 'T':
                printf(" Diketahui\n Kecepatan awal:");
                scanf("%lf", &v0);
                printf(" Sudut:");
                scanf("%lf", &sudut);
                printf(" Gravitasi:");
                scanf("%lf", &g);
                printf(" Waktu:");
                scanf("%lf", &t);
                
                rad = radian(sudut);
                v0x = v0X(v0, rad);
                v0y = v0Y(v0, rad);
                vx = v0x;
                vy = vY(v0y, g, t);

                printf(" vx = %lf * cos(%lf)=>%lf = %lf\n", v0, sudut, cos(rad), vx);
                printf(" vy = %lf - %lf * %lf = %lf", v0y, g, t, vy);

                break;

            case 'Y':
                printf(" Diketahui\n Kecepatan awal x:");
                scanf("%lf", &v0x);
                printf(" Kecepatan awal y:");
                scanf("%lf", &v0y);
                printf(" Gravitasi:");
                scanf("%lf", &g);
                printf(" Waktu:");
                scanf("%lf", &t);

                vx = v0x;
                vy = vY(v0y, g, t);

                printf(" vx = %lf * cos(%lf)=>%lf = %lf\n", v0, sudut, cos(rad), vx);
                printf(" vy = %lf - %lf * %lf = %lf", v0y, g, t, vy);

                break;
        default:
            printf("%c tidak valid, lebih teliti lagi!", subCari);
            break;
        }
        break;

    case 'C':
        printf(" Apakah kecepatan x dan y diketahui ?: Y / T\n");
        scanf(" %c", &subCari);
        switch (subCari)
        {
            case 'T':
                printf(" Diketahui\n Kecepatan awal x:");
                scanf("%lf", &v0x);
                printf(" Kecepatan awal y:");
                scanf("%lf", &v0y);
                printf(" Gravitasi:");
                scanf("%lf", &g);
                printf(" Waktu:");
                scanf("%lf", &t);

                vx = v0x;
                vy = vY(v0y, g, t);
                x = X(vx, t);
                y = Y(vy, t, g);

                printf(" x = %lf * %lf\n=%lf\n", vx, t, x);
                printf(" y = %lf * %lf - %lf * pow(%lf)\n=%lf", vy, t, g, t, y);

                break;

            case 'Y':
                printf(" Diketahui\n Kecepatan x:");
                scanf("%lf", &vx);
                printf(" Kecepatan y:");
                scanf("%lf", &vy);
                printf(" Gravitasi:");
                scanf("%lf", &g);
                printf(" Waktu:");
                scanf("%lf", &t);

                x = X(vx, t);
                y = Y(vy, t, g);

                printf(" x = %lf * %lf\n=%lf\n", vx, t, x);
                printf(" y = %lf * %lf - %lf * pow(%lf)\n=%lf", vy, t, g, t, y);

                break;
        default:
            printf("%c tidak valid, lebih teliti lagi!", subCari);
            break;
        }
        break;

    case 'D':
            printf(" Diketahui\n Kecepatan awal:");
            scanf("%lf", &v0);
            printf(" Sudut:");
            scanf("%lf", &sudut);
            printf(" Gravitasi:");
            scanf("%lf", &g);

            rad = radian(sudut);
            xmax = Xmax(v0, g, rad);
            ymax = Ymax(v0, g, rad);

            printf("Xmax = Pow(%lf) * (sin(%lf) * 2) / %lf = %lf\n", v0, sudut, g, xmax);
            printf("Ymax = Pow(%lf) * Pow(sin(%lf)) / %lf = %lf", v0, sudut, g, ymax);

            break;

        case 'E':
            printf(" Diketahui\n Kecepatan awal:");
            scanf("%lf", &v0);
            printf(" Sudut:");
            scanf("%lf", &sudut);
            printf(" Gravitasi:");
            scanf("%lf", &g);
            
            rad = radian(sudut);
            txmax = 2 * Tx(v0, g, rad);
            thmax = Tx(v0, g, rad);

            printf("txmax = 2 * %lf * cos(%lf) / %lf = %lf\n", v0, sudut, g, txmax);
            printf("thmax = %lf * cos(%lf) / %lf = %lf", v0, sudut, g, thmax);
            
            break;
            
    default:
        printf("Input dengan opsi yang tersedia menggunakan huruf besar");
        break;
    }
    return 0;
}

double radian(double sudut){
    return (sudut * PI) / 180;
}
double v0X(double v0, double rad){
    return v0 * cos(rad);
}
double v0Y(double v0, double rad){
    return v0 * sin(rad);
}
double vX(double v0x) {}//Sesuai dengan kecepatan awal (v0x) 
double vY(double v0y, double g, double t){
    return v0y - g * t;
}
double X(double vx, double t){
    return vx * t;
} 
double Y(double vy, double t, double g){
    return (vy * t) - (0.5 * g * pow(t, 2));
}
double Xmax(double v0, double g, double rad){
    return pow(v0, 2) * (sin(rad) * 2) / g;
}
double Ymax(double v0, double g, double rad){
    return pow(v0, 2) * pow(sin(rad), 2) / g;
}
double Tx(double v0, double g, double rad){
    return v0 * sin(rad) / g;
}