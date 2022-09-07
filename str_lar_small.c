#include <stdio.h>  
#include <string.h>  
   
int main()  
{     
    char str[] = "applying string here";  
    char words[100][100], small[100], large[100];  
    int i = 0, j = 0, k, length;  
      
    //Split the string into words such that each row of array words represents a word  
    for(k=0; str[k]!='\0'; k++){  
          
        //Here, i represents row and j represents column of two-dimensional array words   
        if(str[k] != ' ' && str[k] != '\0'){  
            words[i][j++] = str[k];  
        }  
        else{  
            words[i][j] = '\0';  
            //Increment row count to store new word  
            i++;  
            //Set column count to 0  
            j = 0;  
        }  
    }  
//Store row count in variable length  
    length = i + 1;  
      
    //Initialize small and large with first word in the string  
    strcpy(small, words[0]);  
    strcpy(large, words[0]);  
      
    //Determine smallest and largest word in the string  
    for(k = 0; k < length; k++){  
          
        //If length of small is greater than any word present in the string  
        //Store value of word into small  
        if(strlen(small) > strlen(words[k])){  
            strcpy(small, words[k]);  
        }  
      
        if(strlen(large) < strlen(words[k]))    /*If length of large is less than any word present in the string  
                                                        Store value of word into large  */
            strcpy(large, words[k]);  
    }  
      
    printf("Smallest word: %s\n", small);  
    printf("Largest word: %s", large);  
      
    return 0;  
}  