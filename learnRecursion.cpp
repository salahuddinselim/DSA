#include <iostream>
using namespace std;

void printNumber(int n)
{
  if (n >= 5)
    return;
  else
    printf("Your number is increasing: %d\n", n);
  n++;
  printNumber(n);
}

int main()
{
  int n;
  printf("Enter your number: ");
  scanf("%d", &n);
  printNumber(n);
}