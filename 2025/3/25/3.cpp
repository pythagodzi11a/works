#include <stdio.h> 
 int main(){
    char temp;
    float result;
    int wordCount = 0,characterCount = 0,fakeArray[1];
    
    while ( (temp = getchar()) != '\n' )
    {
        if ( temp == ' ')
        {
            wordCount++;
        }
        else{
            characterCount++;
        }
    }

    result = (float)characterCount/(wordCount+1);

    printf("%.2f",result);
   
 }
