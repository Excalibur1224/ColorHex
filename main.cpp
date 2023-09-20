#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        else{
            for(int i=0;i<(int)input.size();++i){
                if(input[i] > 'f'){
                    std::cout<<input<<" is not a valid hex value. Please enter valid hex values (0-f)\n";
                    input = "n";
                    break;
                }
            }
        }
    }while( input.size() != RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}