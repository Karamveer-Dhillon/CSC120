#include <iostream>

int main(){
    int redBugs = 1;
    int greenBugs = 3745854;
    int days = 0;

    std::cout<<"Day "<<days<<": Red Bugs = "<<redBugs<<", Green Bugs = "<<greenBugs<<std::endl;
    do {
        days++;
        // if the red bugs are more than green bugs
        // then add green bugs to red bugs
        // and subtract all the green bugs.
        if (redBugs > greenBugs) {
            redBugs += greenBugs;
            greenBugs -= greenBugs;
        } else {
            greenBugs = greenBugs - redBugs;
            redBugs += redBugs;
        }
        std::cout<<"Day "<<days<<": Red Bugs = "<<redBugs<<", Green Bugs = "<<greenBugs<<std::endl;
    } while(greenBugs > 0);

    return 0;
}
