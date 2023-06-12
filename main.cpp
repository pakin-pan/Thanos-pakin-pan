#include <iostream>
using namespace std;
#include "Thanos.h"

int main() {
  
  monster Prom("Prom",0,50); Prom.print();
  monster Mark("Mark",10,100); Mark.print();
  monster Za("Za",5,50); Za.print();
  monster Sun("Sun",0,75); Sun.print();
  monster Ryu("Ryu",2,60); Ryu.print();

  int n;
  cout<<"How many normal monster?";
  cin>>n;
  monster *m=new monster[n];//2. make sure they have hp
  for(int i=0;i<n;i++){
    m[i].print();
  }

  Za.Attack(Mark);
  
  n = n+5;
  monster list[n];
  for (int i=0; i<n-5 ;i++){
    list[i] = m[i];
  }
  list[n-5] = Prom;
  list[n-4] = Mark;
  list[n-3] = Za;
  list[n-2] = Sun;
  list[n-1] = Ryu;

  

  cout<<endl;
  list[n-5].Attack(list[0]);


  Thanos T;
  ++T;
  ++T;
 
  T.snap_finger(list,n); //finish the snap finger function
  for (int i=0;i<n;i++){
    list[i].print();
  }
  cout<<endl;
 
  ++T;
  ++T;
  
  T.snap_finger(list,n);
  for (int i=0;i<n;i++){
    list[i].print();
  }
  cout<<endl;
  ++T;
  ++T;

  list[n-2].Attack(m[0]);
  
  cout<<endl;
  Thanos AjMing("AjMing",0,200000);
  AjMing.fight(T);
  AjMing.snap_finger(list,n);
  for (int i=0;i<n;i++){
    list[i].print();
  }
  cout<<endl;
  
  
  delete [] m;
  
cout<<endl<<"----------THE END-------------"<<endl;
}