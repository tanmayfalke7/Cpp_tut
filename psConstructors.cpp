#include<iostream>
#include<cmath>
using namespace std;

class distance{
   private:
   public:
    int x,y;
    // distance(int a ,int b ){
    //     x= a;
    //     y= b;
    // }
    int cal(int x,int y,int s,int t){
        cin>>x>>y;
        cin>>s>>t;
        int sum = (x-s)*(x-s)+(y-t)*(y-t);
        cout<<sqrt(sum);
        
    }
}c1;

int main(){
    int x,y,s,t;
    c1.cal(x,y,s,t);
    return 0;
}