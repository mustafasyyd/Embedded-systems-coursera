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
 * @file <stats.h> 
 * @brief <THIS FILE CONTAIN THE stats.c FILE FUNCTIONS DECLARATIONS>
 *
 * <ALSO EXPLAINING EACH FUNCTION DECLARATION,WHAT IT DOES AND ITS ARGUMENTS AND VARIABLES>
 *
 * @author <MUSTAFA SAYED>
 * @date <16 JUNE 20201>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 


// * @brief <FUNCTION TO PRING THE ARRAY>
void print_array(unsigned char *ptr, unsigned int n);
 
 //* <THIS FUNCTION USED only TO PRINT THE ARRAY ELEMENTS 
 //BASED ON TWO GIVEN ARGUEMENTS >

/* 
 * @param <unsigned char *ptr> <argument pointer of unsigned char type points to the array >
 * @param <unsigned int n> <a variable equal the size of the array used in the for loop>

 * @return <It returns void >
*/

// * @brief <FUNCTION TO FIND THE MEAN OF THE ARRAY>
unsigned char find_mean(unsigned char *ptr, unsigned int n);
 
//* <THIS FUNCTION USED FIND THE MEAN VALUE OF ARRAY ELEMENTS 
//BASED ON TWO GIVEN ARGUEMENTS, THE POINTER TO THE ARRAY AND THE LENGTH OF IT>

/* 
 * @param <unsigned char *ptr> <argument pointer of unsigned char type points to the array >
 * @param <unsigned int n> <a variable equal the size of the array used in the for loop>

 * @return <It returns unsigned char value >
*/


// * @brief <FUNCTION TO FIND THE MEDIAN OF THE ARRAY>
unsigned char find_median(unsigned char *ptr, unsigned int n);
 
//* <THIS FUNCTION USED TO FIND THE MEDIAN VALUE OF ARRAY ELEMENTS 
//BASED ON TWO GIVEN ARGUEMENTS, THE POINTER TO THE ARRAY AND THE LENGTH OF IT>

/* 
 * @param <unsigned char *ptr> <argument pointer of unsigned char type points to the array >
 * @param <unsigned int n> <a variable equal the size of the array used in the for loop>

 * @return <It returns unsigned char value >
*/


// * @brief <FUNCTION TO FIND THE MAXIMUM VALUE OF THE ARRAY>
unsigned char find_maximum(unsigned char *ptr, unsigned int n);
 
//* <THIS FUNCTION USED TO FIND THE MAXIMUM VALUE OF ARRAY ELEMENTS 
//BASED ON TWO GIVEN ARGUEMENTS, THE POINTER TO THE ARRAY AND THE LENGTH OF IT>

/* 
 * @param <unsigned char *ptr> <argument pointer of unsigned char type points to the array >
 * @param <unsigned int n> <a variable equal the size of the array used in the for loop>

 * @return <It returns unsigned char value >
*/

// * @brief <FUNCTION TO FIND THE MINIMUM VALUE OF THE ARRAY>
unsigned char find_minimum(unsigned char *ptr, unsigned int n);
 
//* <THIS FUNCTION USED TO FIND THE MINIMUM VALUE OF ARRAY ELEMENTS 
//BASED ON TWO GIVEN ARGUEMENTS, THE POINTER TO THE ARRAY AND THE LENGTH OF IT>

/* 
 * @param <unsigned char *ptr> <argument pointer of unsigned char type points to the array >
 * @param <unsigned int n> <a variable equal the size of the array used in the for loop>

 * @return <It returns unsigned char value >
*/

// * @brief <FUNCTION TO SORT THE ARRAY ELEMENTS >
void sort_array(unsigned char *ptr, unsigned int n);
 
//* <THIS FUNCTION USED TO SORT ARRAY ELEMENTS FROM THE BIGGEST TO THE SMALLEST
// BASED ON TWO GIVEN ARGUEMENTS, THE POINTER TO THE ARRAY AND THE LENGTH OF IT>

/* 
 * @param <unsigned char *ptr> <argument pointer of unsigned char type points to the array >
 * @param <unsigned int n> <a variable equal the size of the array used in the for loop>

 * @return <It returns void value>
*/


// * @brief <FUNCTION TO print ALL THE STATISRICS VALUES OF THE ARRAY ELEMENTS >
void print_statistics(unsigned char *ptr, unsigned int n);
 
//* <THIS FUNCTION USED TO print ALL THE STATISRICS VALUES OF THE ARRAY ELEMENTS
//MEAN,MEDIAN,MAX, MIN,PRINT THE ARRAY NAD SORTING IT
// BASED ON TWO GIVEN ARGUEMENTS, THE POINTER TO THE ARRAY AND THE LENGTH OF IT>

/* 
 * @param <unsigned char *ptr> <argument pointer of unsigned char type points to the array >
 * @param <unsigned int n> <a variable equal the size of the array used in the for loop>

 * @return <It returns void value>
*/


// * @brief <FUNCTION TO SWAP TWO VALUES ON THE ARRAY ELEMENTS >
void swap(unsigned char *n1,unsigned char *n2); 

//* <THIS FUNCTION USED TO SWAP TWO VALUES ON THE ARRAY ELEMENTS 
// BASED ON TWO GIVEN ARGUEMENT POINTERS >

/* 
 * @param <unsigned char *n1> <argument pointer of unsigned char type >
 * @param <unsigned char *n2> <argument pointer of unsigned char type >
 * @return <It returns void value>
*/

#endif /* __STATS_H__ */
