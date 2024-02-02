#include <stdio.h>

int sum(int a, int b)
{
    int result = a + b;
    return result;
}
int main()
{
    int s;
    s=sum(2,14);
    printf("result : %d \n",s);
    return 0;
}