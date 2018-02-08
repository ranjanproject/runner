#include<iostream>
#include<thread>
#include<queue>
#include "fun.h"
using namespace std;


int main(){
	queue <int> qB,qC,q;
	int n,i,sum1,sum2;
	sum1=0;sum2=0;
	n=100;
	//creating thread A
	//thread A stores random number in queue q.
    thread A(ran, n,ref(q));
	A.join();
   while(!q.empty()){
   	if(q.front()%2==0||q.front()==3){
	  thread B(grab,q.front(),ref(qB)); //thread B
	  B.join();
	}
    else{
	  thread C(grab,q.front(),ref(qC)); //thread C
      C.join();
	 }
	 q.pop();
	}
     add(sum1,qB);
     add(sum2,qC);
     if(sum1>sum2)
     	cout<<"B won!"<<endl;
     else
     	cout<<"C Won!"<<endl;
	return 0;
}