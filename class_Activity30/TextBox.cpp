//
//  TextBox.cpp
//  class_Activity30
//
//  Created by Parsa Faraji on 11/13/24.
//

#include "TextBox.hpp"

// default constructor definition
TextBox::TextBox() : text("") {};

// second constructor - explicit - takes string object
TextBox::TextBox(const string& text): text(text){};

// setter method
void TextBox::setText(const string& text){
    this-> text = text;
}

// getter method
string TextBox::getText() const{
    return this-> text;
}

string TextBox::toString() const {
    return TextBox::getText();
}
