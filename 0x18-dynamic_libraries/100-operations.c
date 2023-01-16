#include <stdlib.h>

int random_number_in_range(int min, int max) 
{
    return (rand() % (max - min + 1) + min);
}
