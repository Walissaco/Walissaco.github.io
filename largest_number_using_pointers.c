#include <stdio.h>

 int find_largest (int *arr, int size);

 
int
main ()
{
  
int arr[100], size, i;
  
 
printf ("Enter the number of elements in the array: ");
  
scanf ("%d", &size);
  
 
printf ("Enter %d elements:\n", size);
  
for (i = 0; i < size; i++)
    {
      
scanf ("%d", &arr[i]);
    
}
  
 
int largest = find_largest (arr, size);
  
 
printf ("The largest number in the array is %d\n", largest);
  
 
return 0;

}


 
int
find_largest (int *arr, int size)
{
  
int i, largest = *arr;
  
 
for (i = 1; i < size; i++)
    {
      
if (*(arr + i) > largest)
	{
	  
largest = *(arr + i);
	
}
    
}
  
 
return largest;

}


