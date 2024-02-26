/***************************************************************************
This is to certify that this project is my own work, based on my personal efforts in studying and
applying the concepts learned. I have constructed the functions and their respective algorithms
and corresponding code by myself. The program was run, tested, and debugged by my own
efforts. I further certify that I have not copied in part or whole or otherwise plagiarized the
work of other students and/or persons.
 Carl Matthew T. Verano, DLSU ID# 12116203
***************************************************************************/

/*
 Description: A program that mimics a pizza vending machine, 
 wherein the user will input codes corresponding to what they
 want to happen. Such as choosing the crust type, size, toppings,
 and the stuffing. Similar to an actual vending machine, it also
 accumulates and displays the price to pay and to enter the payment.
 Programmed by: Carl Matthew T. Verano S19B
 Last modified: 1/24/2022
 Version: 56
 [Acknowledgements: stdlib.h]
*/

#include <stdio.h>
#include <stdlib.h>

// These are the constant values declared for their respective names
#define Small 100.00
#define Medium 175.00
#define Large 225.00
#define ham 10.00
#define pineapple 6.00
#define sausage 15.00
#define cheese 12.00
#define olives 10.00
#define stfCheese 30.00
#define stfSpam 25.00
#define bothstuff 35.00
#define bill_1000 1000.00
#define bill_500 500.00
#define bill_100 100.00
#define bill_50 50.00
#define bill_20 20.00
#define bill_10 10.00
#define bill_5 5.00
#define bill_1 1.00
#define bill_025 0.25
#define bill_010 0.10
#define bill_005 0.05
#define bill_001 0.01
#define topping 2
#define stuffing 5

void
displayCrust ()
{
	printf("Note: Price does not vary between crusts.\n");
	printf("Option for pizza crust.\n");
	printf("| Input Code | Size  | Stuffing |\n");
	printf("---------------------------------\n");
	printf("| 1          | Thin  | No       |\n");
	printf("| 2          | Thick | Yes      |\n\n");
}

void
displaySize ()
{
	printf("\nOption for pizza size.\n");
	printf("| Input Code | Size     | Price  |\n");
	printf("----------------------------------\n");
	printf("| 's' or 'S' | Small    | 100.00 |\n");
	printf("| 'm' or 'M' | Medium   | 175.00 |\n");
	printf("| 'l' or 'L' | Large    | 225.00 |\n\n");
}

void
displayToppings ()
{
	printf("\nOption for toppings.\n");
	printf("| Input Code | Toppings  | Price |\n");
	printf("----------------------------------\n");
	printf("| 'h' or 'H' | Ham       | 10.00 |\n");
	printf("| 'p' or 'P' | Pineapple |  6.00 |\n");
	printf("| 's' or 'S' | Sausage   | 15.00 |\n");
	printf("| 'c' or 'C' | Cheese    | 12.00 |\n");
	printf("| 'o' or 'O' | Olives    | 10.00 |\n\n");
	printf("To proceed to the next step, enter n/N.\n");
}

void
displayCheese ()
{
	printf("\nOption for cheese types.\n");
	printf("| Input Code | Type       |\n");
	printf("---------------------------\n");
	printf("| 'm' or 'M' | Mozzarella |\n");
	printf("| 'g' or 'G' | Gorgonzola |\n");
	printf("| 'f' or 'F' | Fontina    |\n");
	printf("| 'p' or 'P' | Parmesan   |\n\n");
}

void
displayStuffing ()
{
	printf("\nOption for stuffing.\n");
	printf("| Input Code | Type      | Price |\n");
	printf("----------------------------------\n");
	printf("| 'c' or 'C' | Cheese    | 30.00 |\n");
	printf("| 's' or 'S' | Spam      | 25.00 |\n");
	printf("| 'b' or 'B' | Both      | 35.00 |\n\n");
	printf("To proceed to the next step, enter n/N.\n");
}

