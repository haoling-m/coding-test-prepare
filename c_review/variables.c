#include <stdio.h>

int add(int x, int y) {
    return x + y;
};

struct Student {
    char name[50];
    int age;
};

int main() {
    /*
    int a = 10;
    float b = 3.14;
    char c = 'A';

    printf("a = %d, b = %.2f, c = %c\n", a, b, c);
    
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    int i = 0;
    while (i < 5) {
    printf("i = %d\n", i);
    i++;
    }

    int arr[5] = {1, 2, 3, 4, 5};
    printf("First element: %d\n", arr[0]);

    int result = add(5, 10);
    printf("Sum: %d\n", result);

    int k = 10;
    int *p = &k;
    printf("Address of k: %p, Value of k: %d\n", p, *p);

    struct Student s1 = {"Alice", 20};
    printf("Name: %s, Age: %d\n", s1.name, s1.age);
    */
   // Storing string as pointer
   char *s = "Geeks";

   printf("%s", s);

    return 0;
}

// Output
// a = 10, b = 3.14, c = A
