#include "monster.h"

class Thanos {
private:
  int stones;
  int hp; // extra hp;
  string name;
public:
  /* constructor and destructor */
  Thanos(string n ="Thanos",int = 0, int = 10000);
  ~Thanos(); // cout something

  void snap_finger(monster[], int);
  /* show all hps
  / clear half of monster hp, if stone =6*/
  void operator++(); // increase the stone;

  void fight(Thanos T);

};

Thanos::Thanos(string n,int a, int b) {
  stones = a;
  name = n;
  hp = b;
  cout<<name<<" has arrived"<<endl;
}
Thanos::~Thanos(){
  
}

void Thanos::operator++(){
  stones++;
  cout<<name<<" get one more stone"<<endl;
}


void Thanos::snap_finger(monster m[], int n){
      cout<<endl<<name<<" snap finger!!"<<endl;
      if(stones<6) cout<<"but there are not enough stones"<<endl;
      else{
        cout<<name<<" kill half of the students!!"<<endl;
        int i;
        for(i=0;i<n;i+=2){

            m[i].kill();
        }
      }
}

void Thanos::fight(Thanos T)
{
  if (hp>T.hp){
  cout<<name<<" kill "<<T.name<<" and steal his stones"<<endl;
  stones = T.stones;
  T.stones = 0;
  }
  else cout<<"Oops"<<endl;
}
