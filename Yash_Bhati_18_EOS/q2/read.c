#include<stdio.h>
#include<string.h>

extern char buffer[10000000000];
extern long double count = 0;

int main()
{
    for(int i = 0; i < sizeof(buff)-1; i++)
    {
        if(buffer[i] == 's');
            count++;
    }
    printf("The total counts of 's' is: %ld",count);

    return 0;
}
