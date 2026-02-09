#include<iostream>
using namespace std;
class Player{
private:  //data members
    int health;
    int age;
    int score;
    bool alive;
public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
    void setHealth(int health){
        this->health=health;
    }
    void setAge(int score){
        this->score=score;
    }
    void setScore(int score){
        this->score=score;
    }
    void setisAlive(bool alive){
        this->alive=alive;
    }
};
int addScore(Player a,Player b){
    //cout<<a+b<<endl;
    return a.getScore()+b.getScore();
}
Player getMaxScorePlayer(Player a,Player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}
int main(){
    Player harsh;  //object creation statically
    Player raghav;  //compile time , static allocation
    Player *urvi=new Player;  //run time, dynamic allocation.

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setisAlive(true);
    harsh.setHealth(70);

    raghav.setAge(22);
    raghav.setScore(20);
    raghav.setisAlive(true);
    raghav.setHealth(100);

    urvi->setScore(40);

    cout<<addScore(harsh,raghav)<<endl;
    Player sanket=getMaxScorePlayer(harsh,raghav);
    cout<<sanket.getScore()<<endl;
    cout<<sanket.getHealth();
    

}