#include <stdio.h>
#include <stdlib.h>

// int main(int argc, char *argv[])
// {
//     int mat[3][3];
    
//     mat[0][0] = 1;
//     mat[0][1] = 2;
//     mat[0][2] = 3;
    
//     mat[1][0] = 4;
//     mat[1][1] = 5;
//     mat[1][2] = 6;
    
//     mat[2][0] = 7;
//     mat[2][1] = 8;
//     mat[2][2] = 9;
    
//     printf("%d %d %d\n", mat[0][0], mat[0][1], mat[0][2]);
// }

int main(int argc, char *argv[])
{
    int mat[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}};
                     
    int i, j;
    
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("%d",mat[i][j]);
        }
    }
}
