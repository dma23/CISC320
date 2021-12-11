#pragma once

#include <string>

using namespace std;


class Shape {
    public:
        Shape();
        Shape(int, int);
        
        virtual ~Shape();
        virtual void draw();

        int get_length();
        int get_width();
        
    private:
        int length;
        int width;
}; 

class Square : public Shape { 
    public:
        Square(int, int, string);
        ~Square();

        void draw();

        string get_outline();

    private:
        string outline;
};

class Circle : public Square {
    public:
        Circle(int, int, string);
        ~Circle();
        
        void draw();
};

class Arc : public Square {
    public:
        Arc(int, int, string);
        ~Arc();
        
        void draw();
};

class FilledSquare : public Square { 
    public:
        FilledSquare(int, int, string, string);
        ~FilledSquare();
        
        void draw();
        
        string get_color();

    private:
        string color;
};

class FilledCircle : public FilledSquare {
    public:
        FilledCircle(int, int, string, string);
        ~FilledCircle();
        
        void draw();
};

class FilledTextSquare : public FilledSquare {
    public:
        FilledTextSquare(int, int, string, string, string);
        ~FilledTextSquare();
        
        void draw();
        
        string get_text();

    private:
        string text;
};

