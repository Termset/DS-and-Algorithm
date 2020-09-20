//
// Created by xutianqi on 2020/9/20.
//
# include <bits/stdc++.h>

using namespace std;
/*
 * 解码字符串
 * input：3[a]2[bc]
 * output：aaabcbc
 *
 */
int main1(){
    string s,t;
    int cnt=0;
    cin>>s;
    stack<int> s_num;
    stack<string> s_str;
    for (char i : s)
    {
        if (i>='0' && i<='9')
            cnt =10*cnt + i -'0';
        else if (i == '['){
            s_num.push(cnt);
            s_str.push(t);
            cnt=0;
            t.clear();
        } else if (i==']'){
            int k=s_num.top();
            s_num.pop();
            for (int j=0;j<k;++j) s_str.top() += t;
            t=s_str.top();
            s_str.pop();
        } else {
            t+=i;
        }
    }
    if (s_str.empty())
        cout<<t;
    else
        cout<<s_str.top();
    return 0;
}

/*
 * 判断9x9的数独是否有效
 * input：83..7....;6..195...;.98....6.;8...6...3;4..8.3..1;7...2...6;.6....28.;...419..5;....8..79
 * output：false
 */
bool isValidSudoku(vector<vector<char>>& board) {
    vector<int> wow(9,0);
    int mux1;
    int mux2;
    int mux3;
    int box_index;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j] == '.'){
                continue;
            }
            mux1 = 0x01 << (board[i][j] - '1');
            mux2 = 0x01 << 9 << (board[i][j] - '1');
            mux3 = 0x01 << 9 << 9 << (board[i][j] - '1');
            box_index = (i/3) * 3 + j/3;
            if((wow[i]&mux1) != mux1 && (wow[j]&mux2) != mux2 && (wow[box_index]&mux3) != mux3){
                wow[i] = wow[i]|mux1;
                wow[j] = wow[j]|mux2;
                wow[box_index] = wow[box_index]|mux3;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<char>> board;
    board = {
    {"5", "3", ".", ".", "7", ".", ".", ".", "."},
    {"6", ".", ".", "1", "9", "5", ".", ".", "."},
    {".", "9", "8", ".", ".", ".", ".", "6", "."},
    {"8", ".", ".", ".", "6", ".", ".", ".", "3"},
    {"4", ".", ".", "8", ".", "3", ".", ".", "1"},
    {"7", ".", ".", ".", "2", ".", ".", ".", "6"},
    {".", "6", ".", ".", ".", ".", "2", "8", "."},
    {".", ".", ".", "4", "1", "9", ".", ".", "5"},
    {".", ".", ".", ".", "8", ".", ".", "7", "9"}
    };
    cout<<isValidSudoku(board);
}