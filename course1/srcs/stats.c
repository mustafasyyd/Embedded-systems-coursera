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
 * @file <stats.c> 
 * @brief <This file is for the project coding and involves the main functions and variables used to get the required values >
 *
 * <The array existed is the array elements on which statistics are done>
 * <There are 8 functions to find median,mean,max and min and also to print array and statistics and to sort the array>
 
 * @author <MUSTAFA SAYED>
 * @date <16 JUNE 2021>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

void main() {
    /* Statistics and Printing Functions Go Here */
  
    print_array(test,SIZE);
    sort_array(test,SIZE);
    
    printf("\n----------------------------------------------");
    printf("\nAFTER SORTING THE ARRAY:\n");
    print_array(test,SIZE);
   
    printf("----------------------------------------------\n");
    
    
    printf("ARRAY STATISTICS:\n");
    
    printf("MEAN: %d\n",find_mean(test,SIZE));
    printf("MEDIAN: %d\n",find_median(test,SIZE));
    printf("MAX: %d\n",find_maximum(test,SIZE));
    printf("MIN: %d\n",find_minimum(test,SIZE));
    printf("----------------------------------------------\n");
    
    print_statistics(test,SIZE);
        
}

/* FUNCTIONS DECLARATIONS*/


//to swap two values
void swap (unsigned char *n1,unsigned char *n2)
{ 
    char temp;
    
    temp=*n2;
    *n2=*n1;
    *n1=temp;
}																							

//to print the array elements
void print_array(unsigned char *ptr, unsigned int n)
{
    printf("ARRAY ELEMENTS=[");
    for(int i=0;i<n;i++)
    {
         printf("%d ",*(ptr+i));
    }
    printf("]\n");
}
//to find the mean
unsigned char find_mean(unsigned char *ptr, unsigned int n)
{
    unsigned int sum=0;
    
    for(char i=0; i<n;i++)
       sum+=*(ptr+i);
    return (sum/n);
}
//to find the median
unsigned char find_median(unsigned char *ptr, unsigned int n)
{
    unsigned int med;
    int i,j ;
    sort_array(test,SIZE);
    
    if( n%2 == 0)
    {
        med=(n/2)-1;
        return *(ptr+med);  //to be revised
    }
    else
    {
        med= ((n+1)/2)-1;
        return *(ptr+med);
    }
}
//to find the maximum value
unsigned char find_maximum(unsigned char *ptr, unsigned int n)
{
    sort_array(test,SIZE);
    return *(ptr);
}
//to find the minimum value
unsigned char find_minimum(unsigned char *ptr, unsigned int n)
{
    sort_array(test,SIZE);
    return *(ptr+n-1);
    
}
//to sort the array from Z-A (Biggest to Smallest)
void sort_array(unsigned char *ptr, unsigned int n)
{
     for(char i=0;i<n;i++)
    {
        for(char j=i+1;j<n;j++)
        {
            if( *(ptr+i) < *(ptr+j) )
               swap((ptr+i),(ptr+j));
        
        }
    }
   
}
//to print the statistics values: mean,median,maximum and minimum
void print_statistics(unsigned char *ptr, unsigned int n)
{
    printf("THE ARRAY STATISTICS:\n");
    
    printf("MAX: %d\n",find_maximum(test,SIZE));
    printf("MIN: %d\n",find_minimum(test,SIZE));
    printf("------\n");    
    printf("MEDIAN: %d\n",find_median(test,SIZE));
    printf("MEAN: %d\n",find_mean(test,SIZE));
    
    printf("----------------------------------------------\n");
}