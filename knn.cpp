#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

float euclideandist(int x1, int y1,int batavg[],int bowlavg[],float avg[]){
	

	for(int i=0; i<15; i++){
	
avg[i]= sqrt(pow(batavg[i] - x1, 2) +pow(bowlavg[i] - y1, 2) );	

}

}

float copy(float avg[],float avg1[]){
	
	for(int i=0; i<15; i++){
		
		avg1[i]=avg[i];
	
	}

	
}

int min(float arr[],int n){
	int index,loc;
	float minimum = 5000;
	for (index = 0; index < n; index++){
		if (arr[index]!=-1&&minimum > arr[index]){
			minimum = arr[index];
			loc = index;
		}

	}
		arr[loc] = -1;
	return loc;
}

int selectminindex(int order[], float avg1[],float n )
{  
	for (int index = 0; index < 15; index++){
		order[index] = min(avg1, 15);



	}	
}

int savinglabelandcount(int order[],float avg[], int label[],int &batsman,int &bowler,int &allrounder){
int k=5,i,index;
batsman=0;bowler=0;allrounder=0;

for(index=0; index<k; index++)
{
	i=order[index];
	label[i];


	if(label[i]==0){
	batsman++;
	
					}

	else if(label[i]==1){
	bowler++;
	
	                   }

	else if(label[i]==2){
	
	allrounder++;
	
		              }

}	
}



int checkingplayertype(int batsman,int bowler,int allrounder)
{

if(batsman>allrounder && batsman>bowler){
	
	cout<<"The new Player is a Batsman"<<endl;
}	
else if(bowler>allrounder &&bowler> batsman){
	
	cout<<"The new Player is a Bowler"<<endl;
}
else if(allrounder>batsman && allrounder>bowler){
	
	cout<<"The new Player is an all-rounder"<<endl;
}	

}

int gettingavgsfromuser(int &x1,int &y1){
	
	cout<<"Enter Batting average of Player"<<endl;
	cin>>x1;
	cout<<"Enter Bowling average of Player"<<endl;
	cin>>y1;
	
	
}


int main(){
	int batsman, bowler, allrounder,order[15];
	int label[15]={0,0,0,0,0,1,1,1,1,1,2,2,2,2,2};
	int batavg[15]={50,45,48,62,48,15,12,12,5,6,35,34,55,26,31},bowlavg[15]={50,50,58,65,43,21,20,15,12,23,29,26,29,41,28},x1,y1;
	float avg[15],avg1[15],n;
	
	gettingavgsfromuser( x1, y1);
	
	euclideandist( x1,  y1,batavg,bowlavg,avg);
	
	copy(avg,avg1);
	
	selectminindex(order,avg1 ,n);
	
	savinglabelandcount(order,avg,label, batsman, bowler, allrounder);
	
	checkingplayertype(batsman, bowler, allrounder);
}
