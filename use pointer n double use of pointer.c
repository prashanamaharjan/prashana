//set 6
// que 1.for illustrating use of pointer

/*#include <stdio.h>
int main() {
    int a = 10;
    int *p;        // Pointer declaration
    p = &a;        // p stores address of a

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", p);
    printf("Value at address p = %d\n", *p);  // Dereferencing

    return 0;
}*/

//illustrating use of double pointer
/*#include <stdio.h>

int main() {
    int a = 20;
    int *p = &a;
    int **pp = &p;   // Double pointer

    printf("Value of a = %d\n", a);
    printf("Value using *p = %d\n", *p);
    printf("Value using **pp = %d\n", **pp);

    return 0;
}*/

//q.n 3 : illustrate use of pointer array
/*#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;
    int *arr[3] = {&a, &b, &c};
    int i;

    for (i = 0; i < 3; i++) {
        printf("%d\n", *arr[i]);
    }

    return 0;
}*/

// que.4: illustrate use  of pointer arithmetic


#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}



