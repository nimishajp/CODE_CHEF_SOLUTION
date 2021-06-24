/*
Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
4
12345
31203
2123
2300
Output
54321
30213
3212
32


*/

#include <iostream>
using namespace std;
int main(){
int T;
cin>>T;
while(T--){
    int N;
    
    int ans=0;
    cin>>N;
    
    while(N>0){
    int r=N%10;
        ans=ans*10+r;
        N=N/10;
        
    }
    cout<<ans<<endl;
    
}

}
