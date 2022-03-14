/* questao 2 da prova antiga */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int funcao (int a, int b, int c) {
  int ma, me, ce, tot, r; /* daria para economizar variaveis */
  if (a > b && a > c) {
    ma = a;
    if (b > c) {
      ce = b;
      me = c;
      }
    else {
      ce = c;
      me = b;
      }
    }
  else if (b > a && b > c) {
    ma = b;
    if (a > c) {
      ce = a;
      me = c;
      }
    else {
      ce = c;
      me = a;
      }
    }
  else {
    ma = c;
    if (a > b) {
      ce = a;
      me = b;
      }
    else {
      ce = b;
      me = a;
      }
    }

  tot = (me - 1000 + 1) + (ma - ce + 1);
  r = rand() % tot;

  /*
  if (r < me - 1000 + 1) {
    r += 1000;
    }
  else {
    r += ce - (me - 1000 + 1);
    }
  */

  r += 1000;
  if (r > me)
    r += (ce - me - 1);
  return r;
  }


main() {
  int a, b, c;
  srand((unsigned)time(NULL));
  printf("Digite a: ");
  scanf ("%d", &a);
  printf("Digite b: ");
  scanf ("%d", &b);
  printf("Digite c: ");
  scanf ("%d", &c);
  printf("Numero gerado: %d.\n", funcao(a, b, c));
  }