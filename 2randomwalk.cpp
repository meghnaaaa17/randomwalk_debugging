#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;


int main()
{
    srand(time(NULL));   
    int x = 0, y = 0;      
    int tx = 10, ty = 10;  

    for(int t = 0; t < 10000; t++)
    {
        int r = rand() % 4; 

        int x2 = x, y2 = y;

        if (r == 0) y2 = y + 1;   
        else if (r == 1) y2 = y - 1;
        else if (r == 2) x2 = x - 1;   
        else x2 = x + 1;

            int d0 = abs(x - tx) + abs(y - ty);        //d0 is distance before moving
            int d1 = abs(x2 - tx) + abs(y2 - ty);     //d1 is distance after moving

            if (d1 < d0)   //this is to check, is the candidate 
                {               //position closer to the target than where I am now?

                x = x2;     //x2 and y2 are basically the candidate position 
                y = y2;     //and x and y are the actual position
                }

                cout << x << " " << y << endl;

                }


                }