#include<iostream>
#include<queue>
using namespace std;

void add(int &sum,queue<int> &q){
  while(!q.empty()){
  	sum=sum+q.front();
  	q.pop();
  }
}