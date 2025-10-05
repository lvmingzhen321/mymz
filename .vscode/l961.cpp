//设置一个count函数，传进去一个字符串，遍历字符串，找到重复的，就给相应的num+1,
//找到不重复的，就新增一个num,最后看谁的num=你，返回这个字符
#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int find(vector<int>&nums){
    unordered_map<int,int>count;
    int n=nums.size()/2;
    for(int num:nums){
        
        count[num]++;
        if(count[num]==n){
            return num;
        }


    }
    return -1;
}

int main(){
    vector<int>nums={1,2,3,3};
    cout<<find(nums)<<endl;
    system("pause");
    return 0;
}