void
displayBills ()
{
	printf("These are the corresponding codes in inserting the payment.\n");
	printf("| Input Code | Value       |\n");
	printf("---------------------------------\n");
	printf("| 1          | Php 1000.00 |\n");
	printf("| 2          | Php 500.00  |\n");
	printf("| 3          | Php 100.00  |\n");
	printf("| 4          | Php 50.00   |\n");
	printf("| 5          | Php 20.00   |\n");
	printf("| 6          | Php 10.00   |\n");
	printf("| 7          | Php 5.00    |\n");
	printf("| 8          | Php 1.00    |\n");
	printf("| 9          | Php 0.25    |\n");
	printf("| 10         | Php 0.10    |\n");
	printf("| 11         | Php 0.05    |\n");
	printf("| 12         | Php 0.01    |\n");
	printf("To cancel order, enter 0.\n");
}

/*
Description:
Gets the type of crust of the pizza and returns the number corresponding to the type of crust chosen
Precondition: All inputs are integers
@param No parameter
@return Returns the option for crust that was chosen
*/
int
getCrust ()
{
	int nTrue = 0; // A variable created to determine whether inputs are valid
	int nCrust; // Stores the input if the user for crust
	
	while (nTrue != 1) {
		
			printf("Enter the type of crust: ");
    		scanf("%d", &nCrust);
			
			switch (nCrust) {
				case 1: 
						printf("You have chosen thin crust for your pizza\n"); 
						nTrue = 1;
						break;
						
				case 2: 
						printf("You have chosen thick crust for your pizza\n");
						nTrue = 1;
						break;
						
				case 80808: 
							nTrue = 1; // So that when "80808" is entered, it will exit the loop
							break;
							
				default: 
						 printf("Invalid option\n");
						 break;
			}
	}
	return nCrust;
}

/*
Gets the size of the pizza and returns the price corresponding to the size chosen
Precondition: All inputs are characters
@param No parameter
@return Returns the value depending on the size chosen
*/
float
getSize ()
{
	char cSize; // Stores the input of the user for the size of the pizza
	displaySize (); // Displays a table with options for sizes and their corresponding prices
	int nTrue = 0; // A variable created to determine whether inputs are valid
	float sizeVal; // Stores the value for the corresponding size chosen
	
	while (nTrue != 1) {
		
			printf("Enter the size of pizza: ");
	    	scanf(" %c", &cSize);
	    	
			switch (cSize) {
				case 's':
				case 'S': 
						  nTrue = 1;
						  sizeVal = Small;
						  break;
						  
				case 'm':
				case 'M': 
						  nTrue = 1;
						  sizeVal = Medium;
						  break;
						  
				case 'l':
				case 'L': 
						  nTrue = 1;
						  sizeVal = Large;
						  break;
						  
				case 'x':
				case 'X': 
					 	  nTrue = 1;
						  sizeVal = -1;
						  break;
						  
				default: 
						 printf("Invalid option\n");
						 break;
			}
	}
	return sizeVal;
}

