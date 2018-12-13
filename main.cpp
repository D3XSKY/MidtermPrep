//
//  main.cpp
//  MidtermPrep
//
//  Created by Dejan Misic on 12/12/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#include <iostream>
using namespace std;






int main(int argc, const char * argv[]) {
    
    std::cout << ">> Task 4 <<" << std::endl;
    std::cout << std::endl;
    int secNum = 0; int firstNum = 0; char c;
    try {
        // getting and validating input
        std::cout << "Enter two integers and one character: " << std::endl;
        
        std::cout << "Enter first integer (height): " << std::endl;
        std::cin >> secNum;
        while (std::cin.fail() || (secNum < 0 || secNum == 0))
        {
            if (secNum == -1){
                break;
            }
            std::cin.clear(); // clear input buffer to restore cin to a usable state
            std::cin.ignore(100, '\n'); // ignore last input
            std::cout << "Invalid input. You need to enter a integer that is bigger than 0 or enter -1 to quit." << std::endl;
            std::cout << "\nEnter first integer: " << std::endl;
            std::cin >> secNum;
            std::cout << std::endl;
        }
        if (secNum == -1) {
            std::exit(0);
        }
        std::cout << "Please note that second integer has to be bigger than first you entered." << std::endl;
        std::cout << "Enter second integer(width): " << std::endl;
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cin.ignore(100, '\n'); // ignore last input
        std::cin >> firstNum;
        while (std::cin.fail() || !(secNum < firstNum))
        {
            if (firstNum == -1){
                break;
            }
            std::cin.clear(); // clear input buffer to restore cin to a usable state
            std::cin.ignore(100, '\n'); // ignore last input
            std::cout << "Invalid input. Second integer must be bigger than first and cannot be 0. To exit program enter -1" << std::endl;
            std::cout << "Enter second integer(width): " << std::endl;
            std::cin >> firstNum;
            std::cout << std::endl;
        }
        if (firstNum == -1) {
            std::exit(0);
        }
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cin.ignore(100, '\n'); // ignore last input
        std::cout << "Enter character: " << std::endl;
        std::cin >> c;
        while (!isalpha(c))
        {
            if (c == 45){
                break;
            }
            std::cin.clear(); // clear input buffer to restore cin to a usable state
            std::cin.ignore(100, '\n'); // ignore last input
            std::cout << "Invalid input. You need to enter a character or enter -1 to quit." << std::endl;
            std::cout << "Enter character: " << std::endl;
            std::cin >> c;
            
            std::cout << std::endl;
            
        }
        if (c == 45) {
            std::exit(0);
        }
        std::cout << "\n";
        // printing the rectangle
        std::cout << c;
        for (int i = 0; i < firstNum - 2; i++)
        {
            std::cout << c;
        }
        std::cout << c <<"\n";
        
        for (int i = 0; i < secNum - 2; i++)
        {
            std::cout << c;
            for (int j = 0; j < firstNum - 2; j++)
            {
                std::cout << " ";
            }
            std::cout << c << "\n";
        }
        
        std::cout << c;
        for (int i = 0; i < firstNum - 2; i++)
        {
            std::cout << c;
        }
        std::cout << c <<"\n";
    }
    catch(int e){
        std::cout << "You must input a positive integer." << std::endl;
    }
}
