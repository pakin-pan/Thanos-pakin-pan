#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:

void operator++();
void operator--();
void operator+=(int); // += hp
void kill();
void Attack(monster &); // A attack B  A.hp--; B.hp/=2 
//void heal(); // your idea to help revive hp
void print(); // to print all data
bool not_dead() { return hp>0;  }

monster(string n = "Kiki", int=0,int= 20);
~monster();

};



void monster::print(){
  cout<<name<<"--> ";
  cout<<"hp: "<<hp<<"  potion: "<<potion<<endl;
  
}
void monster::Attack(monster & b){// x.Attack(y)
     cout<<name<<" ATTACK!!!!! "<<b.name<<endl;
     hp-=10; 
    b.hp-=10 ;
    if(hp > 0){
      cout<<name<<" is alive and " ;
    }
    else cout<<name<<" is dead and ";
    
    if(b.hp>0)
    { cout<<b.name<<" is alive"<<endl<<endl;}
    else 
      cout<<b.name<<" is dead"<<endl<<endl;
  
}

void monster::kill()
{
  hp = 0;
  
}
monster::~monster(){
  //indicate which monster is gone
}

monster::monster(string n ,int p,int h){

  //set var
  name=n;
  hp=h ;
  potion=p;
  
}
#endif