#include <stdio.h>
//Help writing this from programming simplified, thank you.
int main()
{
  //make sure to allocate enough space
  int array[100], n, c, d, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
  //take in values from the command line
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  //outer loop for holding the value of c which will be used in the comparison of loop 2
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    //inner loop for doing the swaps

    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        //make sure to create a temp variable so to not destroy the value we want to swap
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
  //printing the results
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
 
  return 0;
}