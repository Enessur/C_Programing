#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define FIRST 10  // first celcius
#define LAST  60  // last celcius
#define INC   3   //increment value

double calcFahrenheit(double celcius)
{
	return 1.8*celcius+32.0;
}
int main(int argc, char *argv[]) {

    int celcius=FIRST; // first celcius degree
    scanf("%d",&celcius);
    for (;celcius<LAST;celcius+=INC){
    printf("%6.2f Celcius is equal to %6.2f Fahrenheit\n",celcius,calcFahrenheit(celcius));
    return 0;}
}