/*
Gets the toppings of the pizza and saves the count of each type of topping and the accumulated price of the toppings
Precondition: All inputs are integers
@param hCtr - is the count for number of times ham is chosen so far
@param pCtr - is the count for number of times pineapple is chosen so far
@param sCtr - is the count for number of times sausage is chosen so far
@param cCtr - is the count for number of times cheese is chosen so far
@param oCtr - is the count for number of times olives is chosen so far
@param nCtr - is the count for the total toppings chosen so far
@param cmCtr - is the count for number of times mozzarella is chosen so far
@param cgCtr - is the count for number of times gorgonzola is chosen so far
@param cfCtr - is the count for number of times fontina is chosen so far
@param cpCtr - is the count for number of times parmesan is chosen so far
@param result - to store the value of the toppings
@return does not return anything, moreover return type is void 
*/
void
getToppings (float *result, int *hCtr, int *pCtr, int *sCtr, int *cCtr, int *oCtr, 
				int *toppCtr, int *cmCtr, int *cgCtr, int *cfCtr, int *cpCtr)
{
	int nTrue = 0; // A variable created to determine whether inputs are valid, 0 is false, 1 is true
	char cToppings, cType; // Stores the input of the user for the size of the pizza
	int cTrue = 0; // A variable created to determine whether at least one input is cheese, 'c' or 'C'
	int i; 
	
	displayToppings (); // Displays a table with options for toppings and their corresponding prices
	
	printf("Enter at least one topping(s)\n");
	
	while ((cToppings != 'n' && cToppings != 'N') || nTrue != 1) {
		
			printf("Enter topping: ");
			scanf(" %c", &cToppings);
			
			switch (cToppings) {
				case 'h':
				case 'H': 
						  *result += ham; 
						  *toppCtr += 1;
						  *hCtr += 1;
						  nTrue = 1;
						  break;
						  
				case 'p':
				case 'P': 
						  *result += pineapple; 
						  *toppCtr += 1;
						  *pCtr += 1;
						  nTrue = 1;
						  break;
						  
				case 's':
				case 'S': 
					 	  *result += sausage; 
						  *toppCtr += 1;
						  *sCtr += 1;
						  nTrue = 1;
						  break;
						  
				case 'c':
				case 'C': 
						  *result += cheese; 
						  *toppCtr += 1;
						  *cCtr += 1;
						  cTrue += 1; // Counter for cheese, number of time to choose type cheese will be repeated
						  nTrue = 1;
						  break;
						  
				case 'o':
				case 'O': 
						  *result += olives; 
						  *toppCtr += 1;
						  *oCtr += 1;
						  nTrue = 1;
						  break;
						  
				case 'x':
				case 'X': 
						  *result = -1;/* result is -1 when x/X is entered so that the 
								  		  loop in the main exits and order is cancelled */
						  nTrue = 1; // So that when 'x' or 'X' is entered, it will exit the current loop
						  cToppings = 'n'; // So that when x/X is entered, it will exit the loop
						  break;
						  
				case 'n': 
				case 'N': // When valid input, increment by 1 and only becomes invalid when n/N is the first input
						  if (*toppCtr == 0) 
								printf("Wrong input, enter again.\n");				
						  break;
						
				default: printf("Invalid option\n");
				    	 break;
		}
	}
	if(cTrue >= 1) {
			displayCheese(); // Displays a table with options for types of cheeses
			
			for (i = 0; i < cTrue; i++) { //Keeps looping until it reaches the number of times cheese was chosen
			
					printf("What type of cheese do you want? ");
		   	    	scanf(" %c", &cType);
		   	    	
			    	switch (cType) {
			    		
				    	case 'm':
		            	case 'M': 
								  *cmCtr += 1;
								  printf("You chose mozzarella\n");
								  break;
								  
		            	case 'g':
		            	case 'G': 
								  *cgCtr += 1;
								  printf("You chose gorgonzola\n");
								  break;
								  
		            	case 'f':
		            	case 'F': 
								  *cfCtr += 1;
								  printf("You chose fontina\n");
								  break;
								  
		            	case 'p':
		            	case 'P': 
								  *cpCtr += 1;
								  printf("You chose parmesan\n");
								  break;
								  
		            	case 'x':
		            	case 'X': 
								  cTrue = 0; //So that the loop stops when x/X is entered as i will never be greater than 0
								  *result = -1; /* result is -1 when x/X is entered so that the 
								  				   loop in the main exits and order is cancelled */
								  break;
								  
		            	default: 
								 printf("Invalid option\n");
								 cTrue += 1;
								 break;
			    	}
		    }
	}
}

/*
Gets the crust stuffing of the pizza, saves the price of the stuffing 
corresponding to the chosen stuffing type and the time multiplier
Precondition: All inputs are characters
@param stuffVal - stores the value corresponding to the stuffing chosen
@param stuffTime - is a multiplier for the time it takes to complete the order based on the stuffing
@param stuffType - is a number that corresponds to the stuffing chosen
@return does not return anything, moreover return type is void
*/
void
crustStuffing (float *stuffVal, int *stuffTime, int *stuffType)
{
	displayStuffing();
	int nTrue = 0;
	char cStuff;
	
	while ((cStuff != 'n' && cStuff != 'N') && nTrue != 1) {
		
			printf("Enter stuffing: ");
			scanf(" %c", &cStuff);
			
			switch (cStuff) {
				
					case 'c':
		        	case 'C': 
							  printf("You chose cheese\n");
							  *stuffVal = stfCheese;
							  *stuffTime = 1;
							  *stuffType = 1;
							  nTrue = 1;
							  break;
							  
		        	case 's':
		        	case 'S': 
							  printf("You chose spam\n");
							  *stuffVal = stfSpam;
							  *stuffTime = 1;
							  *stuffType = 2;
							  nTrue = 1;
							  break;
							  
		        	case 'b':
		        	case 'B': 
							  printf("You chose both cheese and spam for your crust stuffing\n");
							  *stuffVal = bothstuff;
							  *stuffTime = 2;
							  *stuffType = 3;
							  nTrue = 1;
							  break;
							  
		        	case 'n':
		        	case 'N': 
							  nTrue = 1;
							  stuffVal = 0;
							  *stuffTime = 0;
							  *stuffType = 0;
							  break;
							  
		        	case 'x':
		        	case 'X': 
							  nTrue = 1;
							  *stuffVal = -1;
							  break;
							  
		        	default: 
							 printf("Invalid option\n");
							 nTrue = 0;
							 break;
			}
	}
}

