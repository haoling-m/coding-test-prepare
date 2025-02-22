// C program to show use of C++ has reference type
// C does not support reference type but it can be
// call by Reference
// C just like C++ supports call by reference
// using pointers. In call by reference, the  
// address of the variables is passed to the
// function. So, the changes made in the
// function reflect in the original variables.
// In the below code, we have a function swap
// which takes two pointers as arguments and
#include <stdio.h>

void swap(int *var1, int *var2)
{
  int temp = *var1;
  *var1 = *var2;
  *var2 = temp;
}

void myFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    myNumbers[i] = myNumbers[i] + 5;
    printf("%d\n", myNumbers[i]);
  }
}

// Driver code
int main()
{
  int var1 = 3, var2 = 2;
  printf("Before swap Value of var1 and var2 is: %d, %d\n",
          var1, var2);
  swap(&var1, &var2);
  printf("After swap Value of var1 and var2 is: %d, %d",
          var1, var2);
        
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);

  for (int i = 0; i < 5; i++) {
    printf("%d\n", myNumbers[i]);
  }
           
  return 0;
}

/*
in c++

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
*/


/*
/ Array passed as an array with the size of its
// dimension
void printArr(int* arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    // Pass array to function
    printArr(arr, 5);
    
    return 0;
}
*/

/*
pass struct

How to Pass or Return a Structure To or From a Function in C?
Last Updated : 14 Mar, 2023
A structure is a user-defined data type in C. A structure collects several variables in one place. In a structure, each variable is called a member. The types of data contained in a structure can differ from those in an array (e.g., integer, float, character).

Syntax:

struct geeksforgeeks
{
    char name[20];
    int roll_no;
    char branch[20];
}
how to pass structure in c
 

How to Pass a structure as an argument to the functions?
When passing structures to or from functions in C, it is important to keep in mind that the entire structure will be copied. This can be expensive in terms of both time and memory, especially for large structures. The passing of structure to the function can be done in two ways:

By passing all the elements to the function individually.
By passing the entire structure to the function.
Example 1: Using Call By Value Method




// C program to pass structure as an argument to the
// functions using Call By Value Method
#include <stdio.h>
 
struct car {
    char name[30];
    int price;
};
 
void print_car_info(struct car c)
{
    printf("Name : %s", c.name);
    printf("\nPrice : %d\n", c.price);
}
 
int main()
{
    struct car c = { "Tata", 1021 };
    print_car_info(c);
    return 0;
}
Output
Name : Tata
Price : 1021
Time Complexity: O(1)
Auxiliary Space: O(1)

Example 2: Using Call By Reference Method




// C program to pass structure as an argument to the
// functions using Call By Reference Method
 
#include <stdio.h>
 
struct student {
    char name[50];
    int roll;
    float marks;
};
 
void display(struct student* student_obj)
{
    printf("Name: %s\n", student_obj->name);
    printf("Roll: %d\n", student_obj->roll);
    printf("Marks: %f\n", student_obj->marks);
}
int main()
{
    struct student st1 = { "Aman", 19, 8.5 };
 
    display(&st1);
 
    return 0;
}
Output
Name: Aman
Roll: 19
Marks: 8.500000
Time Complexity: O(1)
Auxiliary Space: O(1)

How to Return a Structure From functions?
We can return a structure from a function using the return Keyword. To return a structure from a function the return type should be a structure only.




// C program to return a structure from a function
#include <stdio.h>
 
struct student {
    char name[20];
    int age;
    float marks;
};
 
// function to return a structure
struct student get_student_data()
{
    struct student s;
 
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter age: ");
    scanf("%d", &s.age);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
 
    return s;
}
 
int main()
{
    // structure variable s1 which has been assigned the
    // returned value of get_student_data
    struct student s1 = get_student_data();
    // displaying the information
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.1f\n", s1.marks);
 
    return 0;
}
Output:

Enter name: Krishna
Enter age: 21
Enter marks: 99
Name: Krishna
Age: 21
Marks: 99.0
Time Complexity: O(1)
Auxiliary Space: O(1)

pass struct by value
pass struct by reference
return struct

*/