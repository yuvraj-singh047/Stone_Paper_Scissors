// //Stone Paper Scissor Game
#include <iostream>
#include <ctime>
int main() {
    srand(time(0));
    int compchoice=(rand()%3)+1;
    int userchoice;
    int comppoints=0;
    int userpoints=0;
    std::cout<<"********Stone-Paper-Scissor Game!********\n"<<"Rules:\n"<<"a)Enter 1 for Stone\n"<<"b)Enter 2 for Paper\n"<<"c)Enter 3 for Scissor\n"<<"Whoever scores 5 points first wins! The computer response is completely random.\n";
    do {
    std::cout<<"Enter Your Choice:";
    std::cin>>userchoice;
    if (userchoice==1 && compchoice==1) {
        std::cout<<"Draw!\n";
    }
    else if (userchoice==1 && compchoice==2) {
        std::cout<<"Computer Won!\n";
        comppoints++;
    }
    else if (userchoice==1 && compchoice==3) {
        std::cout<<"You Won!\n";
        userpoints++;
    }
    else if (userchoice==2 && compchoice==1) {
        std::cout<<"You Won!\n";
        userpoints++;
    }
    else if (userchoice==2 && compchoice==2) {
        std::cout<<"Draw!\n";
    }
    else if (userchoice==2 && compchoice==3) {
        std::cout<<"Computer Won!\n";
        comppoints++;
    }
    else if (userchoice==3 && compchoice==1) {
        std::cout<<"Computer Won!\n";
        comppoints++;
    }
    else if (userchoice==3 && compchoice==2) {
        std::cout<<"You Won!\n";
        userpoints++;
    }
    else if (userchoice==3 && compchoice==3) {
        std::cout<<"Draw!\n";
    }
    else {
        std::cout<<"Invalid Input\n";
    }
} while(comppoints!=5 && userpoints!=5);
std::cout<<"Your Score:"<<userpoints<<'\n'<<"Computer Score:"<<comppoints<<'\n';
if (userpoints>comppoints) {
    std::cout<<"You won!\n";
}
else if (userpoints>comppoints) {
    std::cout<<"You Lost!\nTry next time!";
}
else {
    std::cout<<"Its a Draw!";
}
    return 0;
}