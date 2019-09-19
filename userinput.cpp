#include <iostream>
#include <string>

class TextInput
{
private:
    std::string s;
public:
    
   virtual void add(char c) {
      
        s=s+std::string(1,c);
    }

    std::string getValue() { return s; }
};

class NumericInput : public TextInput { 



    void add(char c) {
        
        
        if(isdigit(c))
            
        {
            TextInput::add(c);
            
        }
                     }





};

#ifndef RunTests
int main()
{
    TextInput* input = new NumericInput();
    input->add('1');
    input->add('a');
    input->add('0');
    std::cout << input->getValue();
}
#endif
