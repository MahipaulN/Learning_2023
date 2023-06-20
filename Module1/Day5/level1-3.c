#include <stdio.h>

// Structure to represent a time period
typedef struct {
    int hours;
    int minutes;
    int seconds;
} TimePeriod;

TimePeriod cal(TimePeriod t1, TimePeriod t2) {
    TimePeriod d;

    int t1_secs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int t2_secs = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    int d_secs = t1_secs > t2_secs ? t1_secs - t2_secs : t2_secs - t1_secs;

    d.hours = d_secs / 3600;
    d_secs %= 3600;
    d.minutes = d_secs / 60;
    d.seconds = d_secs % 60;

    return d;
}

int main() {
    TimePeriod t1, t2, d;

    printf("First time period: ");
    scanf("%d %d %d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Second time period: ");
    scanf("%d %d %d", &t2.hours, &t2.minutes, &t2.seconds);
    d = cal(t1, t2);
    printf("\n");
    printf("Time difference: %d:%d:%d\n", d.hours, d.minutes, d.seconds);

    return 0;
}
