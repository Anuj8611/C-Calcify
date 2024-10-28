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
printf("Basic Functions \n");
printf("\n");
printf("1. Add\n");
printf("2. Subtract\n");
printf("3. Multiply\n");
printf("4. Divide\n");
printf("5. Power\n");
printf("6. Square Root\n");
printf("7. Absolute Value\n");
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
break;

case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
default:
break;
}

}
