#include "Cell.h"

Cell::Cell() {
    value = '0';
    fixed = false;
}

char Cell::getValue(){
    return value;
}

void Cell::setValue(char val){
    value = val;
}

bool Cell::isFixed(){
    return fixed;
}

void Cell::setFixed(bool fix){
    fixed = fix;
}
