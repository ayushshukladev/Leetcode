class Solution {
public:
    bool canAliceWin(int n) {
       int move = 10;
       int m = 0;
       while(n>=move){
        n -= move;
        move--;
        m++;
       }
       return m%2==1;
    }
};