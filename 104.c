#include <stdio.h>
#include <conio.h>
typedef enum 
{
    RED,
    GREEN, 
    BLUE
} Color;

const char* getColorHex(Color color) {
    switch(color) {
        case RED:     return "#FF0000";
        case GREEN:   return "#00FF00";
        case BLUE:    return "#0000FF";
        default:      return "#000000";
    }
}

void printColorInfo(Color color) {
    const char* colorNames[] = {
        "Red", "Green", "Blue"
    };

    printf("Color: %s\n", colorNames[color]);
    printf("Hex Code: %s\n", getColorHex(color));
}

int main()
{
    Color selectedColor = BLUE;

    switch(selectedColor)
    {
        case RED:
            printColorInfo(RED);
            break;
        case GREEN:
            printColorInfo(GREEN);
            break;
        case BLUE:
            printColorInfo(BLUE);
            break;
        default:
            printf("Unknown color selected.\n");
    }
    getch();
    return 0;
}