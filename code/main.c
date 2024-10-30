#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>

void setColor(int textColor, int bgColor) {
    // Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // Set the text and background color
    SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}

int main()
{
int a;
int c;
char str[100];
int strlength;


system("cls");
printf("   _____       _____      _      _  __ \n");
printf("  / ____|     / ____|    | |    (_)/ _|\n");
printf(" | |   ____  | |     __ _| | ___ _| |_ _   _\n");
printf(" | |  |____| | |    / _` | |/ __| |  _| | | |\n");
printf(" | |____     | |___| (_| | | (__| | | | |_| |\n");
printf("  \\____|      \\____ \\__,_|_|\\___|_|_|  \\__, |\n");
printf("                                        __/ |\n");
printf("                                       |___/\n");
printf("\n");
setColor(15,3);
printf("**** Calculator written in C language having 50+ functions ****\n");
setColor(7,0);
printf("\n");
printf("Choose one option from below\n");

setColor(15, 1);  // Blue text
    printf("\n1. Basic Functions                \n");
    setColor(7, 0);   // Reset to default background
    

    setColor(15, 9);  // Light blue text
    printf("2. Advanced Statistical Functions \n");
    setColor(7, 0);   // Reset to default background

    setColor(15, 1);  // Blue text
    printf("3. Financial Functions            \n");
    setColor(7, 0);   // Reset to default background

    setColor(15, 9);  // Light blue text
    printf("4. Geometry Functions             \n");
    setColor(7, 0);   // Reset to default background

    setColor(15, 1);  // Blue text
    printf("5. Matrix Functions               \n");
    setColor(7, 0);   // Reset to default background

    setColor(15, 9);  // Light blue text
    printf("6. Conversion Functions           \n");
    setColor(7, 0);   // Reset to default background

    setColor(15, 1);  // Blue text
    printf("7. Number Theory Functions        \n");
    setColor(7, 0);   // Reset to default background

    setColor(15, 9);  // Light blue text
    printf("8. Probability Functions          \n");
    setColor(7, 0);   // Reset to default background

    setColor(15, 1);  // Blue text
    printf("9. Random and Set Theory Functions\n");
    setColor(7, 0);   // Reset to default background

    setColor(15, 9);  // Light blue text
    printf("10. Complex number Functions      \n");
    setColor(7, 0);   // Reset to default background

    setColor(15, 1);  // Blue text
    printf("11. Physics Functions             \n");
    setColor(7, 0);   // Reset to default background

    setColor(15, 9);  // Light blue text
    printf("12. Miscellaneous Functions       \n");
    setColor(7, 0);   // Reset to default background
printf("\n");
scanf("%d",&a);
switch(a)
{
case 1:
system("cls");
printf("Basic Functions \n\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. Square Root\n7. Absolute Value\n");
break;


case 2:
    system("cls");
    printf("Advanced Statistical Functions \n\n1. Mean\n2. Median\n3. Mode\n4. Standard Deviation\n5. Skewness\n6. Kurtosis\n7. Data Range\n");
    break;

case 3:
    system("cls");
    printf("Financial Functions \n\n1. Compound Interest\n2. Median\n3. Future Value\n4. Present Value\n5. Interest Value\n6. ROI\n7. Debt To Equity\n\n");
    break;

case 4:
    system("cls");
    printf("Geometry Functions \n\n1. Area of Circle\n2. Circumference of Circle\n3. Area Of Triangle\n4. Pythagorean Theorem\n5. Area Of Square\n6. Volume Of Sphere\n7. Surface Area Of Sphere\n\n");
    break;

case 5:
    system("cls");
    printf("Matrix Functions \n\n1. Matrix Addition\n2. Matrix Multiplication\n3. Determinant\n4. Transpose\n\n");
    break;

case 6:
    system("cls");
    printf("Conversion Functions \n\n1. Degree To Radian\n2. Radian To Degree\n3. Celsius to Fahrenheit\n4. Fahrenheit to Celsius\n\n");
    break;

case 7:
    system("cls");
    printf("Number Theory Functions \n\n1. Greatest Common Divisor\n2. Lowest Common Multiple\n3. Is Prime\n4. Fibonacci Numbers\n5. Prime Factorization\n6. Count Primes\n\n");
    break;


case 8:
system("cls");
printf("Probability Functions\n\n1. Binomial Probability\n2. Normal Probability\n3. Probability\n\n");

case 9:
    system("cls");
    printf("Random and Set Theory Functions \n\n");
    break;

case 10:
    system("cls");
    printf("Complex Number Functions \n\n1. Magnitude\n2. Conjugate\n\n");
    break;

case 11:
    system("cls");
    printf("Physics Functions \n\n1. Kinetic Energy\n2. Potential Energy\n3. Force\n\n");
    break;

case 12:
    system("cls");
    printf("Miscellaneous Functions \n\n1. String Length\n2. Reverse String\n3. Decimal To Binary\n4. Binary To Decimal\n\n");
    scanf("%d", &c);
    switch(c)
    {
	case 1:
        printf("String Length \n\nEnter String\n");
	scanf("%s",&str);
	strlength = strlen(str);
	printf("String length=%d ",strlength);
    }
    

    break;




default:
break;
}

}
