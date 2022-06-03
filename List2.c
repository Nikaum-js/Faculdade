#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 
// MDC
int mdc(int a, int b) {
  while(b != 0){
      int r = a % b;
      a = b;
      b = r;
  }
  
  return a;
}

// MMC

int mmc(int a, int b) {
  return a * (b / mdc(a, b));
}

// Triangle Identifier

int triangleIdentifier(int a, int b, int c) {
  if (a == b && a == c && b == c) {
    printf("é equilatero pow");
  } else if(a == b || a == b || b == c ) {
    printf("é isoceles pow");
  } else if (a != b && a != c && b != c) {
    printf("é equilatero pow");
  }
}

// Factorial

int fatorial(int n) {
   int i, fat ;

   if (n <= 1)       
      return (1) ;

   fat = 1 ;
   for (i=2; i <= n; i++)
      fat *= i ;

   return (fat) ;
}

//calculateLeapYear

void verifyLeapYear() {
  int initialYear, finalYear;

  printf("Ano inicial: ");
  scanf("%d", &initialYear);

  int interval = initialYear;
  
  printf("Ano final: ");
  scanf("%d", &finalYear);

  for (int counter=1; initialYear <= finalYear; counter++) {
    initialYear = interval + counter;
    if (initialYear % 4 == 0 && initialYear % 100 != 0 || initialYear % 400 == 0)
      printf("ano %d\n", initialYear);
  }
}


int main() {
  // MMC
  int num1;
  int num2;
  
  printf("Digite um numero: ");
  scanf("%d", &num1); 

  printf("Digite um segundo numero: ");
  scanf("%d", &num2); 

  printf("MMC = %d\n", mmc(num1, num2));
  return 0;

  //MDC
  int num1;
  int num2;
  
  printf("Digite um numero: ");
  scanf("%d", &num1); 

  printf("Digite um segundo numero: ");
  scanf("%d", &num2); 

  printf("MDC = %d\n", mdc(num1, num2));
  return 0;

  Triangle Identifier
  int side1;
  int side2;
  int side3;
  
  printf("Digite o valor do primeiro lado: ");
  scanf("%d", &side1); 

  printf("Digite o valor do segundo lado: ");
  scanf("%d", &side2); 

  printf("Digite o valor do terceiro lado: ");
  scanf("%d", &side3); 

  triangleIdentifier(side1, side2, side3);

  // Factorial
  int num;

  printf ("Digite um número: ");
  scanf("%d", &num);
    
  printf("O fatorial deste número é: %d\n", fatorial(num)) ;

  getTheHighestNumber
  int num, larger;
  int i;
  
  printf("Entre com o 1º numero inteiro: ");
  scanf("%i", &num);
  
  larger=num;

  for(i=1; i<10; i++)
   {
   printf("\nEntre com o %dº numero inteiro: ",i+1);
   scanf("%i", &num);
  
   if(num>larger)
   larger=num;
  }
  
  printf("\nO maior eh: %d", larger);

  //separatesNumbersInIncreasingForm
  int i, j, a, n = 10, number[30];

  printf("Digite 10 números alteatórios:  \n");
  for (i = 0; i < n; ++i)
    scanf("%d", &number[i]);
  for (i = 0; i < n; ++i)
  {
    for (j = i + 1; j < n; ++j)
    {
      if (number[i] > number[j])
      {
        a = number[i];
        number[i] = number[j];
        number[j] = a;
      }
    }
  }
  printf("Ordem crescente \n");
  for (i = 0; i < n; ++i)
    printf("%d\n", number[i]);

  //functionToCheckIfTheNumbeIsPrime
  setlocale(LC_ALL, "");
  int num;
  int result = 0;
  int i;
   
  printf("Digite um número: ");
  scanf("%d", &num);
   
  for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       result++;
       break;
    }
   }
   
   if (result == 0) {
      printf("%d é primo\n", num);
    } else {
      printf("%d não é primo\n", num);
     }

  //calculateLeapYear
  verifyLeapYear();

  //calculateAreaOfTriangle
  int base;
  int height;
  int result = 0;

  printf("Digite a base do Triangulo: ");
  scanf("%d", &base);

  printf("Digite a altura do Triangulo: ");
  scanf("%d", &height);

  result = base * height / 2;

  printf("A área desse triangulo é: %d", result);

  //calculateAreaOfATrapezoid
  int baseSmaller;
  int baseLarger;
  int height;
  int result = 0;

  printf("Digite a base menor do Trapezio: ");
  scanf("%d", &baseSmaller);

  printf("Digite a base maior do Trapezio: ");
  scanf("%d", &baseLarger);

  printf("Digite a altura do Trapezio: ");
  scanf("%d", &height);

  result = ((baseSmaller + baseLarger) * height) / 2;

  printf("A área desse Trapezio é: %d", result);
}
