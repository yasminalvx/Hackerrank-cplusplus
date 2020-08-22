#include <stdio.h>
#include <math.h>

void update(int *a,int *b) {
    int temp = *a + *b;
    *b =  abs(*a - *b);
    *a = temp;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
