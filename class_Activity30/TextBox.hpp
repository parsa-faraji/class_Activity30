//
//  TextBox.hpp
//  class_Activity30
//
//  Created by Parsa Faraji on 11/13/24.
//

#ifndef TextBox_hpp
#define TextBox_hpp
#include <iostream>
#include <stdio.h>
using namespace std;

// define class
class TextBox {
    // private attributes
    private:
        string text;
    
    // public attributes + constructors and method declarations
    public:
        TextBox();
        explicit TextBox(const string& text);
        void setText(const string& text);
        string getText() const;
        string toString() const;
};

#endif /* TextBox_hpp */
