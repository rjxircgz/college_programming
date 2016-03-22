#include  <stdio.h>

int findRepeat( int* a , int arraySize)
{
    int i, j;
 
    for( i = 0; i < arraySize; i++)
    {
         for( j = i+1; j < arraySize; j++)
         {
              if( a[i] == a[j] )
                  return 1;
         }
    }
 
    return 0;
}
 
int main(int argc, char *argv[])
{
    int array[5] = { 1, 2, 2, 4, 5 };
 
    if( findRepeat(array, 5) )
        printf("Found repeated number in array!\n");
    else
        printf("No repeat number in array!\n");
 
      return 0;
}