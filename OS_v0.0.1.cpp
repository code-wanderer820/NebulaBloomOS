//
//  main.cpp
//  NebulaBloomOS
//
//  Created by Alan Liu on 2025/5/2.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/* long long performCalculation(string expression){
    long long result = 0;
    long long number = 0;
    long long multiplier = 1;
    
    expression = expression.substr(0, 4);
    for(int index = expression.size() - 1; index >= 0; index--){
        if(expression[index] >= '0' && expression[index] <= '9'){
            number += long(expression[index] - '0') * multiplier;
            multiplier *= 10;
        }
        else{
            if(expression[index] == '+') result += number;
            else if(expression[index] == '-') result -= number;
            else if(expression[index] == '*') result *= number;
            else if(expression[index] == '/') result /= number;
            else;
            number = 0;
            multiplier = 1;
        }
    }
    result += number;
    
    return result;
}
 */

bool handleCommand(string inputContent) {
    if(inputContent == "help") {
        cout << "Available commands:\n";
        cout << "  help - Show this help message\n";
        cout << "  exit - Exit the program\n";
        cout << "  info - Show system information\n";
        cout << "  time - Show current time\n";
        cout << "  calc - Performs simple mathematical operations (for example, calc 2+3, calc 5-2, calc 4*3, calc 4/2.It is also possible to perform calculations involving multiple numbers.)\n";
    }
    else if(inputContent == "exit") {
        cout << "Exiting NebulaBloomOS...\n";
        return false;
    }
    else if(inputContent == "info") {
        cout << "NebulaBloomOS - A simple command-line operating system.\n";
    }
    else if(inputContent == "time") {
        time_t currentTime = time(nullptr);
        cout << "Current time: " << ctime(&currentTime);
    }
    else if(inputContent.substr(0, 4) == "calc"){
        cout << "The calc function is not yet fully developed. Please stay tuned for further updates.\n";
        // cout << performCalculation(inputContent) << endl;
    }
    else{
        cout << "Unknown command. Type 'help' for available commands.\n";
    }
    return true;
}

int main() {
    string command;
    cout << "Welcome to NebulaBloomOS!\n";
    while(true) {
        cout << "NebulaBloomOS> ";
        getline(cin, command);
        
        if(!handleCommand(command)) {
            break;
        }
    }
    return 0;
}
