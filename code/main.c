#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void setColor(int textColor, int bgColor) {
    // Get the console handle
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    // Set the text and background color
    SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}

int main()
{
int a;
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
printf("Advanced Statistical Functions \n");
printf("\n");
printf("1. Mean\n");
printf("2. Median\n");
printf("3. Mode\n");
printf("4. Standard Deviation\n");
printf("5. Skewness\n");
printf("6. Kurtosis\n");
printf("7. Data Range\n");
break;

case 3:
system("cls");
printf("Financial Functions \n");
printf("\n");
printf("1. Compound Interest\n");
printf("2. Median\n");
printf("3. Future Value\n");
printf("4. Present Value\n");
printf("5. Interest Value\n");
printf("6. ROI\n");
printf("7. Debt To Equity\n");
printf("\n");
break;

case 4:
system("cls");
printf("Geometry Functions \n");
printf("\n");
printf("1. Area of Circle\n");
printf("2. Circumference of Circle\n");
printf("3. Area Of Triangle\n");
printf("4. Pythagoean Theorem\n");
printf("5. Area Of Square\n");
printf("6. Volume Of Spehre\n");
printf("7. Surface Area Of Sphere\n");
printf("\n");

case 5:
system("cls");
printf("Matrix Functions \n");
printf("\n");
printf("1. Matrix Addition\n");
printf("2. Matrix Multiplication\n");
printf("3. Determinant\n");
printf("4. Transpose\n");
printf("\n");

case 6:
system("cls");
printf("Conversion Functions \n");
printf("\n");
printf("1. Degree To Radian\n");
printf("2. Radian To Degree\n");
printf("3. Celsius to Fahrenheit\n");
printf("4. Fahrenheit to Celsius\n");
printf("\n");


case 7:
system("cls");

printf("Number Theory Functions \n");
printf("\n");
printf("1. Greatest Common Divisor\n");
printf("2. Lowest Common Multiple\n");
printf("3. Is prime\n");
printf("4. Fibonacci Numbers\n");
printf("5. Prime Factorization\n");
printf("6. Count Primes\n");

printf("\n");

case 8:
system("cls");
printf("Probability Functions\n\n1. Binomial Probability\n2. Normal Probability\n3. Probability\n\n");

case 9:
system("cls");
printf("Random and Set Theory Functions \n");
printf("\n");

case 10:
system("cls");
printf("Complex Number Functions \n");
printf("\n");
printf("1. Magnitude \n");
printf("2. Conjugate \n");
printf("\n");


case 11:
system("cls");
printf("Physics Functions \n");
printf("\n");
printf("1. Kinetic Energy\n");
printf("2. Potential Energy\n");
printf("3. Force\n");
printf("\n");


case 12:
system("cls");
printf("Miscellanous Functions \n");
printf("\n");
printf("1. String Length\n");
printf("2. Reverse Length\n");
printf("3. Decimal To Binary\n");
printf("4. Binary To Decimal\n");
printf("\n");



default:
break;
}

}
