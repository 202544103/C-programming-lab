#include <stdio.h>

int main()
{
    float latitude;
    float longtitude;
    char info[80];
    int started = 0;

    puts("[");

    while (scanf("%f,%f,%79[^\r\n]", &latitude, &longtitude, info) == 3) {
        if (started)
            printf(",\n");
        else
            started = 1;

            printf("{\"latitude\": %f, \"longtitude\": %f, \"info\": \"%s\"}",
                    latitude, longtitude, info);
    }
    puts("\n]");
    return 0;




}   