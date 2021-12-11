#include <string>
#include <iostream>

#include "ShapesGood.h"

using namespace std;

Shape::Shape() : length(0), width(0) {}
Shape::Shape(int len, int wid) : length(len), width(wid) {}


int Shape::get_length() { 
    return length; 
}

int Shape::get_width() { 
    return width; 
}

void Shape::draw() { 
    cout << "Shape" << endl; 
}

Square::Square(int len, int wid, string ol) : outline(ol), Shape(len, wid) {  };

	
string Square::get_outline() { 
    return outline;
}

void Square::draw() {
	cout << "Drawing a " + get_outline() + " square."  << endl;
}

Circle::Circle(int len, int wid, string ol) : Square(len, wid, ol) {};


void Circle::draw() {
	cout << "Drawing a " + get_outline() + " circle." << endl;
}

//child class Arc of Square
Arc::Arc(int len, int wid, string ol) : Square(len, wid, ol) {};


void Arc::draw() {
	cout << "Drawing a " + get_outline() + " arc.";
}

FilledSquare::FilledSquare(int len, int wid, string ol, string col) : color(col), Square(len, wid, ol) {};


string FilledSquare::get_color() { 
    return color;
}

void FilledSquare::draw() {
	cout << "Drawing a " + get_outline() + " square.";
	cout << " With " + get_color() + " fill.";
}

FilledCircle::FilledCircle(int len, int wid, string ol, string col) : FilledSquare(len, wid, ol, col) {}

void FilledCircle::draw() {
	cout << "Drawing a " + get_outline() + " circle.";
	cout << " With " + get_color() + " fill.";
}

FilledTextSquare::FilledTextSquare(int len, int wid, string ol, string col, string txt) : text(txt), FilledSquare(len, wid, ol, col) {};

string FilledTextSquare::get_text() { 
    return text;
}

void FilledTextSquare::draw() {
	cout << "Drawing a " + get_outline() + " square.";
	cout << " With " + get_color() + " fill.";
	cout << " Containing the text: " << get_text();
}


Shape::~Shape() {

}

Square::~Square() {

}

Circle::~Circle() {

}

Arc::~Arc() {

}

FilledSquare::~FilledSquare() {

}

FilledCircle::~FilledCircle() {
    
}

FilledTextSquare::~FilledTextSquare() {

}
