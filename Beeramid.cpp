#include <iostream>
#include <math.h> 

using namespace std;

int beeramid(int bonus, double price)
{
    int result = 0;
    int count = 0;
    for (int i = 1; i < bonus; i++) {
        result += pow(i, 2) * price;
        if (result > bonus) {
            return count;
        }
        count++;
    }
    return 0;
}