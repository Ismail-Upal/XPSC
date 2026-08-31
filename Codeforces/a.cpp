#include<bits/stdc++.h>
using namespace std;

string s;
stack<int> num;
stack<char> op;

bool open(char ch){
    return ch == '(' or ch == '{' or ch == '[';
}
bool close(char ch){
    return ch == ')' or ch == '}' or ch == ']';
}

char iop(char ch){
    char o;
    if(ch == ')') o = '(';
    if(ch == '}') o = '{';
    if(ch == ']') o = '[';
    return o;
}

void calc(){
    int b = num.top(); num.pop();
    int a = num.top(); num.pop();

    char o = op.top(); op.pop();
    int n;
    if(o == '+') n = a + b;
    if(o == '-') n = a - b;
    if(o == '*') n = a * b;
    if(o == '/') n = a / b;
    num.push(n);
}

int pre(char ch){
    if(ch == '+' or ch == '-') return 1;
    if(ch == '*' or ch == '/') return 2;
    return 0;
}

int main(){
    getline(cin, s);
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == ' ') continue;

        if(isdigit(s[i])){
            int n = 0;
            while(i < s.size() and isdigit(s[i])){
                n *= 10;
                n += (s[i] - '0');
                i++;
            }
            i--;
            num.push(n); continue;
        }

        if(open(s[i])){
            op.push(s[i]); continue;
        }

        if(close(s[i])){
            char o = iop(s[i]);
            while(op.size() and op.top() != o){
                calc();
            }
            op.pop(); continue;
        }

        while(op.size() and !open(op.top()) and pre(op.top()) >= pre(s[i])){
            calc();
        }
        op.push(s[i]);
    }


    while(op.size()) calc();
    cout << num.top();
}
#include<bits/stdc++.h>
using namespace std;

string s;
stack<int> num;
stack<char> op;

bool open(char ch){
    return ch == '(' or ch == '{' or ch == '[';
}
bool close(char ch){
    return ch == ')' or ch == '}' or ch == ']';
}

char iop(char ch){
    char o;
    if(ch == ')') o = '(';
    if(ch == '}') o = '{';
    if(ch == ']') o = '[';
    return o;
}

void calc(){
    int b = num.top(); num.pop();
    int a = num.top(); num.pop();

    char o = op.top(); op.pop();
    int n;
    if(o == '+') n = a + b;
    if(o == '-') n = a - b;
    if(o == '*') n = a * b;
    if(o == '/') n = a / b;
    num.push(n);
}

int pre(char ch){
    if(ch == '+' or ch == '-') return 1;
    if(ch == '*' or ch == '/') return 2;
    return 0;
}

int main(){
    getline(cin, s);
    for(int i = 0; i < (int)s.size(); i++){
        if(s[i] == ' ') continue;

        if(isdigit(s[i])){
            int n = 0;
            while(i < s.size() and isdigit(s[i])){
                n *= 10;
                n += (s[i] - '0');
                i++;
            }
            i--;
            num.push(n); continue;
        }

        if(open(s[i])){
            op.push(s[i]); continue;
        }

        if(close(s[i])){
            char o = iop(s[i]);
            while(op.size() and op.top() != o){
                calc();
            }
            op.pop(); continue;
        }

        while(op.size() and !open(op.top()) and pre(op.top()) >= pre(s[i])){
            calc();
        }
        op.push(s[i]);
    }


    while(op.size()) calc();
    cout << num.top();
}