#include<stdio.h>
#define N 10
int main(){
    union arr{
        int a1[N];
        float a2[N];
        char a3[N];
    };
    union arr a;
    int n;
    printf("Enter the size of integer array: ");
    scanf("%d",&n);
    printf("Enter values of integer array: ");
    for (int i=0;i<n;i++){
        scanf("%d",&a.a1[i]);
    }
    printf("\nInteger array stored in union is:\n");
    for (int i=0;i<n;i++){
        printf("%d ",a.a1[i]);
    }
    printf("\nEnter the size of float array: ");
    scanf("%d",&n);
    printf("Enter values of float array: ");
    for (int i=0;i<n;i++){
        scanf("%f",&a.a2[i]);
    }
    printf("\nFloat array stored in union is:\n");
    for (int i=0;i<n;i++){
        printf("%.2f ",a.a2[i]);
    }
    printf("\nEnter the character array: ");
    scanf(" %[^\n]",a.a3);
    printf("Character array stored is: ");
    printf("\n%s",a.a3);
    return 0;
}