/*
Prompts the user to input the bills corresponding to their 
designated value and saves the accumulated the total input value
Precondition: All inputs are integers
@param totalVal - stores the total value of so far based on the user's bill input
@return does not return anything
*/
void
billsPayment (float *totalVal)
{
	int nBills;
	
	printf("Enter Bills: ");
	scanf("%d", &nBills);
	
	switch (nBills) {
	
		case 1: 
				*totalVal += bill_1000;
				break;
				
		case 2: 
				*totalVal += bill_500;
				break;
				
		case 3: 
				*totalVal += bill_100;
				break;
				
		case 4: 
				*totalVal += bill_50;
				break;
				
		case 5: 
				*totalVal += bill_20;
				break;
				
		case 6: 
				*totalVal += bill_10;
				break;
				
		case 7: 
				*totalVal += bill_5;
				break;
				
		case 8: 
				*totalVal += bill_1;
				break;
				
		case 9: 
				*totalVal += bill_025;
				break;
				
		case 10: 
				 *totalVal += bill_010;
				 break;
				 
		case 11: 
				 *totalVal += bill_005;
				 break;
				 
		case 12: 
				 *totalVal += bill_001;
				 break;
				 
		case 0: 
				*totalVal = -1;
				break;
				
		default: 
				 printf("Invalid option\n");
				 break;
	}
}

/* Alligns the passed values to totalNum to the right
Precondition: All data passed to the parameter are float and are the values related to the pizza price
@param totalNum acts as a placeholder, such that it can be replaced by any variable value 
@return does not return anything
*/
void
printTotal (float total_val)
{
	int nCtr = 0;
	int i;
	int chartotal = 0;
	float temp = total_val; //Stored in temp so that original value does not change
	
	while (temp > 0.99) {
		
			temp = temp / 10;
			nCtr += 1;
	}
	
	chartotal = 5 - nCtr; //This assumes that the total characters allowed is 5
	
	for (i = 0; i < chartotal; i++)
			printf(" ");
	
	printf("%.2f\n", total_val);
}

