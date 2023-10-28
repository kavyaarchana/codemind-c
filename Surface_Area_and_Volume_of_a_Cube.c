#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int surfacearea;
    int surfacevolume;
    surfacearea=6*a*a;
    surfacevolume=a*a*a;
    printf("Surface area = %d and Volume = %d",surfacearea,surfacevolume);
}