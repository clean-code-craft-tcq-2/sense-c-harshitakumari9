#include "stats.h"
#include "email_alerter.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    char size =0;
    int array_size;
    float max_val,min_val,avg_val =0;
     min_val =numberset[size];
    max_val =numberset[size];
      array_size =setlength;

    while(setlength--)
    {    
        if(size<=2)
        {
        if(numberset[size+1] <min_val )
        {
           min_val =numberset[size+1];
        }
         if(numberset[size+1] >max_val)
        {
            max_val =numberset[size+1];
        }
        }
        avg_val +=numberset[size];
        size++;
    }

    s.average = avg_val/array_size;
    s.min = min_val;
    s.max = max_val;
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
    emailAlerter();
    ledAlerter();
    
}
