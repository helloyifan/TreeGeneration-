include <stdio.h>

int main(){
        //Here I am declaring useless variables
        int width,x, y;
        char wood, leaves;

        scanf ("%i %c %c", &width, &wood, &leaves);

        for(int i = 1; i <= width; i+=2 ){

                x = width - i;
                x /=2;

                for(int k = 0; k < x; k++){
                        printf(" ");
                }

                for(int j = 0; j < i; j++){
                        printf("%c", leaves);
                }
                printf("\n");

        }

        y = ((width - 1)/2) - 1;

                for(int l =0; l < y; l++){
                        printf(" ");
                }

                for(int m =0; m < 3; m++){
                        printf("%c", wood);
                }
                printf("\n");
        };


