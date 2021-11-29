//
// Created by leona on 29/11/2021.
//

#include "lib.h"
#include <iostream>
bool verifica(char a){
    if((int(a)>=97&&int(a)<=122)||(int(a)>=65&&int(a)<90)){
        return true;
    }
    return false;
}
void table(){
    for(int i=0;i<255;i++){
        std::cout<<i<<"  "<<char(i)<<std::endl;
    }
}
