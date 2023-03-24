/*c program to find the word size*/
#include<stdio.h>

int main()
{
    char var=~0;		//11111111	
    int counter=0;		//      <<1
						//---------------
    while (var!=0)		//1111 1110
    {
        counter++;
        var<<=1;
    }
    
    printf("word size is %d \n",counter);

    return 0;
}