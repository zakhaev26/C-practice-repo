#include <stdio.h>
#include<string.h>
int main()
{

    // test case 1:
    // should return:west.
    //  arr=['l','r','r','r','r'];
    char arr[] = {'l','l','r','\0'};

    int n=0;
  for(int i=0;arr[i]!='\0';i++){
    
    n++;
  
  };
  
    int lcount = 0, rcount = 0;
    for (int i = 0; i < n; i++)
    {
        if ('l' == arr[i])
        {
            lcount++;
        }
        else
        {
            rcount++;
        }
    }
    int buffer = 0;
    // int multiplier = 1;
    if (lcount - rcount == 0)
    {
        printf("north");
    }
    else
    {
        if (lcount > rcount)
        {
            buffer = lcount - rcount;
            if (buffer == 4)
            {
                printf("north");
            }
            else
            {
                // multiplier = buffer / 4;
                buffer = buffer%4;
                if (buffer == 1)
                {
                    printf("west");
                }
                else if (buffer == 2)
                {
                    printf("south");
                }
                else
                {
                    printf("east");
                }
            }

        }
        else
        {
            buffer = rcount - lcount;
            if (buffer == 4)
            {
                printf("north");
            }
            else
            {
                // multiplier = buffer / 4;
                buffer = buffer%4;
                if (buffer == 1)
                {
                    printf("east");
                }
                else if (buffer == 2)
                {
                    printf("south");
                }
                else
                {
                    printf("west");
                }
            }
        }
    }

    // printf("%d , %d",lcount,rcount);

    return 0;
}
