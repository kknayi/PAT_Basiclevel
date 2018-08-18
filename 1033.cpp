#include <iostream>
#include <string>
using namespace std;

int vis_loc(char c) {
    int loc = 0;
    if (c >= 'a' && c <= 'z')
        loc = c - 97;
    else if (c >= 'A' && c <= 'Z')
        loc = c - 39;
    else if (c >= '0' && c <= '9')
        loc = c + 4;
    else if (c == '_')
        loc = 62;
    else if (c == ',')
        loc = 63;
    else if (c == '.')
        loc = 64;
    else if (c == '-')
        loc = 65;
    else if (c == '+')
        loc = 66;
    return loc;
}

int vis_word(char c) {
    int loc = 0;
    if (c >= 'a' && c <= 'z')
        loc = c - 97 + 26;
    else if (c >= 'A' && c <= 'Z')
        loc = c - 39 - 26;
    return loc;
}

int main() {
    bool vis[67] = { false };
    string injure;
    string instr;
    getline(cin, injure);
    getline(cin, instr);
    for (int i = 0; i < injure.size(); i++) {
        if (injure[i] == '+') {
            vis[66] = true;
            for (int j = 26; j < 52; j++)
                vis[j] = true;
        }
        else {
            if (injure[i] >= 'a' && injure[i] <= 'z')
                vis[vis_word(injure[i])] = true;
            else if (injure[i] >= 'A' && injure[i] <= 'Z')
                vis[vis_word(injure[i])] = true;
            vis[vis_loc(injure[i])] = true;
        }
    }
    for (int i = 0; i < instr.size(); i++) {
        if (!vis[vis_loc(instr[i])])
            cout << instr[i];
    }
    cout << endl;

    return 0;
}
