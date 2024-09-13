#include <iostream>
#include <string>

// Austin Bian C++

void fizzBizz(int amount);

int main() {
    int amount = 250;
    fizzBizz(amount);
    return 0;
}


void fizzBizz(int amount) {
    std::string temp = "";
    for(int i = 1; i <= amount; i++){
        if(i % 3 == 0){
            temp+="Fizz";

        }
        if(i % 5 == 0){
            temp+="Fizzy";

        }
        if(i % 7 == 0){
            temp+="Buzz";
        }
        temp.size() == 0 ? std::cout << i : std::cout << temp;
        std::cout << std::endl;
        temp = "";
    }
}