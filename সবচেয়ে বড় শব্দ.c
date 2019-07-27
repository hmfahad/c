#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int i=0, j=0,  max=INT_MIN, loc=0, wordLength=0;
    char data[1000];

    scanf("%[^\n]c", &data);



    while(data[i]!='\0')
    {

        while(data[i]!=' '&&data[i]!='\0')

        {
            wordLength++;

            i++;
        }

        if(wordLength==max)

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
                max=wordLength;
                loc=i-max;
            }


        }
        else if(wordLength>max)
        {
            max=wordLength;
            loc=i-max;
        }
        wordLength=0;

        while(data[i]==' '&&data[i]!='\0')
        {
            i++;
        }



    }


    for(i=loc; data[i]!=' '&&data[i]!='\0'; i++)
    {
        printf("%c", data[i]);

        if(data[i+1]==' '||data[i+1]=='\0')
        {
            printf("\n");
        }


    }



    return 0;
}
