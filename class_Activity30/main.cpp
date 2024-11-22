//
//  main.cpp
//  class_Activity30
//
//  Created by Parsa Faraji on 11/13/24.
//

#include <iostream>
#include "TextBox.hpp"

int main(int argc, const char * argv[]) {
    // TextBox initialization
    TextBox textBox1;
    TextBox textBox2("This is a textbox");

    // output string text
    cout << "TextBox 1 says:\n" << textBox1.toString() << endl;
    cout << "TextBox 2 says:\n" << textBox2.toString() << endl;
    
    return 0;
}
