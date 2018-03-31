/* formula para sacar la hipotenusa de un triangulo

a_Hipotenusa = √ b2+c2   */ 

/* formula para sacar el cateto de un triangulo
a_cateto= √ b2-c2   */ 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
   
   float valor_a_hipotenusa = 0,
         valor_b = 0,
         valor_c = 0;
      
      printf("\t\tPrograma para calcular la hipotenusa.\n");
      
      printf("\r");
      while (getchar ()!= '\n');
      printf("\t\tSu formula es la siguiente... \n");
      
      while (getchar ()!= '\n');
      system("clear");
      printf("\t\t\tHipotenusa = √ b2+c2 \n\n" );
      
      printf("\t\t              Valor 1                \n");
      printf("\t\t             ___________             \n");
      printf("\t\t            | /        /             \n");
      printf("\t\t            |/        /              \n");
      printf("\t\t            |        /               \n");
      printf("\t\t            |       /                \n");
      printf("\t\t   Valor2   |      /                 \n");
      printf("\t\t            |     /    Hipotenusa    \n");
      printf("\t\t            |    /                   \n");
      printf("\t\t            |   /                    \n");
      printf("\t\t            |  /                     \n");
      printf("\t\t            | /                      \n"); 
      printf("\t\t            |/                       \n");
      
      printf("\r");
      while (getchar ()!= '\n');
      
      printf("Ingresa el valor 1: ");
      scanf("%f", &valor_b);
      printf("Ingresa el valor 2: ");
      scanf("%f", &valor_c);
      
      valor_a_hipotenusa = sqrt ( pow(valor_b,2)+pow(valor_c,2) );
   
      /* valor_a_hipotenusa = hypot ( valor_b, valor_c );  
      http://en.cppreference.com/w/c/numeric/math/hypot 
      hypot(x, y) */
      
      printf("\n\t*****************************************************\n");
      printf("\t\t\tTu resultado es: %.2f \n",  valor_a_hipotenusa);
         
   return 0;
}
