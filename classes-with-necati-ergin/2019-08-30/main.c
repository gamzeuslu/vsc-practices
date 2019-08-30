#include <stdio.h>

int getabs(int val);
int getmax2(int val1, int val2);

//kendisine gonderilen tam sayinin mutlak degerini donduren bir fonksiyon yazin.
int getabs(int val)
{
    return val > 0 ? val : -val;
}

//kendisine gonderilen iki tam sayidan buyuk olaninin degerini donduren bir fonksiyon yazin.
int getmax2(int val1, int val2)
{
    return val1 > val2 ? val1 : val2;
}

int main(void)
{
printf("%d\n", getabs(-19));
printf("%d\n", getmax2(19, 18));

return 0;
}