/*
Calculates and displays the change and dispenses the number of notes at a specific value
Precondition: All inputs are integers
@param Amount - is the resulting change
@param insertVal - is the total inserted bill value
@param totalVal - is the total value
@return does not return anything
*/
void
numChange (float *Amount, float insertVal, float totalVal)
{
	int Bill_1000, Bill_500, Bill_100, Bill_50, Bill_20, Bill_10, Bill_5, Bill_1, Bill_025, Bill_010, Bill_005, Bill_001;
	
	if (*Amount > 1000) {
			Bill_1000 = *Amount / 1000;
			*Amount = *Amount - (Bill_1000 * 1000);
			printf("Dispensing change: %d   -   PhP 1000.00\n", Bill_1000);
	}
	
	if (*Amount > 500) {
			Bill_500 = *Amount / 500;
			*Amount = *Amount - (Bill_500 * 500);
			printf("Dispensing change: %d   -   PhP  500.00\n", Bill_500);
	}
	
	if (*Amount > 100) {
			Bill_100 = *Amount / 100;
			*Amount = *Amount - (Bill_100 * 100);
			printf("Dispensing change: %d   -   PhP  100.00\n", Bill_100);
	}
	
	if (*Amount > 50) {
			Bill_50 = *Amount / 50;
			*Amount = *Amount - (Bill_50 * 50);
			printf("Dispensing change: %d   -   PhP   50.00\n", Bill_50);
	}
	
	if (*Amount > 20) {
			Bill_20 = *Amount / 20;
			*Amount = *Amount - (Bill_20 * 20);
			printf("Dispensing change: %d   -   PhP   20.00\n", Bill_20);
	}
	
	if (*Amount > 10) {
			Bill_10 = *Amount / 10;
			*Amount = *Amount - (Bill_10 * 10);
			printf("Dispensing change: %d   -   PhP   10.00\n", Bill_10);
	} if (*Amount > 5) {
			Bill_5 = *Amount / 5;
			*Amount = *Amount - (Bill_5 * 5);
			printf("Dispensing change: %d   -   PhP    5.00\n", Bill_5);
	}
	
	if (*Amount > 1) {
			Bill_1 = *Amount / 1;
			*Amount = *Amount - (Bill_1 * 1);
			printf("Dispensing change: %d   -   PhP    1.00\n", Bill_1);
	}
	
	if (*Amount > 0.25) {
			Bill_025 = *Amount / 0.25;
			*Amount = *Amount - (Bill_025 * 0.25);
			printf("Dispensing change: %d   -   PhP    0.25\n", Bill_025);
	}
	
	if (*Amount > 0.10) {
			Bill_010 = *Amount / 0.10;
			*Amount = *Amount - (Bill_010 * 0.10);
			printf("Dispensing change: %d   -   PhP    0.10\n", Bill_010);
	}
	
	if (*Amount > 0.05) {
			Bill_005 = *Amount / 0.05;
			*Amount = *Amount - (Bill_005 * 0.05);
			printf("Dispensing change: %d   -   PhP    0.05\n", Bill_005);
	}

	if (*Amount > 0.01) {
			Bill_001 = *Amount / 0.01;
			printf("Dispensing change: %d   -   PhP    0.01\n", Bill_001);
	}
	
	if (insertVal == totalVal)
			printf("No change\n\n");
									
	else if (insertVal > totalVal) {
			printf("--------------------------------------\n");
			printf("Total Change:                 ");
			printTotal (insertVal - totalVal);
			printf("\n");
	}
}

