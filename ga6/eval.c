#include <stdio.h>
#include <math.h>    /* for pow(x, y) */
#include "type.h"
#include <stdlib.h>
#define n_dim 100
#define bits_per_dim 1

double decode(IPTR pj, int index, int size);
double binToDec(int *chrom, int l);

double eval(POPULATION *p, IPTR pj) 
     /* Called from gen.c and init.c */
{

  double val;
  //double square = 0.0;

  val = decode(pj, 0, p->lchrom); 
  //square = val * val;

  return val;
}

double decode(IPTR pj, int index, int size)
{

  return ((double) binToDec(&(pj->chrom[0]), size));
}

double rand_gen() {
   // return a uniformly distributed random value
   return ( (double)(rand()) + 1. )/( (double)(RAND_MAX) + 1. );
}
double normalRandom() {
   // return a normally distributed random value
   double v1=rand_gen();
   double v2=rand_gen();
   return cos(2*3.14*v2)*sqrt(-2.*log(v1));
}
double binToDec(int *chrom, int l)
{
  int i;
  double sum = 0;

  for(i = 0; i < l; i++)
  {
    sum += (chrom[i]) == 0 ? 0.0 : 1.0;
  }

  return sum;
}


void decToBin(int ad, int *barray, int size)
{
  int i, t;

  t = ad;
  for(i = 0; i < size; i++){
    barray[i] = t%2;
    t = t/2;

  }
}
