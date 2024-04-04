#include <stdio.h>
struct StructData {
    int intValue1;
    int intValue2;
    char charValue;
};
union UnionData {
    int intValue1;
    int intValue2;
    char charValue;
};
int main() {
    printf("Size of StructData: %lu bytes\n", sizeof(struct StructData));
    printf("Size of UnionData: %lu bytes\n", sizeof(union UnionData));
    return 0;
}
