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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

int find_mean(unsigned char t[], int a);

/**
 * @brief Finds the mean of an array
 *
 * This function takes in an array "t[]" of size "a" 
 * and finds the mean value of the array. It returns
 * the mean value
 *
 * @param t[] This is the array to be processed
 * @param a This is the size for the array
 *
 * @return The mean value of the array
 */

int find_median(unsigned char t[], int a);

/**
 * @brief Finds the median of an array
 *
 * This function takes in an array "t[]" of size "a" and finds
 * the median value of the array. It retuens the median value 
 * of the array.
 *
 * @param t[] This is the array to be processed
 * @param a This is the size for the array
 *
 * @return The median value of the array
 */

int find_maximum(unsigned char t[], int a);

/**
 * @brief Finds the maximum value of an array
 *
 * This function takes in an array "t[]" of size "a" and finds
 * the maximum value in an array. It returns the maximum value
 * calculated.
 *
 * @param t[] This is the array to be processed
 * @param a This is the size for the array
 *
 * @return The maximum value of the array
 */

int find_minimum(unsigned char t[], int a);

/**
 * @brief Finds the minimum value of an array
 *
 * This function takes in an array "t[]" of size "a" and
 * finds the minimum value of the array. It returns the Minimum value.
 *
 * @param t[] This is the array to be processed
 * @param a This is the size for the array
 *
 * @return The minimum value of the array
 */

void sort_array(unsigned char t[], int a);

/**
 * @brief Sorts an array in descending order
 *
 * This function takes in an array "t[]" of size "a" and 
 * sorts the array in descending order.
 * It doesn't return anything.
 *
 * @param t[] This is the array to be processed
 * @param a This is the size for the array
 *
 * @return None
 */

unsigned char print_array(unsigned char t[]);

/**
 * @brief Prints the array
 *
 * This function takes in an array "t[]" and displays it
 *
 * @param t[] This is the array to be processed
 *
 * @return The entire array
 */

void print_statistics(unsigned char t[], int a); 

/**
 * @brief Finds the mean of an array
 *
 * This function takes in an array "t[]" of size "a" and displays 
 * the calculated data. All the other functions are called in this function.
 * It doesnt return any data.
 *
 * @param t[] This is the array to be processed
 * @param a This is the size for the array
 *
 * @return None
 */

#endif /* __STATS_H__ */
