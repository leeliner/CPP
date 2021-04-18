#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    //正三角九九乘法表
    cout<<"正三角形九九乘法表"<<endl;
    for (int i=1;i<10;i++){
    for (int j=1;j<=i;j++)
    
        cout <<i<<"*"<<j<<"="<<setw(2)<<i*j<<" ";
    
    cout<<endl;}
    //倒三角形九九乘法表
    cout<<"倒三角形九九乘法表"<<endl;
    for (int i=1;i<10;i++){
    for (int j=1;j<=10-i;j++)
    cout <<i<<"*"<<j<<"="<<setw(2)<<i*j<<" ";
    cout<<endl;
    }
    //反倒三角形九九乘法表
    cout <<"反倒三角形九九乘法表"<<endl;
    for(int i=1;i<10;i++){
    for(int k=1;k<i;k++)
    cout<<"       ";
    for(int j=1;j<=10-i;j++)
    cout <<i<<"*"<<j<<"="<<setw(2)<<i*j<<" ";
    cout <<endl;}
    //反三角形九九乘法表
    cout <<"反三角形九九乘法表"<<endl;
    for(int i=1;i<10;i++){
        for(int k=1;k<10-i;k++)
        cout <<"       ";
    for(int j=1;j<=i;j++)
    cout<<i<<"*"<<j<<"="<<setw(2)<<i*j<<" ";
    cout<<endl;}
        return 0;

}
