#include <stdio.h>

int main() {

int firstnumber, secondnumber, largestnumber , smallestnumber, GCD1, GCD2, i, exitcond;   
  
do //Looper programmet til man selv exiter det
{
  printf("This program calculates the Greatest common divisor of two positive integers \n");

  do //Indtastning af Integers. Looper til 2 positive tal indtastes
  {
    printf("Enter two positive integers: \n");
    scanf("%d %d", &firstnumber , &secondnumber);

    if (firstnumber <= 0 || secondnumber  <= 0 )
    {
      printf("Invalid input - Only POSITIVE integers allowed! \n");
    }
  
  }  
  while (firstnumber <= 0 || secondnumber  <= 0 ); //Selve udregningen + print af GCD
    largestnumber = firstnumber <= secondnumber ? secondnumber : firstnumber;
    smallestnumber = firstnumber <= secondnumber ? firstnumber : secondnumber;
    
    for ( i = largestnumber; i > 0; i--)
    {
      GCD1 = largestnumber % i;
      GCD2 = smallestnumber % i;

      if (GCD1 == 0 && GCD2 == 0)
      {
        printf("The GCD of %d and %d, is: %d  \n", largestnumber, smallestnumber, i);
        break;
      }

    }
  printf("Would you like to exit the program? \nEnter -1 to exit \nEnter 0 to continue \nEnter answer here:"); //Spørger om man vil gentage programmet
  scanf("%d", &exitcond);
} 
while (exitcond != -1);
  printf("Exiting the program.... Have a great day!"); //Exit-hilsen
  return 0;

  
}


//noter. d