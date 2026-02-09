#include<iostream>
using namespace std;
class Player{
public:
    int score;
    int health;
    char name[20];
};
int main(){
    int a=10;
    Player amit; 
    amit.score=90;
    amit.health=100;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl; 
}