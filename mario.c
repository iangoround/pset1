#include <cs50.h>
#include <stdio.h>


int main(void)
{
    //declare variables
    int height = 0;
    
    // get value for height from user 0-23
    do
    {
        printf("Height: ");
        height = GetInt();
        
    }
    while ( height < 0 || height > 23 );
    
    
    //loop this height times to get correct number of rows
    for (int rows = 0; rows < height; rows++)
    {
        
        //print spaces two less than height, once less thereafter
        for (int s = 0; s < height-rows-1; s++)
        {
            printf(" ");
        }
        
        //print "#" twice on first loop and then once thereafter
        for (int p = 0; p < rows+2; p++)
        {
            printf("#");
        }
        
    //print new line after each loop
    printf("\n");
    }
    
}