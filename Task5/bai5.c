#include <stdio.h>

int main()
{
    int t;
    int b;
    int h;
    float S;
    
    printf("nhap canh lon: ");
    scanf("%d",&b);
    
    printf("nhap canh be: ");
    scanf("%d",&t);
    
    printf("nhap chieu cao: ");
    scanf("%d",&h);
    
    S = ((b + t)*h)/2;
    
    
    printf("Dien tich hinh thang: %.2f\n",S);
    
}
