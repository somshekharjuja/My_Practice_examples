
#include <stdio.h> 
  
int add(int x, int y) 
{ 
    return printf("%*c%*c", x, '\r', y, '\r'); 
} 
  
// Driver code 
int main() 
{ 
    printf("Sum = %d", add(3, 4)); 
    int value =1;
    int ret = printf("%d",value);
    printf("ret val = %d\n",ret);
    return 0; 
} 
