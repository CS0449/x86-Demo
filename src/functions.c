#include <stdio.h>

int increment(int num);

int main(int argc, char **argv)
{
    int myNum = increment(5);
    printf("My num is %d\n", myNum);
    return 0;
}

int increment(int num)
{
    return ++num;
}