/*A-Nony-Mus
27 Feb. 2012
This program finds the largest, smallest and average values of n numbers input by the user*/

#include <stdio.h>
#include <math.h>

//function prototype
double standard_dev(int x, double y, double z);

int main(void)
{

int n,				//the amount of numbers the user would like to input
	divisor,		//this value is set equal to the initial n value
	comparison; 	//this variable is to control a nested while loop
double biggest, 	//biggest input value
	smallest,		//smallest input value
	sum,			//the sum of all input numbers
	input_value,	//the value input inside of the while loop
	average,		//the average of all input values
    range,
    sum_squares,
    stand_dev;

//take input from the user
printf("how many numbers would you like to input? ");
scanf("%d", &n);

sum = 0;		//set sum equal to 0
divisor = n;	//set the divisor equal to the input n
comparison = 1;	//set the comparison to 1

while(n > 0){
//take input from the user and assign it to the input_value variable
printf("please enter a number ");
scanf("%lf", &input_value);

    //assign the input_variable to both the biggest and smallest values
    while(comparison > 0){
        biggest = input_value;
        smallest = input_value;
        comparison--;
    }

sum += input_value; //add the input_value to the sum

//compare the input_value to the biggest and smallest inputs and make any adjustments necessary
if(input_value > biggest)
biggest = input_value;
else if(input_value < smallest)
smallest = input_value;

sum_squares += pow(input_value, 2);

n--; //subtract one from n
}

range = biggest - smallest;

average = sum / divisor; //get the average of the input numbers

stand_dev = standard_dev(divisor, sum_squares, average);

//print the results
printf("your average is %4.2f\n", average);
printf("your greatest number was %4.2f\n", biggest);
printf("your smallest number was %4.2f\n", smallest);
printf("the range is %4.2f\n", range);
printf("the standard deviation is %4.2f\n", stand_dev);    

return(0);
}


double standard_dev(int x, double y, double z)
{
    double value;
    value = sqrt((y / x) - pow(z, 2));
    return(value);
}
