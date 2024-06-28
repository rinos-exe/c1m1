/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief To find array statistics of a given array 
 *
 * This is a C program to find mean, median, maximum value, minimum value, descending sort of a given array "test".
 *
 * @author Rino Shajan
 * @date 28/06/2024
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)




int find_mean(unsigned char t[], int a);
int find_median(unsigned char t[], int a);
int find_maximum(unsigned char t[], int a);
int find_minimum(unsigned char t[], int a);
void sort_array(unsigned char t[], int a);
unsigned char print_array(unsigned char t[]);
void print_statistics(unsigned char t[], int a);

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  int i, j, a, t;
  int mean, median;
  int max, min;
  
  print_statistics(test, SIZE);

  sort_array(t, a);
  printf("Sorted order of arrays is: \n");
  for (i = 0 ; i < SIZE ; i++)
  {
    printf("%d", test[i]);
  }
  printf("\n");

  return 0;
}

  float find_mean(unsigned char t[], int a)
  {
        int sum = 0;
    for (i = 0 ; i < a ; i++)
    {
      sum = sum + t[i];
    }
    mean = sum/a;

    return mean;
  }

  float find_median(unsigned char t[], int a)
  {
      for (i = 0 ; i < a - 1 ; i++)
    {
      if (t[i] < t[i+1])
      {
        int temp = t[i];
        t[i] = t[i+1];
        t[i+1] = temp;
      }
    }
    int n = a / 2;
    int n1 = a/2 + 1;
    if (a % 2 == 0)
    {
      median = (t[n] + t[n1])/2;
    }
    else
    {
      median = t[n];
    }

    return median;

  }

  int find_maximum(unsigned char t[], int a)
  {
      for (i = 0 ; i < a - 1 ; i++)
    {
      if (t[i] < t[i+1])
      {
        int temp = t[i];
        t[i] = t[i+1];
        t[i+1] = temp;
      }
    }
    max = t[0];

    return max;
  }

  int find_minimum(unsigned char t[], int a)
  {
      for (i = 0 ; i < a - 1 ; i++)
    {
      if (t[i] < t[i+1])
      {
        int temp = t[i];
        t[i] = t[i+1];
        t[i+1] = temp;
      }
    }
    int l = a - 1;
    min = t[l];

    return min;
  }

  void sort_array(unsigned char t[], int a)
  {
       for (i = 0 ; i < a ; i++)
    {
      for (j = 0; i < a -i -1 ; j++)
      {
        if (t[j] < t[j + 1])
        {
          int temp = t[j];
          t[j] = t[j + 1];
          t[j + 1] = temp;
        }
      }
    }

  }

  unsigned char print_array(unsigned char t[])
  {
    return t;
  }

  void print_statistics(unsigned char t[], int a)
  {
    int mean = find_mean(t, a);
    int median = find_median(t, a);
    int max = find_maximum(t, a);
    int min = find_minimum(t, a);

    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
  }



