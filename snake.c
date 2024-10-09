#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <windows.h>

#define WIDTH 40;
#define HEIGHT 20;

int snakeX[100], sankeY[100];

int x = WIDTH / 2 , y = HEIGHT / 2;

int fruitX , fruitY;

void createFood(){
    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
}

void input(){
    if (kbhit()){
        char move = tolower(getch());
        if (move == 'w'){
            printf("You pressed W\n");
        }else if(move == 'a'){
            printf("You pressed A\n");
        }else if(move == 's'){
            printf("You pressed S\n");
        }else if(move == 'd'){
            printf("You pressed D\n");
        }
    }
}

void draw(){
    system("cls");
    for (int i = 0;i < 20;i++){
        for (int j = 0;j < 40;j++){
            if (i == 0 || i == 19){
                printf("#");
            }else if (j == 0 || j == 39){
                printf("#");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}


int main(){

    while (true){
        input();
        draw();
        Sleep(33);
    }

    return 0;
}