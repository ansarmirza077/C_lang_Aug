
#include <stdio.h>

void fun(int *new, int sizeofarr)
{
    int tmp, y = 0, x = sizeofarr-1;
    for(;x > y;)
	{
     for(;new[y] != 0;)
         y++;
     for(;new[x] == 0;)
         x--;
     if(y < x)
	 {
            tmp = new[y];
            new[y] = new[x];//swapping
            new[x] = tmp;
        }
    }
}

int main()
{
    int new[] = {2, 5, 7, 0, 4, 0, 7, -5, 8, 0};
   int n = sizeof(new)/sizeof(new[0]);//find the array size
    int i;
    fun(new, n);//function calling
	printf("The new array is: \n");
    for(i = 0; i < n; i++)       //printing array after swapping
	{
     printf("%d ", new[i]);
    }
    return 0;
}
