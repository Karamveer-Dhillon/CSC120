#include <iostream>

int main(){
    int red_Bugs = 1;
    int green_Bugs = 3745854;
    int days = 0;

    std::cout<<"Day "<<days<<": Red Bugs = "<<red_Bugs<<", Green Bugs = "<<green_Bugs<<std::endl;
    do {
        days++;
        // if the red bugs are more than green bugs
        // then add green bugs to red bugs
        // and subtract all the green bugs.
        if (red_Bugs > green_Bugs) {
            red_Bugs += green_Bugs;
            green_Bugs -= green_Bugs;
        } else {
            green_Bugs = green_Bugs - red_Bugs;
            red_Bugs += red_Bugs;
        }
        std::cout<<"Day "<<days<<": Red Bugs = "<<red_Bugs<<", Green Bugs = "<<green_Bugs<<std::endl;
    } while(green_Bugs > 0);

    return 0;
}
