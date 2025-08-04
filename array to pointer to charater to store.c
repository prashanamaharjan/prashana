//que. no 8 array to pointer to character to store a list of strings

/*#include <stdio.h>
int main() {
    char *names[] = {"Ram", "Sita", "Hari", "Gita"};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}*/

// que.9:demonstrate passing to pointer function
/*#include <stdio.h>
void update(int *p) {
    *p = *p + 10;
}
int main() {
    int num = 5;
    printf("Before: %d\n", num);
    update(&num);
    printf("After: %d\n", num);
    return 0;
}*/

//que no.10:


#include <stdio.h>

int main() {
    int a, b, sum;
    int *p1, *p2;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;

    printf("Sum = %d\n", sum);
    return 0;
}

