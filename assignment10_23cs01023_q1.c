#include<stdio.h>
union Data {
    int integerValue;
    float floatValue;
    char charValue;
};
int main() {
    union Data data;
    printf("Enter an integer: ");
    scanf("%d", &data.integerValue);
    printf("Integer value: %d\n", data.integerValue);
    printf("Enter a float: ");
    scanf("%f", &data.floatValue);
    printf("Float value: %f\n", data.floatValue);
    printf("Enter a character: ");
    scanf(" %c", &data.charValue); 
    printf("Character value: %c\n", data.charValue);
    return 0;
}
