#include <stdio.h>

void render();
int won();

char gameboard[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main(void) {

        char mark;
        int x, turn = 1, n;

        do{

                turn = (turn % 2) ? 1 : 2;
                render();

                printf("It's %d's turn. Enter a board number? : ", turn);
                scanf("%d", &x);

                        mark = (turn == 1) ? 'x' : 'o';

                        if (x == 1 && gameboard[1] == '1') {
                                gameboard[1] = mark;
                        } else  if(x == 2 && gameboard[2] == '2'){
                                gameboard[2] = mark;
                        }else if(x == 3 && gameboard[3] == '3'){
                                gameboard[3] = mark;
                        }else if (x == 4 && gameboard[4] == '4'){
                                gameboard[4] = mark;
                        }else if (x == 5 && gameboard[5] == '5'){
                                gameboard[5] = mark;
                        }else if (x == 6 && gameboard[6] =='6'){
                                gameboard[6] = mark;
                        }else if (x == 7 && gameboard[7] == '7'){
                                gameboard[7] = mark;
                        }else if (x == 8 && gameboard[8] == '8'){
                                gameboard[8] = mark;
                        }else if (x == 9 && gameboard[9] == '9'){
                                gameboard[9] = mark;
                        } else {

                        printf("Sorry, that square is taken\n");

                        turn--;
                        }

        n = won();
        turn++;

        } while(n == - 1);

        render();
        if (n == 1){
                printf("player %d win\n", --turn);
        }else printf("Game draw");

return 0;
}

void render() {

        printf("+---+---+---+\n");
        printf(" %c | %c | %c \n", gameboard[1], gameboard[2], gameboard[3]);
        printf("+---+---+---+\n");
        printf(" %c | %c | %c \n", gameboard[4], gameboard[5], gameboard[6]);
        printf("+---+---+---+\n");
        printf(" %c | %c | %c \n", gameboard[7], gameboard[8], gameboard[9]);
        printf("+---+---+---+\n");

}
int won() {

        if (gameboard[1] == gameboard[2] && gameboard[2] == gameboard[3]) {
                return 1;
        }else if(gameboard[4] == gameboard[5] && gameboard[5] == gameboard[6]){
                return 1;
        }else if(gameboard[7] == gameboard[8] && gameboard[8] == gameboard[9]){
                return 1;
        }else if(gameboard[1] == gameboard[4] && gameboard[4] == gameboard[7]){
                return 1;
        }else if (gameboard[2] == gameboard[5] && gameboard[5] == gameboard[8]){
                return 1;
        }else if(gameboard[3] == gameboard[6] && gameboard[6] == gameboard[9]){
                return 1;
        }else if(gameboard[1] == gameboard[5] && gameboard[5] == gameboard[9]){
                return 1;
        }else if(gameboard[3] == gameboard[5] && gameboard[5] == gameboard[7]){
                return 1;
        }else if(gameboard[1] != '1' && gameboard[2] != '2' && gameboard[3] != '3' && gameboard[4] != '4' && gameboard[5] != '5' &&
                gameboard[6] != '6' && gameboard[7] != '7' && gameboard[8] != '8' && gameboard[9] != '9'){
                return 0;
        }else{
                return - 1;
        }
}
