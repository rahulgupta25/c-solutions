#include<iostream> 
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std; 

    
    
string simplify(string st)
{
    stack<char>s;
    int n=st.length();
    s.push('/');
    for(int i=1;i<n;i++)
    {
        if(s.top()=='/')
        {
            if(st[i]=='.')
            {
                s.push(st[i]);
            }
            else if(st[i]=='/')
            {
                
            }
            else
            {
                s.push(st[i]);
            }
        }
        else if(s.top()=='.')
        {
            if(st[i]=='.')
            {
                while(!s.empty())
                {
                    s.pop();
                }
                s.push('/');
            }
            else if(st[i]=='/')
            {
                s.pop();
            }
            else
            s.push(st[i]);
        }
        else
        {
            s.push(st[i]);
        }
    }
    stack<char>s2;

    if(s.top()=='/')
    {
        s.pop(); 
        if(s.empty())
        s.push('/');
    }
    while(!s.empty())
    {
        s2.push(s.top());
        s.pop();
    }
    string A;
    while(!s2.empty())
    {
        A.push_back(s2.top());
        s2.pop();
    }
    return A;
}
int main() {
 // absolute path which we have to simplify. 
    string str("/a/./b/../../c/"); 
    string res = simplify(str); 
    cout << res; 
    return 0; 
}
