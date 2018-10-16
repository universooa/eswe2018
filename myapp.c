#include "func1.h"
#include "func2.h"

#include <stdio.h> 

void preprocess(){
printf("do some preprocessing\n");
}

void proprocess(){
printf("do some proprocessing\n");
}

int main(){

preprocess();

func1();
func2();

proprocess();
return 0;
}
