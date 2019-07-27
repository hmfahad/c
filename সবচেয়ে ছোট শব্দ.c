

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int i=0, j=0,  mini=INT_MAX, loc=0, wordLength=0;
    char data[1000], small[1000];

    scanf("%[^\n]c", &data);



    while(data[i]!='\0')
    {

        while(data[i]!=' '&&data[i]!='\0')

        {
            wordLength++;

            i++;
        }

        if(wordLength==mini)

        {
            int i_c=i;
            int loc_c=loc;

            while(data[i_c-wordLength]==data[loc_c])
            {
                i_c++;
                loc_c++;

            }

            if(data[i_c-wordLength]<data[loc_c])
            {
                mini=wordLength;
                loc=i-mini;
            }


        }
        else if(wordLength<mini)
        {
            mini=wordLength;
            loc=i-mini;
        }
        wordLength=0;

        if(data[i]!='\0')
        {
            i++;
        }



    }


    for(i=loc; data[i]!=' '&&data[i]!='\0'; i++)
    {
        printf("%c", data[i]);




    }



    return 0;
}
 

