#include <stdio.h>
#include <string.h>
int main() {
    int rows = 5;
    int cols = 20;
    char strings[5][20]; 
    char string2[5][20];


    for (int i = 0; i < rows; i++) {
        printf("Enter string %d: ", i + 1);
        gets(strings[i]); 
    }
   
  
    for (int i = 0; i < 5; i++){
    	printf("\nString %d: %s \n", i + 1, strings[i]);
    	  strcpy(string2[i], strings[i]);
    	  strrev(string2[i]);
    	  int result = strcmp(string2[i], strings[i]);
    	  if (result == 0){
    	  	printf("It is a palindrome \n");
		  }
		  else{
		  	printf("It is not a palindrome \n");
		  }

	}
	
  
   
    return 0;
}
