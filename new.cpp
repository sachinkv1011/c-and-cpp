#include<iostream>
#include<string>
using namespace std;
string fun(int n);
class Hi{
    public: 
        string fun(int n)
    {
        string sol=" ";
       
        while(n)
        {
            char c='A'+(n-1)%26;
            sol=c+sol;
            n=(n-1)/26;
        }
    cout<< sol ;
    }
};
int main(){
    Hi ob;
    int val;
    cout<<"Enter the column number: ";
    cin>>val;
    ob.fun(val);
    return 0;
}
