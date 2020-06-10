#include<iostream>

using namespace std;

// Entry point function
int main()
{
    // Local variable declaration
    int iNum = 10;
    int &refNum = iNum;                       // Reference of variable is just another name given to a variable 
    
    //Code
    std::cout<<"iNum :"<<iNum<<std::endl;
    refNum++;
    std::cout<<"iNum :"<<iNum<<std::endl;
    std::cout<<"refNum :"<<refNum<<std::endl;

    return 0;
}