/* 
 * File: Assignment2_Connelly.cpp
 * Author: Andrew Connelly
 * Function: Perform several diffrent functions involving arrays such as finding the
 * min, max, mean, median, and sorting of the array
 * Input: The user will be prompted by the program asking them what size do the want the array, then they will fill the
 * array's indexes with values up to the size of the array.
 * Output:  
 * Created on: 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
*function declarations
*/
double min(double myArray[], int size);
double max(double myArray[], int size);
double mean(double myArray[], int size);
double median(double myArray[], int size);
void sort(double myArray[], int size);
void readArray(double myArray[], int size);
void printArray(double myArray[], int size);

int main(int argc, char** argv)
{
// Declaring variable
int size;

// Getting no of Elements user want to enter
cout << "No of Elements you want to enter :";
cin >> size;

// creating an array based on size
double myArray[size];

// calling the functions
readArray(myArray, size);
printArray(myArray, size);
sort(myArray, size);
cout << "\n :: After Sorting ::" << endl;
printArray(myArray, size);
min(myArray, size);
max(myArray, size);
mean(myArray, size);
median(myArray, size);
return 0;
}
// This functions purpose is to find the min of the array
double min(double myArray[], int size)
{

double min = myArray[0];
for (int i = 0; i < size; i++)
{
if (myArray[i] < min)
min = myArray[i];
}
cout << "The min of the array is:" << min << endl;
}

// The purpose of the function is to find the max of the array by going through and searching
// through each index
// and comparing them to the previous index and if it's greater it sets it as the max value.
double max(double myArray[], int size)
{

double max = myArray[0];
for (int i = 0; i < size; i++)
{
if (myArray[i] > max)
max = myArray[i];
}
cout << "The max of the array is:" << max << endl;
}
// The purpose of the function is to find the mean of the array by adding each index and dividing by
// the arrays size
double mean(double myArray[], int size)
{

double sum = 0;

for (int i = 0; i < size; i++)
{
sum += myArray[i];
}
cout << "The mean of the array is:" << (sum / size) << endl;
}
// The purpose of the function is to find the median of the array
// It first checks to see if the size is even if so it then grabs the middle 2 values and adds them
// and divides it by 2
// If the size is odd the it simply divides it by 2 and looks at the index that equals
double median(double myArray[], int size)
{
double sum = 0;
double median;
if (size % 2 == 0)
{
int i = size / 2 - 1;
int j = size / 2;
median = (myArray[i] + myArray[j]) / 2;
}
else
{
median = myArray[size / 2];
}
cout << "The median of the array is:" << median << endl;
}
void sort(double myArray[], int size)
{
double temp;

// This Logic will Sort the Array of elements in Ascending order
for (int i = 0; i < size; i++)
{
for (int j = i + 1; j < size; j++)
{
if (myArray[i] > myArray[j])
{
temp = myArray[i];
myArray[i] = myArray[j];
myArray[j] = temp;
}
}
}
}
void readArray(double myArray[], int size)
{


for (int i = 0; i < size; i++)
{
cout << "Please enter the array element#" << i + 1 << ":";
cin >> myArray[i];
}
}

void printArray(double myArray[], int size)
{
cout << "\nDisplaying the Elements In the Array :" << endl;
for (int i = 0; i < size; i++)
{


cout << myArray[i] << " ";
}
cout << endl;
}
