#include <stdio.h>
int sum ( int, int );
int main() {
    int x = 5, y = 6;
    sum(x, y);
    return 0;
}
int sum( int x, int y){
    return x+y;
}