#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long smallCardNum = 1000000000000;
    // prompt user for card #
    long cardnumber = get_long("Card number sans spaces or hyphens:");
    
    // check sum
    // iterate over cardnumber start 2nd to last and work up
    // stageOneArray = each digit grabbed multiple by 2
    // stageOneSum = looped through stageOneArray and sum every digit in array
    // stageTwoSum = sumation of non-multiplied digits
    // stageThreeSum = sum stageOne and stageTwo sums
    // modulo stageThreeSumm
    // if modulo == 0 number passes syntax test
    // else toss it 
    
    // checks acceptable min card value
    long minCheck = floor(cardnumber/smallCardNum);
    
    if((minCheck == 4) || ((minCheck > 3999) && (minCheck <= 4999)))
    {
        if(minCheck == 4)
        {
         printf("small VISA\n");      
        }
        else {
         printf("large VISA\n");   
        }        
        printf("potentially a VISA\n");
    } 
    else if((minCheck > 5099) && (minCheck <= 5599))
    {
        printf("potentially a MASTERCARD\n");
    }
    else if(((minCheck > 399) && (minCheck <= 349)) || ((minCheck > 369) && (minCheck <= 379)))
    {
        printf("potentially an AMEX\n");
    }    
       else 
       {
           printf("potentially INVALID\n");
       }
    
}
