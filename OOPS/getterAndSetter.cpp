#include<iostream>
using namespace std;
class Hero
{
   
   public:
   int health;
   char *name ;
   name =new char;
 // constrution creation 
 Hero (int health)
 {
   this ->health=health ;
 }
 // constructor with two parameters
 Hero(int health ,char ch)
 {
   this ->health=health;
   this ->level=ch;
 }

int gethealth()
{
    return  health;
}

void sethelth (int h)
{
   health =h;
}
char getlevel()
{
   return level;
}
void setlevel(char l)
{
   level=l;
}
};

int main()
{
   // the concept of the deep copy constructor
   Hero Rahul;
   Rahul.sethelth(8);
   Rahul.setlevel('A+');

   
}