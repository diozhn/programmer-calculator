#include <stdio.h>
#include <stdlib.h>

double sum(double a, double b)
{
  return a + b;
}

double subtract(double a, double b)
{
  return a - b;
}

double multiply(double a, double b)
{
  return a * b;
}

double slice(double a, double b)
{
  if (b != 0)
  {
    return a / b;
  }
  else
  {
    printf("Error: Slice by 0!\n");
    return 0;
  }
}

int bitwise_and(int a, int b)
{
  return a & b;
}

int bitwise_or(int a, int b)
{
  return a | b;
}

int bitwise_xor(int a, int b)
{
  return a ^ b;
}

int bitwise_not(int a)
{
  return ~a;
}

int main()
{
  double num1, num2;
  int num1_int, num2_int;
  char operator;
  double result;
  int result_int;

  printf("Choose mode: 1 - Arithmetic, 2 - Bitwise\n");

  int mode;
  scanf("%d", &mode);

  if (mode == 1)
  {
    printf("Enter the operation in the format: number1 operator number2\n");
    printf("Example: 4.5 + 2.3\n");
    printf("Valid operators: +, -, *, /\n");
    scanf("%lf %c %lf", &num1, &operator, & num2);

    switch (operator)
    {
    case '+':
      result = sum(num1, num2);
      break;
    case '-':
      result = subtract(num1, num2);
      break;
    case '*':
      result = multiply(num1, num2);
      break;
    case '/':
      result = slice(num1, num2);
    default:
      printf("Invalid operator!\n");
      return 1;
    }

    printf("Result: %.2lf\n", result);
  }
  else if (mode == 2)
  {
    printf("Enter the operation in the format: number1 operator number2\n");
    printf("Example: 5 + 3\n");
    printf("Valid operators: &, |, ^, ~\n");
    scanf("%d %c %d", &num1_int, &operator, & num2_int);
    switch (operator)
    {
    case '&':
      result_int = bitwise_and(num1_int, num2_int);
      break;
    case '|':
      result_int = bitwise_or(num1_int, num2_int);
      break;
    case '^':
      result_int = bitwise_xor(num1_int, num2_int);
      break;
    case '~':
      result_int = bitwise_not(num1_int);
      break;
    default:
      printf("invalid operator!\n");
      return 1;
    }
    printf("Result: %d\n", result_int);
  } else {
    printf("Invalid mode!\n");
    return 1;
  }

  return 0;
}
