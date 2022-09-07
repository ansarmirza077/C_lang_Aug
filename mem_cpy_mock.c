//WAP to show mem copy in strings
#include<stdio.h>
#include <string.h>



int main()
{
    int result;
    char original[50];
    char newcopy[50];
    strcpy(original, "applying mem copy in strings");
    result = memcpy(newcopy, original, 24);
    newcopy[24] = 0;  
    printf("%s\n", newcopy);
    return 0;
}





// int main()
// {
//                                                     /* Create a place to store our results */
//     int result;

//                                                 /* Create two arrays to hold our data */
//     char original[50];
//     char newcopy[50];

//     /* Copy a string into the original array */
//     strcpy(original, "applying mem copy in strings");

//     /* Copy the first 24 characters of the original
//      array into the newcopy array */
//     result = memcpy(newcopy, original, 24);

    
//     newcopy[24] = 0;  

//                                          /* Set the character at position 24 to a null (char 0)
//                                                                 in the newcopy array to ensure the string is terminated
//                                                                     (This is important since memcpy does not initialize memory
//                                                                                         and printf expects a null at the end of a string) */

//                                                                                  /* Display the contents of the new copy */
//     printf("%s\n", newcopy);

//     return 0;
// }