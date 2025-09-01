#include <stdio.h>
int main() {
    int days, weeks, rem;
    printf("Enter days: ");
    scanf("%d", &days);
    weeks = days / 7;
    rem = days % 7;
    printf("%d days = %d week(s) and %d day(s)\n", days, weeks, rem);
    return 0;
}
