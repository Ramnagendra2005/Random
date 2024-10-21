 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int a;
    cin>>a;
    for(int i=2;i<=a;i++){
        if(a%i==0){
            cout<<"false"<<endl;
        }
    }
    cout<<"True"<<endl;
    return 0;

 }