/*
Displays the receipt of the pizza corresponding to the details that have previously been saved/inputted
@param crusts - is the parameter that getCrust() passes its value to
@param sizes - is the parameter that getSize() passes its value to
@param hamcount - is the parameter that the parameter hCtr from getToppings() will be passed to
@param pineapplecount - is the parameter that the parameter pCtr from getToppings() will be passed to
@param sausagecount - is the parameter that the parameter sCtr from getToppings() will be passed to
@param olvecount - is the parameter that the parameter cCtr from getToppings() will be passed to
@param cheesecount - is the parameter that the parameter oCtr from getToppings() will be passed to
@param htotal - stores the total value of ham
@param ptotal - stores the total value of pineapple
@param stotal - stores the total value of sausage
@param ototal - stores the total value of olives
@param mozarellacount - is the parameter that the parameter cmCtr from getToppings() will be passed to
@param gorgonzolacount - is the parameter that the parameter cgCtr from getToppings() will be passed to
@param fontinacount - is the parameter that the parameter cfCtr from getToppings() will be passed to
@param parmesancount - is the parameter that the parameter cpCtr from getToppings() will be passed to
@param mozzarella_total - stores the total value of mozzarella
@param gorgonzola_total - stores the total value of gorgonzola
@param fontina_total - stores the total value of fontina
@param parmesan_total - stores the total value of parmesan
@param stuff_val - is the parameter that the parameter stuffVal from crustStuffing() will be passed to
@param stuff_type - is the parameter that the parameter stuffType from crustStuffing() will be passed to
@return does not return anything
*/
void
pizzaReceipt (float totalVal, int crusts, float sizes, int hamcount, int pineapplecount, int sausagecount, int olivecount, 
				int cheesecount, float htotal, float ptotal, float stotal, float ototal, 
				int mozarellacount, int gorgonzolacount, int fontinacount, int parmesancount, float mozzarella_total,
				float gorgonzola_total, float fontina_total, float parmesan_total, float stuff_val, int stuff_type)
{
	float multiplier = 0; // Multiplier for the toppings depending on the size
	
	printf("             Order Details:\n");
	printf("--------------------------------------\n");
	
	if (crusts == 1)		
			printf("Thin Crust ");
	else
			printf("Thick Crust");
		
	if (sizes == Small) {
				multiplier = 1;
				printf("(S)      	      ");
	}
	
	else if (sizes == Medium) {
				multiplier = 1.5;
				printf("(M)                ");
	}
	
	else if (sizes == Large) {
				multiplier = 1.75;
				printf("(L)                ");
	}
	printTotal(sizes);
	
	if (hamcount > 0) {
			htotal = hamcount * ham * multiplier;
			printf("Ham(%d)                        ", hamcount);
			printTotal(htotal);
	}
						
	if (pineapplecount > 0) {
			ptotal = pineapplecount * pineapple * multiplier;
			printf("Pineapple(%d)                  ", pineapplecount);
			printTotal(ptotal);
	}
						
	if (sausagecount > 0) {
			stotal = sausagecount * sausage * multiplier;
			printf("Sausage(%d)                    ", sausagecount);
			printTotal(stotal);
	}
	
	if (cheesecount > 0) {
			mozzarella_total = mozarellacount * cheese * multiplier;
			gorgonzola_total = gorgonzolacount * cheese * multiplier;
			fontina_total = fontinacount * cheese * multiplier;
			parmesan_total = parmesancount * cheese * multiplier;
		
		if (mozarellacount > 0) {
				printf("Mozzarella(%d)                 ", mozarellacount);
				printTotal(mozzarella_total);
		}
		
		if (gorgonzolacount > 0) {
				printf("Gorgonzola(%d)        	      ", gorgonzolacount);
				printTotal(gorgonzola_total);
		}
		
		if (fontinacount > 0) {
				printf("Fontina(%d)           	      ", fontinacount);
				printTotal(fontina_total);
		}
		
		if (parmesancount > 0) {
				printf("Parmesan(%d)                   ", parmesancount);
				printTotal(parmesan_total);
		}
	}
	
	if (olivecount > 0) {
			ototal = olivecount * olives * multiplier;
			printf("Olives(%d)                     ", olivecount);
			printTotal(ototal);
	}
	
	if (stuff_type == 1) {
			stuff_val = stfCheese;
			printf("Cheese                        ");
	}
		
	if (stuff_type == 2) {
			stuff_val = stfSpam;
			printf("Spam                          ");
	}
	
	if (stuff_type == 3) {
			stuff_val = bothstuff;
			printf("Spam & Cheese Stuffing        ");
		
	}
		
	if (stuff_type == 0) {
			stuff_val = 0;
			printf("Stuffing                     ");
	}
	printTotal (stuff_val);
	
	printf("Total                         ");
	printTotal (totalVal);
}

/* Computes the total time required to finish the pizza
@param topCtr - is the parameter that the parameter nCtr from getToppings() will be passed to
@param sTime - is the parameter that the parameter stuffTime from crustStuffing() will be passed to
@return does not return anything
*/
void
pizzaTimer (int topCtr, int sTime)
{
	int timeToppings, timeStuffing, totalTime, nMins, nSecs, i, j, tempseconds;
	
	// Formula to get total time
	timeToppings = topping * topCtr;
	timeStuffing = stuffing * sTime;
	totalTime = timeToppings + timeStuffing + 180;
	
	// Converts seconds to mins when seconds is over 59, meaning 60
	if (totalTime > 59) {
			nMins = totalTime / 60;
			nSecs = totalTime - (nMins * 60);
	}
	tempseconds = nSecs;
	printf("Starting Countdown\n");
	for (i = nMins; i >= 0 ; i--) {
			for (j = tempseconds; j >= 0; j--) {
				printf("Time is %02d:%02d\n", i, j);
			}
			tempseconds = 59;
	}
	printf("Time to finish pizza: %02d:%02d\n", nMins, nSecs);
	printf("Pizza is done!\n");
}

