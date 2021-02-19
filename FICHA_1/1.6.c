#include <stdio.h>
#include <string.h>
#define ELEMENTS 10000

typedef struct {
    char serial[20];
    float measure;
}record;

int greaterM(record list[],float M){
    int counter = 0;
    for(int i = 0; i < ELEMENTS; i++){
        if (list[i].measure >= M) counter++;
    }
    return counter;
}

int main(){
    record list[ELEMENTS] = {{"XXXX", 5000},{"YYYY",6000},{"WWWW", 5089.56}};
    int result = greaterM(list, 5050); //random M
    printf("%d",result);
}
