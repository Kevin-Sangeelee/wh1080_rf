
#define USE_BMP085
#define ALTITUDE_M	210.0f

unsigned long getTimer();
void scheduler_realtime();
void scheduler_standard();
void calculate_values(unsigned char *buf);