// Implements all the functions created thus far
int
main () {
	int loopTrue = 0;
	int mCrust;
	float mSize;
	float asr, insertVal = 0;
	float totalHam = 0, totalPineapple = 0, totalSausage = 0, totalOlives = 0, totalVal = 0, fChange = 0;
	int hamCtr = 0, pineappleCtr = 0, sausageCtr = 0, cheeseCtr = 0, olivesCtr = 0, toppCtr = 0;
	int cmCtr = 0, cgCtr = 0, cfCtr = 0, cpCtr = 0;
	float mozzarella_total = 0, gorgonzola_total = 0, fontina_total = 0, parmesan_total = 0;
	int stuffType, stuffTimee;
	float stuffval;
	int successCtr = 0;
	int *success = &successCtr;
	
	do {
		displayCrust (); // Displays a table with options for crust
        mCrust = getCrust ();
        // When loopTrue = 1, this loop is exited
        do {
        	// Variables re-intialized to 0 so that it does not accumulate over to the next iteration
	        hamCtr = 0;
			pineappleCtr = 0;
			sausageCtr = 0;
			cheeseCtr = 0;
			olivesCtr = 0;
			toppCtr = 0;
			cmCtr = 0;
			cgCtr = 0;
			cfCtr = 0;
			cpCtr = 0;
			asr = 0;
			insertVal = 0;
			fChange = 0;
			
	        if (mCrust != 80808) { // Checks if mCrust is 80808, if not then it does the code and proceeds
				mSize = getSize();				
				
				// Checks if user entered x/X during the getting of size step
				if (mSize < 0) {
					loopTrue = 1;
					system("cls");
				}
				
				else if (mSize >= 0) {
					printf("Value of chosen size is: %.2f\n", mSize);
					getToppings (&asr, &hamCtr, &pineappleCtr, &sausageCtr, &cheeseCtr, &olivesCtr, &toppCtr, &cmCtr, &cgCtr, &cfCtr, &cpCtr);
					
					// Checks if user entered x/X during the get toppings step
					if (asr < 0) {
						loopTrue = 1;
						system("cls");
					}
							
					else if (asr > 0) {
						// Gets the value of the total toppings multiplied depending on the size of the pizza chosen
						if (mSize == Medium)
								asr = asr * 1.5;
						else if (mSize == Large)
								asr = asr * 1.75;
						else if (mSize == Small)
								asr = asr * 1;
							
						printf("Price of topping(s): %.2f\n\n", asr);
						
						if (mCrust == 2) {
							crustStuffing (&stuffval, &stuffTimee, &stuffType);
							
							// Checks if user entered x/X during the crust stuffing step
							if (stuffval < 0) {
								loopTrue = 1;
								system("cls");
							}
							if (stuffval >= 0) {
								totalVal = stuffval + asr + mSize;
								printf("Price of stuffing(s): %.2f\n\n", stuffval);
							}
						}
						
						if (stuffval >= 0) {
							if (mCrust == 1) {
								totalVal = asr + mSize;
								stuffType = 0; 
								stuffTimee = 0; // This is the time correlated to the stuffing
							}
							
							displayBills (); // Displays a table with options for sizes and their corresponding prices
							printf("Total to pay: %.2f\n", totalVal);
							do
							{
								billsPayment(&insertVal);
								printf("\n");
								
								// Checks if user entered x/X during the get toppings step
								if (insertVal < 0) {
									loopTrue = 1;
									system("cls");
								}
								else if (insertVal >= totalVal) {
										fChange = insertVal - totalVal;
										
										pizzaReceipt (totalVal, mCrust, mSize, hamCtr, pineappleCtr, sausageCtr, olivesCtr, cheeseCtr,
													totalHam, totalPineapple, totalSausage, totalOlives, cmCtr, cgCtr, cfCtr, cpCtr,
													mozzarella_total, gorgonzola_total, fontina_total, parmesan_total, stuffTimee, stuffType);
										
										numChange(&fChange, insertVal, totalVal);
									
										pizzaTimer (toppCtr, stuffTimee);
										
										successCtr++;
										printf("Number of Successful orders so far: %d\n\n", successCtr);
								   
										loopTrue = 1;
								}
							} while (insertVal < totalVal && insertVal >= 0);
						}
						
					}
				}
			}
			else if (mCrust == 80808) {
				printf("Machine under maintenance.");
				loopTrue = 1;
			}
				
		} while (loopTrue == 0);
		
	} while (mCrust != 80808); // Since there's no input yet it will not exit the loop yet
	
	return 0;
}
