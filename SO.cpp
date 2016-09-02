#include<iostream>
using namespace std;

void drawcone(int height);
void drawHorizontalLine(int numXs);
void draw2VerticalLines(int numSpaces, int numRows);
void drawOneRow(int numSpaces);
void getDimensions(int& width, int& height);
void drawbox(int width, int height);

int main() {

    int width;
    int height;

    getDimensions(width, height);
    drawcone(width);
    drawHorizontalLine(width);
    draw2VerticalLines(width - 2, height - 2);
    drawHorizontalLine(width);

    return 0;
}

void drawbox(int width, int height) {

    drawHorizontalLine(width);
    draw2VerticalLines(width - 2, height - 2);
    drawHorizontalLine(width);
}

void drawcone(int width) {

    for (int i=0; i<(width/2 + width%2); i++) {

        for (int j=width/2-i; j>0; j--) {
            cout << " ";
        }

        drawOneRow(i*2-1);
    }
}

void drawHorizontalLine(int numXs)
{
    int count;

    for (count = 0; count < numXs; count++) {
        cout << "X";
    }
    cout << endl;
}


void draw2VerticalLines(int numSpaces, int numRows)
{
    int rowCount;

    for (rowCount = 0; rowCount < numRows; rowCount++) {
        drawOneRow(numSpaces);
    }
}

void drawOneRow(int numSpaces)
{
    int spaceCount;

    cout << "X";
    if (numSpaces > 0) {
        for (spaceCount = 0; spaceCount < numSpaces; spaceCount++) {
            cout << " ";
        }
        cout << "X";
    }
    cout << endl;
}

void getDimensions(int& width, int& height) {

    cout << "Enter the width of the house" << endl;
    cin >> width;

    cout << "Enter the height of the house" << endl;
    cin >> height;

}