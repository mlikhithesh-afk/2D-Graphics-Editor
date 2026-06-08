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
            canvas[i][j] = '-';
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

void drawRectangle(int x, int y, int width, int height)
{
    int i, j;

    for(i = 0; i < height; i++)
    {
        for(j = 0; j < width; j++)
        {
            canvas[y + i][x + j] = '*';
        }
    }
}

void drawLine(int y, int x1, int x2)
{
    int i;

    for(i = x1; i <= x2; i++)
    {
        canvas[y][i] = '#';
    }
}

void drawTriangle(int x, int y, int height)
{
    int i, j;

    for(i = 0; i < height; i++)
    {
        for(j = 0; j <= i; j++)
        {
            canvas[y + i][x + j] = '^';
        }
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
        printf("3. Draw Triangle\n");
        printf("4. Display Canvas\n");
        printf("5. Exit\n");

        printf("Entoice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                drawRectangle(5, 5, 10, 4);
                printf("Rectangle Drawn!\n");
                break;

            case 2:
                drawLine(2, 5, 20);
                printf("Line Drawn!\n");
                break;

            case 3:
                drawTriangle(25, 5, 5);
                printf("Triangle Drawn!\n");
                break;

            case 4:
                displayCanvas();
                break;

            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
