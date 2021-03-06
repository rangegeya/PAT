/**
 * 1001. A+B Format (20)
 * 
 * Calculate a + b and output the sum in standard format -- that is, the digits 
 * must be separated into groups of three by commas (unless there are less than 
 * four digits).
 * 
 * Input
 * 
 * Each input file contains one test case. Each case contains a pair of integers
 * a and b where -1000000 <= a, b <= 1000000. The numbers are separated by a 
 * space.
 * 
 * Output
 * 
 * For each test case, you should output the sum of a and b in one line. The sum
 * must be written in the standard format.
 * 
 * Sample Input
 * -1000000 9
 * Sample Output
 * -999,991
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, pos;
    char num[11];
    
    scanf("%d%d", &a, &b);
    sprintf(num, "%d", a + b);
    
    for(pos = strlen(num) - 3; pos > 0 && num[pos - 1] != '-'; pos -= 3)
    {
        memmove(num + pos + 1, num + pos, strlen(num) - pos + 1);
        num[pos] = ',';
    }
    
    puts(num);
    return 0;
}
