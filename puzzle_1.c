// C program to find the maximum stolen value
#include <stdio.h>
 
//Find maximum between two numbers.
int max(int num1, int num2)
{
  return (num1 > num2) ? num1 : num2;
}
 
// calculate the maximum stolen value
int maxLoot(int* n1, int n)
{
    if (n == 0)
        return 0;
 
    int value1 = n1[0];
    if (n == 1)
        return value1;
 
    int value2 = max(n1[0], n1[1]);
    if (n == 2)
        return value2;
 
    // contains maximum stolen value at the end
    int max_val;
 
    // Fill remaining positions
    for (int i = 2; i < n; i++) {
        max_val = max(n1[i] + value1, value2);
        value1 = value2;
        value2 = max_val;
    }
 
    return max_val;
}
 
// Driver to test above code
int main()
{
   
    int n1[] = { 6, 7, 1, 3, 8, 2, 4 };
    int n = sizeof(n1) / sizeof(n1[0]);
    printf("stolen value: %d", maxLoot(n1, n));
    return 0;
}

