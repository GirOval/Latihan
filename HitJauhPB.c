#include <stdio.h>
#include <math.h>
#define PI 3.141592654

double vx(double v0, double sudut), vy(double v0, double sudut);
double radian(double sudut);

int main() 
{
    char cari = 0;
    double v0, rx, ry, vt, t, h, g, sudut, rad;
    printf("Ini adalah program penyelesaian tentang gerak parabola. Apa yang mau di cari ?\n A.Kecepatan horizontal\n B.Kecepatan vertikal\n C.Kecepatan horizontal awal\n D.Kecepatan vertikal awal\n E.Jarak horizontal\n F.Jarak vertikal\n G.Jarak terjauh\n H.Ketinggian maksimum\n I.Kecepatan total benda\n");
    scanf("%c", &cari);
    while (cari == 0)
    {
        printf("Apa yang mau di cari ?\n A.Kecepatan horizontal dan vertikal\n C.Kecepatan horizontal awal\n D.Kecepatan vertikal awal\n E.Jarak horizontal\n F.Jarak vertikal\n G.Jarak terjauh\n H.Ketinggian maksimum\n I.Kecepatan total benda\n");
        scanf( "(%c)", &cari);
    }
    switch (cari)
    {
    case 'A':
        printf("Diketahui\n Kecepatan awal:");
        scanf("%lf", &v0);
        printf(" Sudut:");
        scanf("%lf", &sudut);
        rad = radian(sudut);

        rx = vx(v0, rad);
        ry = vy(v0, rad);
        printf("%lf * cos(%lf)=>%lf = %lf\n%lf * sin(%lf)=>%lf = %lf", v0, sudut, cos(rad), rx, v0, sudut, sin(rad), ry);
        break;
    
    default:
        break;
    }
    return 0;
}

double radian(double sudut){
    return (sudut * PI) / 180;
}
double vx(double v0, double rad){
    return v0 * cos(rad);
}
double vy(double v0, double rad){
    return v0 * sin(rad);
}