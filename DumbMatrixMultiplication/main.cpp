#include <iostream>
#include <conio.h>

using namespace std;

bool top_left(int a, int b, int e, int g){
    if ((a*e + b*g )== (10*a + e)){
        return true;
    }else{
        return false;
    }
}

bool top_right(int a, int b, int f, int h){
    if ((a*f + b*h )== (10*b + f)){
        return true;
    }else{
        return false;
    }
}

bool bottom_left(int c, int d, int e, int g){
    if ((c*e + d*g )== (10*c + g)){
        return true;
    }else{
        return false;
    }
}

bool bottom_right(int c, int d, int f, int h){
    if ((c*f + d*h )== (10*d + h)){
        return true;
    }else{
        return false;
    }
}

int searching(){
    int counter = 0;
    for (int a=1; a<=9; a++){
        for (int b=1; b<=9; b++){
            for (int e=1; e<=9; e++){
                for (int g=1; g<=9; g++){
                    if (top_left(a,b,e,g)){
                        for (int f=1; f<=9; f++){
                            for (int h=1; h<=9; h++){
                                if (top_right(a,b,f,h)){
                                    for (int c=1; c<=9; c++){
                                        for (int d=1; d<=9; d++){
                                            if ((bottom_left(c,d,e,g)) && (bottom_right(c,d,f,h))){
                                                cout << "\n(" << a << " " << b << ")(" << e << " " << f << ") = (" << a << e << " " << b << f << ")" << endl;
                                                cout << "(" << c << " " << d << ")(" << g << " " << h << ") = (" << c << g << " " << d << h << ")" << endl;
                                                counter++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return counter;
}

int main()
{
    int counter;
    counter = searching();
    cout << "\nTotal All Possibilities = " << counter << endl;
    getch();
    return 0;
}
