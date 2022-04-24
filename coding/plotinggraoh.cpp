#include<bits/stdc++.h>
using namespace std;
// #include "pbPlots.hpp"
// #include "supportlib.hpp"

int main(){
    RGBABitmapImageReference *imageRef = createRGBABitmapImageReference();

    vector<double>x{-2,-1,0,1,2};
    vector<double>y{2,-1,-2,-1,2};

    DrawScatterPlot(imageRef,600,400,&x,&y);
    vector<double> *pngData = ConvertToPNG(imageRef ->image);
    writeToFile(pngData,"plot.png");
    DeleteImage(imageRef ->image);
    return 0;
}