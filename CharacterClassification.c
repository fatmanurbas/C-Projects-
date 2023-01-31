/*
  Question: Write a program asks the user to enter a string. It uses the character classification functions to count the number of characters in several categories and displays the results. (Digits, Lowercase Letters, Punctuation Characters, White Space Characters, Uppercase Letters, Total Characters and so on.) 
  
  Fatmanur Baş 3.12.2022
*/
#include <stdio.h>  
#include <string.h>  
#include <ctype.h>


int main()  
{  
    char string[100];  
    int charCount = 0;  
    int i=0;
    char uppercase[100];
    char lowercase[100];
    char digit[100];
    char punctation[100];
    int j=0;
    int k=0;
    int l=0;
	int m=0; 
	int alpha=0;
	int space=0;
    
    for(i = 0;  i < 100; i++) { //cleaning the arrays
    string[i]=0;
    uppercase[i]=0;
    lowercase[i]=0;
    digit[i]=0;
    punctation[i]=0;
	}
	
    printf("Enter the string:\n");
    fgets(string, sizeof(string), stdin);
 
 
    for(i = 0;  i < 100; i++) { //how many characters does the string have?
       if(string[i] != 0 && string[i+1]!=0)  
           charCount++;  
} 


	for(i = 0;  i < charCount; i++) { 
	
		if (isupper(string[i])){ //finding uppercase letters and adding them into a list
	        uppercase[j]= string[i];
    	    j++;
    	    alpha=alpha+1; //counting alphabetic letters
   		}
    	if (islower(string[i])){ //finding lowercase letters and adding them into a list
    		lowercase[k] = string[i];
    		k++;
    		alpha=alpha+1;
		}
		if (isdigit(string[i])){ //finding digits and adding them into a list
    		digit[l] = string[i];
    		l++;
		}    
		if (ispunct(string[i])){ //finding punctation characters and adding them into a list
    		punctation[m] = string[i];
    		m++;
		}
		if (isspace(string[i])){ //counting white spaces 
    		space++;
		}
}

	printf("Total Character Count: %d\n",charCount);
	printf("Total Alphabetic Letter Count: %d\n",alpha);
	printf("Total White Space Count: %d\n",space);

	printf("Punctation Characters:\n");
	for(i = 0;  i < charCount; i++) {
		if(punctation[i]!=0)
			printf("%c \n",punctation[i]);
}

	printf("Uppercase Characters:\n");
	for(i = 0;  i < charCount; i++) {
		if(uppercase[i]!=0)
			printf("%c ",uppercase[i]);
}
printf("\n");
	printf("Lowercase Characters:\n");
	for(i = 0;  i < charCount; i++) {
		if(lowercase[i]!=0)
			printf("%c ",lowercase[i]);
}
printf("\n");

	printf("Digits:\n");
	for(i = 0;  i < charCount; i++) {
		if(digit[i]!=0)
			printf("%c ",digit[i]);
}


    return 0;  
}
