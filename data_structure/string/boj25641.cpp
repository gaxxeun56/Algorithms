#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    string S;

    cin >> N;
    cin >> S;

    int s = 0;
    int t = 0;

    for(int i = 0; i < S.length(); i++){
        if(S[i] == 's'){
            s++;
        } else {
            t++;
        }
    }

    int tmp = 0;
    while(s != t){
        if(S[tmp] == 's'){
            s--;
        } else {
            t--;
        }
        tmp++;
    }

    for(int i = tmp; i < S.length(); i++){
        cout << S[i];
    }
    cout << '\n';
}