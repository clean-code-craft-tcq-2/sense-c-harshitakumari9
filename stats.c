#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    char size =0;
    int array_size;
    float max_val,min_val,avg_val =0;
     max_val=min_val =numberset[size];
      array_size =setlength;

    while(setlength--)
    {
        if(numberset[size+1] <min_val)
        {
            min_val =numberset[size+1];
        }
         if(numberset[size+1] >max_val)
        {
            max_val =numberset[size+1];
        }
        avg_val +=numberset[size];
    }
    s.average = avg_val/array_size;
    s.min = min_val;
    s.max = max_val;
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
