#include <stdio.h>

#define ROWS 20
#define COLS 40

char canvas[ROWS][COLS];

void initCanvas()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            canvas[i][j] = '_';
        }
    }
}
void drawRectangle(int x, int y, int width, int height)
{
    int i, j;

    for(i = y; i < y + height; i++)
    {
        for(j = x; j < x + width; j++)
        {
            canvas[i][j] = '*';
        }
    }
}
void displayCanvas()
{
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
        {
            printf("%c ", canvas[i][j]);
        }
        printf("\n");
    }
}
void drawLine(int x1, int x2, int y)
{
    int i;

    for(i = x1; i <= x2; i++)
    {
        canvas[y][i] = '*';
    }
}
int main()
{
    int choice;

    initCanvas();

    while(1)
    {
        printf("\n===== 2D Graphics Editor =====\n");
        printf("1. Draw Rectangle\n");
        printf("2. Draw Line\n");
        printf("3. Display Canvas\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

   switch(choice)
{
    case 1:
        drawRectangle(5, 5, 10, 4);
        printf("Rectangle Drawn!\n");
        break;

    case 2:
        drawLine(2, 20, 15);
        printf("Line Drawn!\n");
        break;

    case 3:
        displayCanvas();
        break;

    case 4:
        return 0;

    default:
        printf("Invalid Choice!\n");
}
