
#include <stdio.h>

void salutation()
{
  printf("Hello World\n");
}
 
int greater(int x, int y)
{
  if(x > y)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
       	salutation();
 
       	int num1 = 4;
       	int num2 = 5;

       	int age, limiteAge;
          
       	age = 16;
	limiteAge = 18;
	
	// %d or %i is used for display integer variable ( int )
 
	printf("%d\n", num1);
	printf("%d\n", num2);

	int resultat = -1;
	printf("%d\n", resultat);
	resultat = greater(num1, num2);
	printf("resultat = %i / grater = %d \n",resultat,  greater(4,5));

 return 0;

}
