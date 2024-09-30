#include <stdio.h>
#include <stdbool.h>
bool sleep_in(bool week_day, bool vacation) {
    return !week_day || vacation;
}
int main() {
printf("sleep_in(false, false) → %s\n", sleep_in(false, false) ? "true" : "false");
printf("sleep_in(true, false) → %s\n", sleep_in(true, false) ? "true" : "false");
printf("sleep_in(false, true) → %s\n", sleep_in(false, true) ? "true" : "false");
}
