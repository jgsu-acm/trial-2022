#include <iostream>
using namespace std;
char a[4][4];
bool heng(char c) {
    for(int i = 1; i <= 3; i++)
        if(a[i][1] == c && a[i][2] == c && a[i][3] == c)
            return true;
    return false;
}
bool shu(char c) {
    for(int i = 1; i <= 3; i++)
        if(a[1][i] == c && a[2][i] == c && a[3][i] == c)
            return true;
    return false;
}
bool xie(char c) {
    return ((a[1][1] == c && a[2][2] == c && a[3][3] == c) || 
            (a[1][3] == c && a[2][2] == c && a[3][1] == c));
}
bool win(char c) { return (heng(c) || shu(c) || xie(c)); }
void solve() {
    int num1 = 0, num2 = 0; 
    for(int i = 1; i <= 3; i++)
        for(int j = 1; j <= 3; j++) {
            cin >> a[i][j];
            num1 += (a[i][j] == 'X'), num2 += (a[i][j] == 'O');
        }
    if(num1 < num2 || num1 - num2 > 1 || win('X') && num1 == num2 || win('O') && num1 > num2) 
        cout << "illegal!\n";
    else if(win('X')) cout << "Algor win!\n";
    else if(win('O')) cout << "AgOH win!\n";
    else if(num1 == num2) cout << "Algor now!\n";
    else if(num1 + num2 < 9) cout << "AgOH now!\n";
    else cout << "draw!\n";
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}