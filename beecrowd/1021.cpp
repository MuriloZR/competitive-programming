#include <bits/stdc++.h>

using namespace std;

int main() {
  float valor_total;
  int n100, n50, n20, n10, n5, n2;
  int m1, m50, m25, m10, m05, m01;
  cin >> valor_total;

  int nts, cts;

  nts = (int)valor_total;
  cts = (int)round((valor_total - nts)*100);
  
  n100 = nts/100;
  nts %= 100;
  n50 = nts/50;
  nts %= 50;
  n20 = nts/20;
  nts %= 20;
  n10 = nts/10;
  nts %= 10;
  n5 = nts/5;
  nts %= 5;
  n2 = nts/2;
  m1 = nts%2;

  m50 = cts/50;
  cts %= 50;
  m25 = cts/25;
  cts %= 25;
  m10 = cts/10;
  cts %= 10;
  m05 = cts/5;
  m01 = cts%5;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", n100);
  printf("%d nota(s) de R$ 50.00\n", n50);
  printf("%d nota(s) de R$ 20.00\n", n20);
  printf("%d nota(s) de R$ 10.00\n", n10);
  printf("%d nota(s) de R$ 5.00\n", n5);
  printf("%d nota(s) de R$ 2.00\n", n2);
  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", m1);
  printf("%d moeda(s) de R$ 0.50\n", m50);
  printf("%d moeda(s) de R$ 0.25\n", m25);
  printf("%d moeda(s) de R$ 0.10\n", m10);
  printf("%d moeda(s) de R$ 0.05\n", m05);
  printf("%d moeda(s) de R$ 0.01\n", m01);
  
  return 0;
}