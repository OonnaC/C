#include <stdio.h>
#include <stdlib.h>

#define X 25
#define Y 20
int lol()
{
    int x, y, res1, res2;
    y = 30;
    x = Y;

    {
        int x = y;
        int y = 3;
        {
            int x = 2, y;
            y = x * x;
        }
        res1 = x * y;
    }
    {
        int y = x;
        int x = 3;
        {
            int x = 2;
            int y = 3;
            {
                int z = y;
                int y = x;
                {
                    res2 = (z + y + x);
                }
            }
        }
    }
    printf("%d %d %d %d\n", x,y,res1,res2);
    return 0;
}
