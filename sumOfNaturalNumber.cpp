#include <bits/stdc++.h>
using namespace std;

int addNumber(int m, int n)
{
  int sum = 0;
  if (n > m)
  {
    return 0;
  }
  else
  {
    return n + addNumber(m, n + 1);
  }
}

int main()
{
  int m, n;
  printf("Enter you number: ");
  scanf("%d", &n);
  printf("Enter your last number you want to add: ");
  scanf("%d", &m);
  int answer = addNumber(m, n);
  printf("The total sum is: %d", answer);
  return 0;
}