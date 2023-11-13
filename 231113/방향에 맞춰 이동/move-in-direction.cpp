#include <iostream>
using namespace std;
int main() {
    char dir;
    int N, dis, x = 0, y = 0;
    int dx[] = {-1, 0, 0, 1};
    int dy[] = {0, -1, 1, 0};
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> dir >> dis;
        if(dir == 'W') {
            x = x + dx[0]*dis;
            y = y + dy[0];
        }
        else if(dir == 'S') {
            x = x + dx[1];
            y = y + dy[1]*dis;
        }
        else if(dir == 'N') {
            x = x + dx[2];
            y = y + dy[2]*dis;
        }
        else {
            x = x + dx[3]*dis;
            y = y + dy[3];
        }
    }
    cout << x << " " << y;
    return 0;
}