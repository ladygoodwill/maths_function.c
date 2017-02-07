#include <stdio.h>

int gcd(int x, int y)
{
    int i;
    
    if (x != y)
    {
        if (x > y)
        {
      // for (i = 0; x%y != 0; i++)
       //{
            x = x%y;
            y=y%x;
            
            return (x-y);
        //}
        }
        
        if (y > x)
        {
            //for (i=0; y%x != 0; i++)
            //{
                y=y%x;
                x=x%y;
                
                return (y-x);
           //}
        }
    }
    else
        return x;
    
    
            
}
    
    
int main ()
{
    int x, y;
    
    printf("Enter two numbers: ");
    scanf("%i %i", &x, &y);
    
    printf("Their GCD is %i\n", gcd(x, y));
    
    return 0;
    
}
    
