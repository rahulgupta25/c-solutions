#include<iostream> 
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std; 
stack<int> push_bottom(stack<int> s,int a)
{
    if(s.empty())
    {
        s.push(a);
     return s;
    }
    else
    {
        int temp=s.top();
        s.pop();
        s=push_bottom(s,a);
        s.push(temp);
        return s;
    }
}
void print(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
stack<int> stackrev(stack<int> s)
{
    int a=s.top();
    s.pop();
    if(s.empty())
    {
      s= push_bottom(s,a);
       
    }
    else
    {   
         s=stackrev(s);
        s= push_bottom(s,a);
    }
     return s;
}
int main()
{
    stack<int>s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     print(s);
     s=stackrev(s);
     print((s));
}
