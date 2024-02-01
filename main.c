/**
 ******************************************************************************
 * @file           : task 4
 * @author         : ola ahmed
 * @brief          : functions task
 ******************************************************************************
 */
//the program crashes
/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */
unsigned int calculateFactorial(unsigned int number);
/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
    unsigned int num;
    unsigned int factorial;
    printf("\n enter the number :");
    scanf("%i",&num);
    factorial=calculateFactorial(num);
    printf("\n the factorial is %d",factorial);
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/* ********************** Sub-Program definition Section Start ******* */

//number3
unsigned int calculateFactorial(unsigned number)
{
    unsigned int factor ;
    if (number == 0)
    {
        return 0;
    }
   else
    {
     factor= number * calculateFactorial(number - 1);
     return factor ;
    }
}


/* ********************** Sub-Program definitions Section End ******* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      1 feb 2024           fourth task 3
*/
