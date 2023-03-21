#include <iostream>
#include <string>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;

    cin >> N;

    int cur = 666;
    int count = 0;

    while(1){
        if(to_string(cur).find("666") != string::npos){
            count++;
        }

        if(N == count){
            cout << cur;
            break;
        }
        cur++;
    }

    return 0;
}