#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    char size =0;
    float max_val,min_val,avg_val =0;
     max_val=min_val =numberset[size];

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
    s.average = avg_val;
    s.min = min_val;
    s.max = max_val;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
