#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0, y = 0, dir_num = 0;
    string s;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
    
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'L')
            dir_num = (dir_num - 1 + 4) % 4;
        else if(s[i] == 'R')
            dir_num = (dir_num + 1) % 4;
        else {
            cout << x + dx[dir_num] << " " << y + dy[dir_num];
        }
    }
    return 0;
}