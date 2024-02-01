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
unsigned int calculateFactorial(int number);
/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
    unsigned int num;
    double factorial;
    printf("\n enter the number :");
    scanf("i",&num);
    factorial=calculateFactorial(num);
    printf("\n the factorial is %d",factorial);
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/* ********************** Sub-Program definition Section Start ******* */

//number3
unsigned int calculateFactorial(int number)
{
    unsigned int factor ;
    if (number < 0)
    {
        printf("Error: Factorial of a negative number is not defined.\n");
        return 0;
    }
    if (number == 0 || number == 1)
    {
        return 1;
    }
    factor=number * calculateFactorial(number - 1);
    return factor ;
}


/* ********************** Sub-Program definitions Section End ******* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      1 feb 2024           fourth task 3
*/
