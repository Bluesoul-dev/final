#include<stdio.h>
#include<stdlib.h>
#define MAXIMUM 100
int main(int argc,char* argv[])
{
    int a,b,c;
    int arr[MAXIMUM];
    int temp;
    if(argc == 1)
    {
        printf("The program needs at least one integer parameter to run!\n");
    }
    else
    {
        for(a=1;a<argc;a++,b++)
        {
            if(*argv[a]> '0' && *argv[a]<'9')
            {
                arr[b]=atof(argv[a]);
                
            }
            else
            {
                printf("The parameter has to be an integer format!\n");
                
            }
            for(c=0;c<argc-2;c++)
            {
                if(arr[c]<arr[c+1])
                {
                    temp=arr[c];
                    arr[c] = arr[c+1];
                    arr[c+1] = temp;



                }

            }
        }
    printf("Min parameter is %d\n",arr[argc - 2]);
    }

}