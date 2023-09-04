#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    
    for(i=1;i<=10;i++){
        
        if(i == 5){
            continue;// break
        }
        printf("%d\n",i);
    }
}