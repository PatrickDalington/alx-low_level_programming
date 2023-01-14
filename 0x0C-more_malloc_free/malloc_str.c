#include <stdlib.h>
#include <stdio.h>

int main(){

    int x, numberOfString;
    char *str;

    printf("Enter number of string to store");
    scanf("%d", &numberOfString);

    str = (char *) malloc(numberOfString* sizeof(char));

    printf("Enter names:\n");
    for ( x = 0; x < numberOfString; x++)
    {
        scanf("%c", (str + x));
    }

    printf("The following are neames you entered\n");
    for(x = 0; x < numberOfString; x++){
       
        printf("%c", *(str + x));
    }

    free(str);

    return (0);
    

}