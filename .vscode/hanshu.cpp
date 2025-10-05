#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;
class Solution {
    private:
    unordered_map<char,int> m={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    public:
    int match(string s){
        int shuzi=0;
       int cur=0;
        for(int i=s.size()-1;i>=0;i--){
            if(m[s[i]]>=cur){
                shuzi+=m[s[i]];
                cur=m[s[i]];
            }
            else{
                shuzi=shuzi-m[s[i]];
            
            }

        }
        return shuzi;
    }
};
void test(){
    Solution s;
    cout<<s.match("III")<<endl;

}
int main(){
    test();
    system("pause");
    return 0;
}
