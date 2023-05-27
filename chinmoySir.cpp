#include <iostream>

using namespace std;
unsigned int factorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Driver code
int main()
{
    int num, result;
    printf("Enter the number=");
    scanf("%d",&num);
    result=factorial(num);
    printf("Factorial of %d is=%d",num,result);
    return 0;
}