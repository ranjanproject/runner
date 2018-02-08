//function for storing random number in a queue.
//work of thread A.
#include<iostream>
#include<queue>
#include<cstdlib>
#include<ctime>
using namespace std;

void ran(int n,queue<int> &q){
	int i;
   srand(time(NULL));
   for(i=0;i<n;i++){
     q.push(rand()%10);
   }
}